/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x14007E3D0
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C4020 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401D2F9C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 */

__int64 __fastcall GreDwmUseDeviceBitmaps(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (unsigned int)IsDwmActive(a1) )
    return *(unsigned int *)(*(_QWORD *)(W32GetSessionState() + 96) + 88LL);
  return v1;
}
