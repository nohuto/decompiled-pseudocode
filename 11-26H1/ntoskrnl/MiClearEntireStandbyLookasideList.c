/*
 * XREFs of MiClearEntireStandbyLookasideList @ 0x1402AD660
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiWriteStandbyLookasideEntry @ 0x1402AD730 (MiWriteStandbyLookasideEntry.c)
 */

__int64 __fastcall MiClearEntireStandbyLookasideList(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  volatile signed __int64 *v8; // rsi

  v3 = 1;
  v5 = 64LL;
  do
  {
    if ( *a2 != -1LL )
    {
      v8 = (volatile signed __int64 *)(48LL * *a2 - 0x21FFFFFFFFE8LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        v3 = 0;
      }
      else
      {
        MiWriteStandbyLookasideEntry(a2, a3, -1LL);
        _InterlockedAnd64(v8, 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    ++a2;
    --v5;
  }
  while ( v5 );
  return v3;
}
