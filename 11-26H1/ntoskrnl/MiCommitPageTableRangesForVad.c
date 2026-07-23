/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x14052D93C
 * Callers:
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // rbx
  int v5; // esi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r13
  _QWORD *v10; // r12
  _QWORD *v11; // r15
  unsigned __int64 i; // rbp
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx

  v4 = *(_QWORD **)(a1 + 8);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --*(_QWORD *)(a1 + 16);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, a3, a4);
  do
  {
    v10 = (_QWORD *)*v4;
    v11 = v4 + 2;
    for ( i = 0LL; i < v4[1]; ++i )
    {
      v5 = MiCommitPageTablesForVad(
             a1,
             *v11 & 0xFFFFFFFFFFE00000uLL,
             (*v11 & 0xFFFFFFFFFFE00000uLL) + ((*v11 & 0x1FFFFFLL) << 21) + 0x1FFFFF,
             1LL);
      if ( v5 < 0 )
        goto LABEL_9;
      ++v11;
    }
    v4 = v10;
  }
  while ( v10 );
LABEL_9:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v13 = *(_QWORD **)(a1 + 8);
  if ( v13 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      ExFreePoolWithTag(v13, 0);
      v13 = v14;
    }
    while ( v14 );
  }
  ++*(_QWORD *)(a1 + 16);
  result = (unsigned int)v5;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
