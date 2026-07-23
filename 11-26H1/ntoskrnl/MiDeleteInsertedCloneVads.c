/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x140B42284
 * Callers:
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiDeleteCloneTree @ 0x140528E14 (MiDeleteCloneTree.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 */

PSLIST_ENTRY __fastcall MiDeleteInsertedCloneVads(ULONG_PTR a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD **v8; // rcx
  ULONG_PTR v9; // rsi
  _QWORD *v10; // rax
  _QWORD *i; // rcx

  CurrentThread = KeGetCurrentThread();
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1189LL) |= 1u;
  v6 = *(_QWORD **)(a1 + 1368);
  v7 = 0LL;
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v7 )
  {
    v8 = (_QWORD **)v7[1];
    v9 = (ULONG_PTR)v7;
    v10 = v7;
    if ( v8 )
    {
      v7 = (_QWORD *)v7[1];
      for ( i = *v8; i; i = (_QWORD *)*i )
        v7 = i;
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v10 )
          break;
        v10 = v7;
      }
    }
    MiLockVad((__int64)CurrentThread, v9, a3, a4);
    MiReferenceVad(v9);
    MiDeleteVad(v9, 0LL, 0x40000000);
  }
  return MiDeleteCloneTree(a1);
}
