/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x140392AC4
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140391BC8 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x140391CA0 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x140059C90 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x140393064 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r15
  ADAPTER_RENDER *v13; // rcx
  int MultiPlaneOverlayCaps; // eax
  UINT MaxRGBPlanes; // eax
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  int v18; // ecx
  __int64 v20; // [rsp+28h] [rbp-61h]
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v21; // [rsp+68h] [rbp-21h] BYREF

  v11 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 10882;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    LODWORD(v12) = 0;
    *a4 = 0;
    *a5 = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 3168LL);
    if ( v13
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13)
      && DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) + 16LL))
      && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
    {
      v21.VidPnSourceId = v11;
      memset(&v21.MaxPlanes, 0, 24);
      MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v21);
      v12 = MultiPlaneOverlayCaps;
      if ( MultiPlaneOverlayCaps < 0 )
      {
        WdLogSingleEntry3(2LL, MultiPlaneOverlayCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), v11);
        v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
        WdLogGlobalForLineNumber = 10951;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned error (0x%I64x) from GetMultiPlaneOverlayCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v12,
          v20,
          v11,
          0LL,
          0LL);
      }
      else
      {
        if ( v21.MaxPlanes )
        {
          MaxRGBPlanes = v21.MaxRGBPlanes;
          MaxStretchFactor = v21.MaxStretchFactor;
          MaxShrinkFactor = v21.MaxShrinkFactor;
          *a3 = v21.MaxPlanes;
          *a4 = MaxRGBPlanes;
          *a5 = v21.MaxYUVPlanes;
          v18 = *(_WORD *)&v21.OverlayCaps.0 & 0x7FF;
          *a7 = MaxStretchFactor;
          *a8 = MaxShrinkFactor;
          a6->Value = a6->Value & 0xFFFFF800 | v18;
        }
        else
        {
          *a3 = 1;
          *a4 = 0;
          *a5 = 0;
          a6->Value = 0;
          *a7 = 1.0;
          *a8 = 1.0;
        }
        a6->Value |= 0x800u;
      }
    }
    return (unsigned int)v12;
  }
}
