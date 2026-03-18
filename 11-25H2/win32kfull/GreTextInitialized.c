/*
 * XREFs of GreTextInitialized @ 0x1400C006C
 * Callers:
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     CreateBitmapStrip @ 0x1400C0830 (CreateBitmapStrip.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1401E71D4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF30 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140146FEC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall GreTextInitialized(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int v4; // ebx

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(SessionState + 96) + 24232LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v4) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v4;
}
