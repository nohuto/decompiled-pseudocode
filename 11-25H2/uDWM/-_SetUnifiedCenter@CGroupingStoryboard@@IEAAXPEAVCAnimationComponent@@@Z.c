/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800CA410
 * Callers:
 *     _lambda_074c95c81bff18b0cb7765135f89e04b_::operator() @ 0x1800C6824 (_lambda_074c95c81bff18b0cb7765135f89e04b_--operator().c)
 *     _lambda_23809c4bef085b6fa213042e01960e5b_::operator() @ 0x1800C6874 (_lambda_23809c4bef085b6fa213042e01960e5b_--operator().c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800C9D4C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180087FF0 (-GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterReference3D@@@Z @ 0x1800A3F70 (-SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterRef.c)
 *     ?SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z @ 0x1800A3FA0 (-SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z.c)
 *     ?MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z @ 0x1800C7BC4 (-MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800C9C30 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800CA1F4 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
      v9.x = (float)(v8.right + v8.left) * 0.5;
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
