/*
 * XREFs of MiRecheckCombineVm @ 0x14040424C
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1403093AC (MiCombineInitialInstance.c)
 * Callees:
 *     MiCombineCandidate @ 0x1402F3F80 (MiCombineCandidate.c)
 *     MiGetTopLevelPfn @ 0x140404690 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140404850 (MiGetPageTablePfnBuddyRaw.c)
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
    return a4 == &unk_140E37080;
  TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)a3);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v9, TopLevelPfn);
  if ( v11 != a3 )
    _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = a4 == (void *)(PageTablePfnBuddyRaw + 1024);
  return v7;
}
