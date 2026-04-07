/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800C44F4
 * Callers:
 *     _CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator() @ 0x1800C0504 (_CGroupingStoryboard--_Create3DComponent_--_44_--_lambda_1_--operator().c)
 *     _CAppSwitch::_WindowEnumCallback_::_81_::_lambda_1_::operator() @ 0x1800C0554 (_CAppSwitch--_WindowEnumCallback_--_81_--_lambda_1_--operator().c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800C3E4C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800774B0 (-GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterReference3D@@@Z @ 0x180096714 (-SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterRef.c)
 *     ?SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z @ 0x180096744 (-SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z.c)
 *     ?MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z @ 0x1800C1BC4 (-MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800C3D30 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800C42F4 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGroupingStoryboard::_SetUnifiedCenter(CGroupingStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v3; // edi
  CAnimatedTransitionVisual *v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+28h] [rbp-18h]
  struct tagRECT v8; // [rsp+30h] [rbp-10h] BYREF
  struct D2D_POINT_2F v9; // [rsp+50h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 6) & 0xFFF;
  if ( ((*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 120LL))(this, v3) & 8) != 0 )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v3, &v8) >= 0 )
    {
      v9.x = (float)(v8.left + v8.right) * 0.5;
      v5 = (CAnimatedTransitionVisual *)*((_QWORD *)a2 + 5);
      v9.y = (float)(v8.bottom + v8.top) * 0.5;
      v8 = 0LL;
      CAnimatedTransitionVisual::GetBeginRect(v5, &v8);
      MapPointIntoRectangle(&v9, &v8, (struct D2D_POINT_3F *)&v6);
      CAnimatedTransitionVisual::SetOverrideRotationCenter(*((_QWORD *)a2 + 5), (__int64)&v6);
      CAnimatedTransitionVisual::SetOverrideScalingCenter(
        *((CAnimatedTransitionVisual **)a2 + 5),
        (struct D2D_POINT_3F *)&v6);
      if ( (unsigned int)CGroupingStoryboard::_NumberOfWindowsInUnionRect(this, v3) > 1 || v3 - 45 <= 1 )
      {
        if ( *((_DWORD *)a2 + 17) != 2 )
          *((_DWORD *)a2 + 17) = 3;
      }
      else if ( *((_DWORD *)a2 + 17) != 2 )
      {
        *((_DWORD *)a2 + 17) = 1;
      }
    }
  }
}
