/*
 * XREFs of MiRecheckCombineVm @ 0x1403FD34C
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 * Callees:
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 */

__int64 __fastcall MiRecheckCombineVm(_QWORD *a1, char a2, const __m128i *a3, void *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 TopLevelPfn; // rax
  __int64 v9; // rdx
  __int64 PageTablePfnBuddyRaw; // rax
  const __m128i *v11; // r8

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = 0;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
    return a4 == &unk_140E37200;
  TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)a3);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v9, TopLevelPfn);
  if ( v11 != a3 )
    _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = a4 == (void *)(PageTablePfnBuddyRaw + 1024);
  return v7;
}
