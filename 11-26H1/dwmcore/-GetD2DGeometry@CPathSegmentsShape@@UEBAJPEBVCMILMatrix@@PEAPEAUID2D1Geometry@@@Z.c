/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800505E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180013E1C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005008C (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?load@?$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_order@2@@Z @ 0x180050A1C (-load@-$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_orde.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathSegmentsShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // rsi
  struct ID2D1Geometry *v4; // rdi
  int v5; // r14d
  __int64 *v7; // r15
  __int64 v9; // rcx
  struct ID2D1Geometry *v10; // rax
  struct ID2D1Geometry *v11; // rbx
  struct ID2D1Geometry *v12; // rsi
  struct ID2D1Geometry *v13; // rcx
  struct ID2D1Geometry *v14; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, struct ID2D1Geometry **); // rbx
  int v18; // eax
  struct ID2D1Geometry *v19; // rbx
  __int64 (__fastcall *v20)(struct ID2D1Geometry *, struct ID2D1GeometrySink **); // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  struct ID2D1GeometrySink *v26; // rcx
  struct ID2D1GeometrySink *v27; // rcx
  CTransformedGeometryHelper *v28; // rax
  __int64 v29; // rdx
  CTransformedGeometryHelper *v30; // rbx
  void (__fastcall *v31)(CTransformedGeometryHelper *); // rax
  int D2DGeometry; // eax
  __int64 v33; // rax
  unsigned int v34; // xmm1_4
  int (__fastcall **v35)(struct ID2D1Geometry *, GUID *, struct ID2D1GeometrySink **); // rax
  int (__fastcall *v36)(struct ID2D1Geometry *, GUID *, struct ID2D1GeometrySink **); // rax
  unsigned int v37; // xmm0_4
  struct ID2D1GeometrySink *v38; // rbx
  void (__fastcall *v39)(struct ID2D1GeometrySink *, struct ID2D1Geometry **); // r14
  int v40; // eax
  struct ID2D1GeometrySink *v41; // rcx
  struct ID2D1GeometrySink *v42; // rcx
  struct ID2D1GeometrySink *v43; // [rsp+38h] [rbp-49h] BYREF
  struct ID2D1Geometry *v44; // [rsp+40h] [rbp-41h] BYREF
  struct ID2D1Geometry *v45; // [rsp+48h] [rbp-39h] BYREF
  __int64 v46; // [rsp+50h] [rbp-31h] BYREF
  __int128 v47; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-19h]
  __int128 v49; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-1h]
  __m128i si128; // [rsp+88h] [rbp+7h] BYREF
  __int64 v52; // [rsp+98h] [rbp+17h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v5 = 0;
  v7 = *(__int64 **)(v3 + 40);
  v44 = 0LL;
  if ( std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v3 + 56) && v7 == *(__int64 **)(v3 + 40) )
  {
    v10 = (struct ID2D1Geometry *)std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v9);
    v11 = v10;
    if ( v44 != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 8LL))(v10);
      v44 = v11;
    }
LABEL_7:
    v12 = v44;
    v44 = 0LL;
    goto LABEL_8;
  }
  v16 = *v7;
  v43 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v16 + 80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  v18 = v17(v7, &v44);
  v5 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x67u, 0LL);
    v12 = 0LL;
  }
  else
  {
    v19 = v44;
    v20 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v44 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
    v21 = v20(v19, &v43);
    v5 = v21;
    if ( v21 < 0 )
    {
      v4 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x68u, 0LL);
    }
    else
    {
      v22 = CPathData::PushIntoSink((CPathData *)v3, v43);
      v5 = v22;
      if ( v22 < 0 )
      {
        v4 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x6Au, 0LL);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v43 + 72LL))(v43);
        v5 = v23;
        if ( v23 >= 0 )
        {
          if ( v7 == *(__int64 **)(v3 + 40) )
          {
            v24 = v3 + 56;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 56), (signed __int64)v44, 0LL) )
            {
              v33 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v24);
              Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&v44, v33);
            }
            else
            {
              v25 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v24);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
            }
          }
          v26 = v43;
          v4 = 0LL;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v26 + 16LL))(v26);
          }
          goto LABEL_7;
        }
        v4 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6Cu, 0LL);
      }
    }
    v27 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v12 = 0LL;
  }
LABEL_8:
  v13 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1Au, 0LL);
    goto LABEL_19;
  }
  v44 = 0LL;
  v5 = 0;
  if ( v12 )
  {
    if ( a2 )
    {
      if ( CMILMatrix::Is2DAffine<1>((__int64)a2, 1) )
      {
        v45 = v12;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v45);
        v34 = *((_DWORD *)a2 + 1);
        v35 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1GeometrySink **))v12;
        LODWORD(v49) = *(_DWORD *)a2;
        *(_QWORD *)((char *)&v49 + 4) = __PAIR64__(*((_DWORD *)a2 + 4), v34);
        v36 = *v35;
        v37 = *((_DWORD *)a2 + 12);
        HIDWORD(v49) = *((_DWORD *)a2 + 5);
        v50 = __PAIR64__(*((_DWORD *)a2 + 13), v37);
        v43 = 0LL;
        if ( v36(v12, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v43) >= 0 )
        {
          v38 = v43;
          v39 = *(void (__fastcall **)(struct ID2D1GeometrySink *, struct ID2D1Geometry **))(*(_QWORD *)v43 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          v39(v38, &v45);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v52 = 0LL;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __m128i *))(*(_QWORD *)v43 + 144LL))(v43, &si128);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v47,
            (const struct D2D1::Matrix3x2F *)&si128,
            (const struct D2D1::Matrix3x2F *)&v49);
          v49 = v47;
          v50 = v48;
        }
        v46 = 0LL;
        v40 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                                + 72LL))(
                g_DeviceManager,
                v45,
                &v49,
                &v46);
        v5 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x2Eu, 0LL);
          v42 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v42 + 16LL))(v42);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          goto LABEL_15;
        }
        Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v44, v46);
        v41 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v41 + 16LL))(v41);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
        v4 = v44;
      }
      else
      {
        v28 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        v30 = v28;
        if ( v28 )
        {
          CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
            (__int64)v28,
            v29);
          *((_QWORD *)v30 + 2) = a2;
          v31 = (void (__fastcall *)(CTransformedGeometryHelper *))*(&CTransformedGeometryHelper::`vftable' + 1);
          *(_QWORD *)v30 = &CTransformedGeometryHelper::`vftable';
          *((_QWORD *)v30 + 3) = 0LL;
          *((_QWORD *)v30 + 4) = 0LL;
          *((_QWORD *)v30 + 5) = 0LL;
          *((_QWORD *)v30 + 6) = 0LL;
          *((_QWORD *)v30 + 7) = 0LL;
          v31(v30);
        }
        else
        {
          v30 = 0LL;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v30, v12, &v44);
        v5 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
          if ( v30 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v30 + 16LL))(v30);
          v4 = v44;
          goto LABEL_15;
        }
        if ( v30 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v30 + 16LL))(v30);
        v4 = v44;
      }
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v12 + 8LL))(v12);
      v4 = v12;
    }
  }
  v14 = v4;
  v4 = 0LL;
  *a3 = v14;
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1Cu, 0LL);
LABEL_19:
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v5;
}
