/*
 * XREFs of ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005E960 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180064250 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x180064268 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180075000 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(__m128 *this, struct CDrawingContext *a2, __int64 a3)
{
  int v5; // eax
  struct Windows::Foundation::Numerics::float4x4 *v6; // r8
  int v7; // ebx
  unsigned __int64 v8; // rax
  int v9; // eax
  CD2DContext *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  bool v17; // al
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v24; // [rsp+20h] [rbp-99h]
  __m128 v25[4]; // [rsp+30h] [rbp-89h] BYREF
  __int32 v26; // [rsp+70h] [rbp-49h]
  _BYTE v27[64]; // [rsp+80h] [rbp-39h] BYREF
  int v28; // [rsp+C0h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+D0h] [rbp+17h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start,
      a3,
      1u,
      &v29);
  v5 = (*(__int64 (__fastcall **)(__m128 *, struct CDrawingContext *))(this->m128_u64[0] + 40))(this, a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    v24 = 215;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v24, 0LL);
    goto LABEL_29;
  }
  v8 = this[2].m128_u64[1];
  if ( v8 )
    *((_QWORD *)a2 + 995) = v8;
  if ( this[2].m128_i8[2] )
  {
    v9 = *((_DWORD *)a2 + 778);
    if ( v9 )
      *((_DWORD *)a2 + 778) = v9 - 1;
    --*(_QWORD *)(*((_QWORD *)a2 + 93) - 184LL);
    *((_BYTE *)a2 + 8065) = 1;
    this[2].m128_i8[2] = 0;
  }
  if ( !this[2].m128_i8[1] )
    goto LABEL_41;
  v10 = (CD2DContext *)(*((_QWORD *)a2 + 4) + 16LL);
  v29.Ptr = 0LL;
  v11 = CD2DContext::PopTarget(v10, (struct CDrawingContext *)((char *)a2 + 16), (struct IDeviceTarget **)&v29);
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC4u, 0LL);
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)a2 + 3) + 112LL))(*((_QWORD *)a2 + 3), (char *)a2 + 16);
  v12 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 3) = v29.Ptr;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  CDrawingContext::UpdateRenderTargetInfo(a2);
  CDrawingContext::PopClippingScope(a2, 0);
  *((_BYTE *)a2 + 8065) = 1;
  if ( v7 >= 0 )
  {
LABEL_41:
    if ( this[2].m128_i8[0] )
    {
      v13 = this[3];
      v14 = this[4];
      v26 = this[7].m128_i32[0];
      v25[0] = v13;
      v15 = this[5];
      v25[1] = v14;
      v16 = this[6];
      v25[2] = v15;
      v25[3] = v16;
      v17 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)v25,
              (const struct Windows::Foundation::Numerics::float4x4 *)v25,
              v6);
      LOWORD(v26) = v26 & 0xC003;
      v26 = v17 ? v26 : 0;
      CMILMatrix::Multiply((struct CDrawingContext *)((char *)a2 + 88), (const struct CMILMatrix *)v25);
      *((_BYTE *)a2 + 8064) = CMILMatrix::IsIdentity<0>((char *)a2 + 88);
      if ( *((_BYTE *)a2 + 7936) )
      {
        v18 = *((_QWORD *)a2 + 995);
        if ( v18 )
        {
          v28 = 0;
          CMILMatrix::Multiply((const struct CMILMatrix *)(v18 + 1132), v25, (struct CMILMatrix *)v27);
          v19 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v18, (const struct CMILMatrix *)v27);
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x38u, 0LL);
        }
      }
      v20 = *((_DWORD *)a2 + 72);
      if ( v20 )
        *((_DWORD *)a2 + 72) = v20 - 1;
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)a2 + 304);
      this[2].m128_i8[0] = 0;
    }
    v5 = (*(__int64 (__fastcall **)(__m128 *, struct CDrawingContext *))(this->m128_u64[0] + 48))(this, a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      v24 = 241;
    }
    else
    {
      v21 = this->m128_u64[0];
      if ( *((_BYTE *)a2 + 185) )
      {
        v5 = (*(__int64 (__fastcall **)(__m128 *, struct CDrawingContext *))(v21 + 64))(this, a2);
        v7 = v5;
        if ( v5 >= 0 )
          goto LABEL_29;
        v24 = 250;
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(__m128 *, struct CDrawingContext *))(v21 + 56))(this, a2);
        v7 = v5;
        if ( v5 >= 0 )
          goto LABEL_29;
        v24 = 254;
      }
    }
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xE8u, 0LL);
LABEL_29:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      v22,
      1u,
      &v29);
  return (unsigned int)v7;
}
