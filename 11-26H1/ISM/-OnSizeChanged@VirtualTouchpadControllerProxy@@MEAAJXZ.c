/*
 * XREFs of ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801389E0
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180138660 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1801387D0 (-OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18002A150 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18007D750 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009970C (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x1800998D0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1801390C4 (-RelativeRectToScreen@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x180139660 (-ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Inter.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801A58E8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A597C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A5BC4 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnSizeChanged(VirtualTouchpadControllerProxy *this)
{
  BamoAnimationTargetClientProxy *v1; // rdi
  const struct Windows::UI::Internal::Input::GestureAnimationData *Data; // rax
  __int64 v4; // xmm0_8
  __int64 v5; // rax
  float *v6; // rax
  float v7; // xmm1_4
  LONG v8; // esi
  float v9; // xmm0_4
  LONG v10; // r14d
  float v11; // xmm1_4
  VirtualTouchpadContextProvider *Instance; // rax
  int v13; // edi
  __int64 v14; // rdx
  VirtualTouchpadContextProvider *v16; // rax
  bool v17; // zf
  struct tagRECT v18; // [rsp+28h] [rbp-39h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-29h] BYREF
  __m128d v20; // [rsp+48h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h]
  VirtualTouchpadControllerProxy *v22; // [rsp+60h] [rbp-1h] BYREF
  LONG v23; // [rsp+68h] [rbp+7h]
  LONG v24; // [rsp+6Ch] [rbp+Bh]
  int v25; // [rsp+70h] [rbp+Fh]
  int v26; // [rsp+74h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v1 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( BamoMagnifierControllerProxy::GetGesturesEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8))
    && *((_BYTE *)this + 208) )
  {
    Data = BamoAnimationTargetClientProxy::GetData(v1);
    v4 = *((_QWORD *)Data + 2);
    v20 = *(__m128d *)Data;
    v21 = v4;
    v5 = std::optional<tagINPUT_TRANSFORM>::value((__int64)this + 144);
    *(_QWORD *)&v18.left = 0LL;
    *(float *)&v4 = v20.m128d_f64[0];
    v18.right = v4;
    *(float *)&v4 = _mm_unpackhi_pd(v20, v20).m128d_f64[0];
    v18.bottom = v4;
    v19 = v18;
    v6 = (float *)CInputTransform::RelativeRectToScreen(&v22, &v19, v5);
    v7 = v6[1];
    v8 = (int)*v6;
    v9 = *v6 + v6[2];
    v10 = (int)v7;
    v18.left = v8;
    v11 = v7 + v6[3];
    v18.top = v10;
    v18.right = (int)v9;
    v18.bottom = (int)v11;
    InputTraceLogging::VirtualTouchpad::ServerSizeChanged(
      this,
      (const struct Windows::UI::Internal::Input::VirtualTouchpadSize *)&v20,
      &v18);
    *(_QWORD *)&v19.left = v21;
    LOBYTE(v19.right) = 1;
    *(struct tagRECT *)((char *)this + 232) = v19;
    if ( *((_BYTE *)this + 240) && *((double *)this + 29) == 0.0 )
      *((_BYTE *)this + 240) = 0;
    if ( BamoShellGesturesClientProxy::GetTouchEnabled(v1) )
    {
      if ( *((_BYTE *)this + 228) )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        v22 = this;
        v23 = v8;
        v24 = v10;
        v25 = (int)v9;
        v26 = (int)v11;
        v13 = VirtualTouchpadContextProvider::OnTouchpadUpdated(Instance, (const struct VirtualTouchpadRect *)&v22);
        if ( v13 < 0 )
        {
          v14 = 339LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcon"
                 "troller\\server\\virtualtouchpadcontrollerproxy.cpp",
            (const char *)(unsigned int)v13);
          return (unsigned int)v13;
        }
      }
      else
      {
        v16 = VirtualTouchpadContextProvider::GetInstance();
        v22 = this;
        v23 = v8;
        v24 = v10;
        v25 = (int)v9;
        v26 = (int)v11;
        v13 = VirtualTouchpadContextProvider::OnTouchpadAdded(v16, (const struct VirtualTouchpadRect *)&v22);
        if ( v13 < 0 )
        {
          v14 = 348LL;
          goto LABEL_10;
        }
      }
    }
    v17 = *((_BYTE *)this + 228) == 0;
    *(struct tagRECT *)((char *)this + 212) = v18;
    if ( v17 )
      *((_BYTE *)this + 228) = 1;
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  }
  return 0LL;
}
