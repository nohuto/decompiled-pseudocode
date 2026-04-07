/*
 * XREFs of ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x1800CF55C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6C60 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180089760 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetBitmapRects(
        CTransitionVisualController *this,
        HWND a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  int TransitionBitmapIndex; // eax
  __int64 v7; // rcx
  unsigned int v8; // r11d
  __int64 v9; // rdx

  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  if ( TransitionBitmapIndex >= 0 )
  {
    v9 = 56LL * (unsigned int)TransitionBitmapIndex;
    if ( a3 )
      *a3 = *(struct tagRECT *)(v9 + *(_QWORD *)(v7 + 152) + 12);
    if ( a4 )
      *a4 = *(struct tagRECT *)(*(_QWORD *)(v7 + 152) + v9 + 28);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v8;
}
