/*
 * XREFs of ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18000BE60
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180036EF0 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180074FAC (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLivePreviewAnimation(CTopLevelWindow *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 52) == 1 || *((_DWORD *)this + 52) == 2 )
  {
    v1 = CTopLevelWindow::LivePreviewAnimation_Flipped(this);
    v2 = v1;
    if ( v1 >= 0 )
      return v2;
    v4 = 4595;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, v4, 0LL);
    return v2;
  }
  if ( (unsigned int)(*((_DWORD *)this + 52) - 3) > 1 )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x11FCu, 0LL);
    return v2;
  }
  v1 = CTopLevelWindow::LivePreviewAnimation_Animated(this);
  v2 = v1;
  if ( v1 < 0 )
  {
    v4 = 4600;
    goto LABEL_10;
  }
  return v2;
}
