/*
 * XREFs of ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18000520C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x1800052A4 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180005350 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLivePreviewAnimation(CTopLevelWindow *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 48) == 1 || *((_DWORD *)this + 48) == 2 )
  {
    v1 = CTopLevelWindow::LivePreviewAnimation_Flipped(this);
    v2 = v1;
    if ( v1 >= 0 )
      return v2;
    v4 = 4436;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v4, 0LL);
    return v2;
  }
  if ( (unsigned int)(*((_DWORD *)this + 48) - 3) > 1 )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x115Du, 0LL);
    return v2;
  }
  v1 = CTopLevelWindow::LivePreviewAnimation_Animated(this);
  v2 = v1;
  if ( v1 < 0 )
  {
    v4 = 4441;
    goto LABEL_10;
  }
  return v2;
}
