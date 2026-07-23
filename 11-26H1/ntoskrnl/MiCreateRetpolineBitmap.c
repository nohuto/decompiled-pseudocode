/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140D00E08
 * Callers:
 *     MiInitializeRetpoline @ 0x140D00F38 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi

  v5 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 0x10000u, a3, a4);
  if ( !v5 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(
                        (__int64)&stru_140E2D2D0.WaitBlock[2].WaitListEntry.Blink,
                        (__int64)(v5 << 25) >> 16,
                        0x80000000LL,
                        7) )
  {
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v5, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v5 << 25) >> 16;
  return 0LL;
}
