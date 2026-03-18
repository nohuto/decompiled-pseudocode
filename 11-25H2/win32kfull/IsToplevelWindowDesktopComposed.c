/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x14004A2FC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     DefSetText @ 0x14004A028 (DefSetText.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x14004B1C0 (EditionUpdateCursorOnMouseMove.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     xxxGetTitleBarInfoEx @ 0x140118784 (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401C276C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     xxxDrawAnimatedRects @ 0x1402DF754 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        if ( v1 == *(_QWORD *)(v5 + 24) )
          return (unsigned int)IsWindowDesktopComposed(a1) != 0;
      }
    }
  }
  return v2;
}
