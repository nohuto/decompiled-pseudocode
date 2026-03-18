/*
 * XREFs of ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1401BFE18 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x1401BFFE0 (NtUserBitBltSysBmp.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1401C0220 (GreGetDCDpiScaleValue.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheIndex; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 UserSessionState; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem();
  DpiCacheIndex = GetDpiCacheIndex(DpiForSystem);
  v4 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheIndex = GetDpiCacheIndex((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = 760LL * DpiCacheIndex;
  if ( !*(_QWORD *)(UserSessionState + v10 + 43288) )
    CreateDPIBitmapStrip(DpiCacheIndex, v8);
  v11 = *(_QWORD *)(UserSessionState + v10 + 43288);
  if ( v11 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL);
    GreSelectBitmap(v4, v11);
  }
  return v4;
}
