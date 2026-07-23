/*
 * XREFs of MiUnlockBootPageSections @ 0x140D07520
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableSections @ 0x140D06FF0 (MiLockPagableSections.c)
 */

__int64 __fastcall MiUnlockBootPageSections(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 104);
  if ( (v1 & 0x400000) != 0 )
  {
    *(_DWORD *)(a1 + 104) = v1 & 0xFFBFFFFF;
    MiLockPagableSections(a1, 0);
  }
  return 0LL;
}
