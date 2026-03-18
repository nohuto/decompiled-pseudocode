/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x140154898
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1401547F0 (EditionNonDwmSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 *     xxxDoDeferredPointerActivate @ 0x14022C878 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1402A4E60 (EditionNonDwmTouchHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A50B0 (EditionPostDwmSpeedHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1402A5B30 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402AAC50 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
