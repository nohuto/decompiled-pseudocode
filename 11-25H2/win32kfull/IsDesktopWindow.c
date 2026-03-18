/*
 * XREFs of IsDesktopWindow @ 0x14004BF20
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     UserGetRedirectedWindowOrigin @ 0x14004BE20 (UserGetRedirectedWindowOrigin.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     ValidateParentDepth @ 0x140061AF8 (ValidateParentDepth.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 24);
  }
  return a1 == v2;
}
