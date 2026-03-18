/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x140392910
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140391BC8 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x140392370 (DxgkGetPostCompositionCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x14005B0D4 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x140392DA8 (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  ADAPTER_RENDER *v9; // rcx
  int PostCompositionCaps; // eax
  float MaxShrinkFactor; // xmm1_4
  __int64 v13; // [rsp+28h] [rbp-70h]
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v14; // [rsp+50h] [rbp-48h] BYREF

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 10974;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 3168LL);
    if ( v9
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
      && DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) + 16LL))
      && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
    {
      *(_QWORD *)&v14.MaxStretchFactor = 0LL;
      v14.VidPnSourceId = v7;
      PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v14);
      v8 = PostCompositionCaps;
      if ( PostCompositionCaps < 0 )
      {
        WdLogSingleEntry3(2LL, PostCompositionCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), v7);
        v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
        WdLogGlobalForLineNumber = 11007;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned error (0x%I64x) from GetPostCompositionCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v8,
          v13,
          v7,
          0LL,
          0LL);
      }
      else
      {
        MaxShrinkFactor = v14.MaxShrinkFactor;
        *a3 = v14.MaxStretchFactor;
        *a4 = MaxShrinkFactor;
      }
    }
    return (unsigned int)v8;
  }
}
