/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180013CC0
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021C500 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180013E1C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x180014244 (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  CTransformedGeometryHelper *v3; // rdi
  unsigned int v4; // r15d
  struct ID2D1Geometry *v6; // rbx
  struct ID2D1Geometry *v8; // rax
  CTransformedGeometryHelper *v10; // rax
  CTransformedGeometryHelper *v11; // rax
  int D2DGeometry; // eax
  unsigned int v13; // xmm1_4
  int (__fastcall **v14)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v15)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v16; // xmm0_4
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, struct ID2D1Geometry **); // rsi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct ID2D1Geometry *v22; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  struct ID2D1Geometry *v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h] BYREF
  __int128 v26; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-9h]
  __int128 v28; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+Fh]
  __m128i si128; // [rsp+80h] [rbp+17h] BYREF
  __int64 v31; // [rsp+90h] [rbp+27h]

  v3 = 0LL;
  v4 = 0;
  v22 = 0LL;
  v6 = a2;
  if ( !a2 )
    goto LABEL_4;
  if ( !a1 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v3 = v6;
LABEL_4:
    v8 = v3;
    v3 = 0LL;
    *a3 = v8;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2) )
  {
    v24 = v6;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v24);
    v13 = *((_DWORD *)a1 + 1);
    v14 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))v6;
    LODWORD(v28) = *(_DWORD *)a1;
    *(_QWORD *)((char *)&v28 + 4) = __PAIR64__(*((_DWORD *)a1 + 4), v13);
    v15 = *v14;
    v16 = *((_DWORD *)a1 + 12);
    HIDWORD(v28) = *((_DWORD *)a1 + 5);
    v29 = __PAIR64__(*((_DWORD *)a1 + 13), v16);
    v23 = 0LL;
    if ( v15(v6, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v23) >= 0 )
    {
      v17 = v23;
      v18 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v23 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      v18(v17, &v24);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v31 = 0LL;
      (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v23 + 144LL))(v23, &si128);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v26,
        (const struct D2D1::Matrix3x2F *)&si128,
        (const struct D2D1::Matrix3x2F *)&v28);
      v28 = v26;
      v29 = v27;
    }
    v25 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                            + 72LL))(
            g_DeviceManager,
            v24,
            &v28,
            &v25);
    v4 = v19;
    if ( v19 >= 0 )
    {
      Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v22, v25);
      v20 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      v3 = v22;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x2Eu, 0LL);
    v21 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  }
  else
  {
    v10 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    if ( v10 )
    {
      v11 = CTransformedGeometryHelper::CTransformedGeometryHelper(v10, a1);
      v3 = v11;
      if ( v11 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v3, v6, &v22);
    v4 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v3 + 16LL))(v3);
      v3 = v22;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v3 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v3 + 16LL))(v3);
    v3 = v22;
  }
LABEL_5:
  if ( v3 )
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
