/*
 * XREFs of MiCreatePagingFileMapPrepare @ 0x1409895D4
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 * Callees:
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiValidateUserPhysicalExternalFlags @ 0x14077F5A8 (MiValidateUserPhysicalExternalFlags.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiCreatePagingFileMapPrepare(_QWORD *a1)
{
  __int64 v1; // rdi
  int v3; // ebx
  char v4; // bp
  unsigned __int64 v5; // rdx
  int v6; // r8d
  unsigned __int64 v7; // rdx
  ULONG **v8; // rcx
  ULONG *v9; // rcx

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 + 16LL);
  if ( (v3 & 0x1000000) != 0 )
    return 3221225504LL;
  MiInitializeLargePfnList((__int64)(a1 + 3));
  v4 = *(_BYTE *)(v1 + 192);
  if ( v4 )
  {
    if ( (int)MiValidateUserPhysicalExternalFlags(v3) < 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(v1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v3 >= 0 )
    {
      if ( (v3 & 0x20000) == 0 )
        goto LABEL_5;
      return 3221225716LL;
    }
    if ( (v3 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(v1 + 72)) )
    return 3221225569LL;
LABEL_5:
  v5 = *(_QWORD *)(v1 + 152);
  if ( !v4 )
  {
    if ( v5 )
    {
      v6 = v3 & 0x8000000;
      if ( v5 > (-(__int64)((v3 & 0x8000000) != 0) & 0xFFFFF001000uLL) - 4096 )
        return 3221225536LL;
      v7 = (v5 + 4095) >> 12;
      goto LABEL_9;
    }
    return 3221225714LL;
  }
  if ( v5 )
    return 3221225714LL;
  v7 = 1LL;
  v6 = v3 & 0x8000000;
LABEL_9:
  a1[1] = v7;
  if ( v6 && ((v7 & 0xF) != 0 && (v3 & 0x80000) != 0 || v3 < 0 && (v7 & 0x1FF) != 0) )
    return 3221225714LL;
  v8 = *(ULONG ***)(v1 + 176);
  if ( !v8 )
  {
    v9 = &MiSystemPartition;
LABEL_14:
    a1[2] = v9;
    return 0LL;
  }
  v9 = *v8;
  if ( v9 == &MiSystemPartition || (v9[1] & 0x20) == 0 )
    goto LABEL_14;
  return 3221225659LL;
}
