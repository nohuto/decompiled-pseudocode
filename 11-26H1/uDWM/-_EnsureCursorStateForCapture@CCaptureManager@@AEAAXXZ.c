/*
 * XREFs of ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC
 * Callers:
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1DD0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1F90 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A22F0 (-StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2E90 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3290 (-StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 */

void __fastcall CCaptureManager::_EnsureCursorStateForCapture(CCaptureManager *this)
{
  __int64 **v2; // rdx
  int v3; // r8d
  __int64 *v4; // rax
  bool v5; // zf
  int v6; // ecx
  __int64 **v7; // rcx
  __int64 *v8; // rax
  int v9; // edx
  char v10; // al

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v2 = (__int64 **)*((_QWORD *)this + 2);
    v3 = 0;
    v4 = *v2;
    while ( v4 != (__int64 *)v2 )
    {
      v5 = *((_BYTE *)v4 + 57) == 0;
      v6 = v3 + 1;
      v4 = (__int64 *)*v4;
      if ( v5 )
        v6 = v3;
      v3 = v6;
    }
    v7 = (__int64 **)*((_QWORD *)this + 18);
    v8 = *v7;
    while ( v8 != (__int64 *)v7 )
    {
      v5 = *((_BYTE *)v8 + 73) == 0;
      v9 = v3 + 1;
      v8 = (__int64 *)*v8;
      if ( v5 )
        v9 = v3;
      v3 = v9;
    }
    v10 = *((_BYTE *)this + 264);
    if ( v3 )
    {
      if ( !v10 )
      {
        EnableSoftwareCursorForScreenCapture(1LL);
        *((_BYTE *)this + 264) = 1;
      }
    }
    else if ( v10 )
    {
      EnableSoftwareCursorForScreenCapture(0LL);
      *((_BYTE *)this + 264) = 0;
    }
  }
}
