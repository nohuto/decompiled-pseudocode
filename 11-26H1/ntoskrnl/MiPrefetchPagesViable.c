/*
 * XREFs of MiPrefetchPagesViable @ 0x1404BD9E4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x140375C8C (MiPrefetchNormally.c)
 */

__int64 __fastcall MiPrefetchPagesViable(ULONG *a1, unsigned __int64 *a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  __int64 v8; // r9
  unsigned __int64 v10; // rax

  if ( !MiPrefetchNormally(a1, a4, a3) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 )
    return 1LL;
  v10 = MiObtainFaultCharges(a1, a4, 1, v8);
  if ( v10 == a4 )
    return 1LL;
  MiReturnFaultCharges((__int64)a1, v10);
  return 0LL;
}
