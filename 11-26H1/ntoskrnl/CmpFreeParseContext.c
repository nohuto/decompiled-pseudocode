/*
 * XREFs of CmpFreeParseContext @ 0x1409376D0
 * Callers:
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x140937FE0 (CmpFreeExtraParameter.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

void __fastcall CmpFreeParseContext(PPRIVILEGE_SET Privileges, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG *p_Control; // rbx
  PPRIVILEGE_SET *v6; // rax
  PPRIVILEGE_SET v7; // rcx
  PPRIVILEGE_SET v8; // rcx
  __int64 v9; // rcx

  if ( Privileges[4].Privilege[0].Luid )
  {
    CmpLockRegistry(Privileges, a2, a3, a4);
    CmpDereferenceKeyControlBlock(*(_QWORD *)&Privileges[4].Privilege[0].Luid);
    CmpUnlockRegistry(v9);
  }
  p_Control = &Privileges[7].Control;
  v6 = *(PPRIVILEGE_SET **)&Privileges[7].Control;
  if ( v6[1] != (PPRIVILEGE_SET)&Privileges[7].Control )
    goto LABEL_11;
  v7 = *v6;
  if ( (PPRIVILEGE_SET *)(*v6)->Privilege[0].Luid != v6 )
    goto LABEL_11;
  *(_QWORD *)p_Control = v7;
  v7->Privilege[0].Luid = (LUID)p_Control;
  if ( v6 != (PPRIVILEGE_SET *)p_Control )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v6);
      v6 = *(PPRIVILEGE_SET **)p_Control;
      if ( *(ULONG **)(*(_QWORD *)p_Control + 8LL) != p_Control )
        break;
      v8 = *v6;
      if ( (PPRIVILEGE_SET *)(*v6)->Privilege[0].Luid != v6 )
        break;
      *(_QWORD *)p_Control = v8;
      v8->Privilege[0].Luid = (LUID)p_Control;
      if ( v6 == (PPRIVILEGE_SET *)p_Control )
        goto LABEL_6;
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_6:
  CmSiFreeMemory(Privileges);
}
