/*
 * XREFs of CmpFreeParseContext @ 0x1409756C0
 * Callers:
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x140975FD0 (CmpFreeExtraParameter.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

void __fastcall CmpFreeParseContext(PPRIVILEGE_SET Privileges)
{
  ULONG *p_Control; // rbx
  PPRIVILEGE_SET *v3; // rax
  PPRIVILEGE_SET v4; // rcx
  PPRIVILEGE_SET v5; // rcx
  __int64 v6; // rcx

  if ( Privileges[4].Privilege[0].Luid )
  {
    CmpLockRegistry(Privileges);
    CmpDereferenceKeyControlBlock(*(_QWORD *)&Privileges[4].Privilege[0].Luid);
    CmpUnlockRegistry(v6);
  }
  p_Control = &Privileges[7].Control;
  v3 = *(PPRIVILEGE_SET **)&Privileges[7].Control;
  if ( v3[1] != (PPRIVILEGE_SET)&Privileges[7].Control )
    goto LABEL_11;
  v4 = *v3;
  if ( (PPRIVILEGE_SET *)(*v3)->Privilege[0].Luid != v3 )
    goto LABEL_11;
  *(_QWORD *)p_Control = v4;
  v4->Privilege[0].Luid = (LUID)p_Control;
  if ( v3 != (PPRIVILEGE_SET *)p_Control )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v3);
      v3 = *(PPRIVILEGE_SET **)p_Control;
      if ( *(ULONG **)(*(_QWORD *)p_Control + 8LL) != p_Control )
        break;
      v5 = *v3;
      if ( (PPRIVILEGE_SET *)(*v3)->Privilege[0].Luid != v3 )
        break;
      *(_QWORD *)p_Control = v5;
      v5->Privilege[0].Luid = (LUID)p_Control;
      if ( v3 == (PPRIVILEGE_SET *)p_Control )
        goto LABEL_6;
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_6:
  CmSiFreeMemory(Privileges);
}
