/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180029A54 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x180029F68 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18002B7AC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180058FFC (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075770 (-OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800902E0 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A9314 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800B7D7C (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CAnimationComponent *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v7; // r11
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v7 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = v4++;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v4);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x192u, 0LL);
  }
  return v3;
}
