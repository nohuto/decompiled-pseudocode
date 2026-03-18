/*
 * XREFs of ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140192F6C (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140054630 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreGetDCDpiScaleValue @ 0x140195950 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  unsigned int DpiForSystem; // eax
  __int64 v3; // rdx
  unsigned int DpiCacheSlot; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 UserSessionState; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem();
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem, v3);
  v5 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v6) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot((unsigned int)(96 * DCDpiScaleValue), v7);
    }
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = 760LL * DpiCacheSlot;
  if ( !*(_QWORD *)(UserSessionState + v11 + 43288) )
    CreateDPIBitmapStrip(DpiCacheSlot, v9);
  v12 = *(_QWORD *)(UserSessionState + v11 + 43288);
  if ( v12 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 72LL);
    GreSelectBitmap(v5, v12);
  }
  return v5;
}
