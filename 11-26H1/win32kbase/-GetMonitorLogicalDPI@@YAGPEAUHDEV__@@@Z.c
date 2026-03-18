/*
 * XREFs of ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x14011D99C
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140087A68 (DrvGetCurrentDpiInfoFromHDev.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall GetMonitorLogicalDPI(__int64 a1)
{
  int CurrentDpiInfoFromHDev; // eax
  int v3; // ecx
  _DWORD v5[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(a1, (__int64)v5);
  v3 = v5[2];
  if ( CurrentDpiInfoFromHDev < 0 )
    v3 = 100;
  return (unsigned __int16)((96 * v3 + 50) / 0x64u);
}
