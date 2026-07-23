/*
 * XREFs of DifMarkHiberPhase @ 0x14064F530
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void DifMarkHiberPhase()
{
  __int128 *i; // rbx
  __int64 *j; // rdi
  __int64 *k; // rdi

  for ( i = (__int128 *)DifAPIThunkContextHead; i != &DifAPIThunkContextHead; i = *(__int128 **)i )
  {
    for ( j = (__int64 *)*((_QWORD *)i + 2); j != (__int64 *)(i + 1); j = (__int64 *)*j )
      PoSetHiberRange(0LL, 0x10000u, j - 2, 0x20uLL, 0x4E666944u);
    for ( k = (__int64 *)*((_QWORD *)i + 4); k != (__int64 *)(i + 2); k = (__int64 *)*k )
      PoSetHiberRange(0LL, 0x10000u, k - 2, 0x20uLL, 0x4E666944u);
    PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x4E666944u);
  }
}
