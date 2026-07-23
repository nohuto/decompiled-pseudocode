/*
 * XREFs of MiPfnToOwningProcess @ 0x1403FD420
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 */

__int64 __fastcall MiPfnToOwningProcess(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 TopLevelPfn; // r8

  v2 = 0;
  if ( a2 )
  {
    return *(unsigned int *)(a2 + 464);
  }
  else
  {
    TopLevelPfn = MiGetTopLevelPfn(a1);
    if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) == 0 )
      v2 = *(_DWORD *)(MiGetPageTablePfnBuddyRaw(TopLevelPfn, v4, TopLevelPfn) + 464);
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v2;
}
