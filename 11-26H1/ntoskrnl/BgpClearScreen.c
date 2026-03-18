/*
 * XREFs of BgpClearScreen @ 0x140715B44
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x140717E40 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 *     BgpConsoleClearScreenEx @ 0x140C4FD78 (BgpConsoleClearScreenEx.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C51580 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 * Callees:
 *     BgpGxFillRectangle @ 0x1404AD7AC (BgpGxFillRectangle.c)
 *     BgpGxDrawRectangle @ 0x1404BFC2C (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x1404C009C (BgpGetBitsPerPixel.c)
 *     BgpGxInitializeRectangle @ 0x14071629C (BgpGxInitializeRectangle.c)
 */

__int64 __fastcall BgpClearScreen(unsigned int a1)
{
  __int64 result; // rax
  unsigned int Blink; // r14d
  unsigned int Flink_high; // r15d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int BitsPerPixel; // eax
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-Ch]
  unsigned int v15; // [rsp+28h] [rbp-8h]
  unsigned int v16; // [rsp+58h] [rbp+28h] BYREF
  unsigned int i; // [rsp+5Ch] [rbp+2Ch]

  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) == 0 )
    return 3221225473LL;
  Blink = (unsigned int)gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  Flink_high = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  v14 = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  v6 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  v7 = 8120;
  v15 = v5;
  v8 = Blink;
  v13 = Blink;
  v9 = v14;
  v10 = v6 * v14 * Blink;
  if ( v10 < 0x1FB8 )
    v7 = v6 * v14 * Blink;
  if ( v10 > v7 )
  {
    do
    {
      v8 >>= 1;
      v9 >>= 1;
      v5 >>= 1;
    }
    while ( v6 * v9 * v8 > v7 );
    v13 = v8;
    v14 = v9;
    v15 = v5;
  }
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxInitializeRectangle(&v13, BitsPerPixel, &unk_140E625C0, 0x2000LL);
  if ( (int)result >= 0 )
  {
    BgpGxFillRectangle((__int64)&unk_140E625C0, a1);
    v12 = 0;
    for ( i = 0; v12 < Flink_high; i = v12 )
    {
      v16 = 0;
      if ( Blink )
      {
        do
        {
          BgpGxDrawRectangle((__int64)&unk_140E625C0, (__int64)&v16);
          if ( (byte_140E625D0 & 0x10) != 0 )
            BgpGxFillRectangle((__int64)&unk_140E625C0, a1);
          v16 += v8;
        }
        while ( v16 < Blink );
        v12 = i;
      }
      v12 += v9;
    }
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x2000u;
    return 0LL;
  }
  return result;
}
