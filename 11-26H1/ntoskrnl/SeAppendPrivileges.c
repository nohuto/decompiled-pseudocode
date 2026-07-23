/*
 * XREFs of SeAppendPrivileges @ 0x1409338F0
 * Callers:
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1408480B8 (CMFCheckAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  ULONG PrivilegeCount; // r8d
  PVOID *AuxData; // r14
  _DWORD *v6; // rbx
  int v7; // edx
  unsigned int v8; // esi
  unsigned int v10; // esi
  void *Pool2; // rbx
  _DWORD *v12; // rdx
  __int64 v13; // rdx

  PrivilegeCount = Privileges->PrivilegeCount;
  AuxData = (PVOID *)AccessState->AuxData;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + PrivilegeCount <= 3 )
  {
    if ( v6 )
    {
      if ( v7 )
        v8 = 12 * v7 + 8;
      else
        v8 = 8;
    }
    else
    {
      v8 = 0;
    }
    memmove((char *)v6 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v6 += Privileges->PrivilegeCount;
    return 0;
  }
  v10 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v12 = *AuxData;
    if ( *AuxData )
    {
      if ( *v12 )
        v10 = 12 * *v12 + 8;
      else
        v10 = 8;
    }
    memmove(Pool2, v12, v10);
    SepConcatenatePrivileges(Pool2, v13, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
