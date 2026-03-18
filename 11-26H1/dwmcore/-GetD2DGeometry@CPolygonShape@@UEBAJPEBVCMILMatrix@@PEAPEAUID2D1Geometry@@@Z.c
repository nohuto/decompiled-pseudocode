/*
 * XREFs of ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180013B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180013E1C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetD2DGeometry(
        CPolygonShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // rax
  struct ID2D1Geometry *v4; // rdi
  unsigned int v5; // esi
  const struct CMILMatrix *v7; // r15
  const struct ID2D1Geometry *v8; // r14
  struct ID2D1Geometry *v9; // rax
  CTransformedGeometryHelper *v11; // rax
  CTransformedGeometryHelper *v12; // rbx
  void (__fastcall *v13)(CTransformedGeometryHelper *); // rax
  int D2DGeometry; // eax
  unsigned int v15; // xmm1_4
  int (__fastcall **v16)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v17)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v18; // xmm0_4
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, const struct ID2D1Geometry **); // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct ID2D1Geometry *v24; // [rsp+30h] [rbp-49h] BYREF
  __int64 v25; // [rsp+38h] [rbp-41h] BYREF
  const struct ID2D1Geometry *v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  __int128 v28; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-19h]
  __int128 v30; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-1h]
  __m128i si128; // [rsp+80h] [rbp+7h] BYREF
  __int64 v33; // [rsp+90h] [rbp+17h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v5 = 0;
  v24 = 0LL;
  v7 = a2;
  v8 = *(const struct ID2D1Geometry **)(v3 + 16);
  if ( !v8 )
    goto LABEL_4;
  if ( !a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v3 + 16));
    v4 = v8;
LABEL_4:
    v9 = v4;
    v4 = 0LL;
    *a3 = v9;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v7, a2) )
  {
    v26 = v8;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v26);
    v15 = *((_DWORD *)v7 + 1);
    v16 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v8;
    LODWORD(v30) = *(_DWORD *)v7;
    *(_QWORD *)((char *)&v30 + 4) = __PAIR64__(*((_DWORD *)v7 + 4), v15);
    v17 = *v16;
    v18 = *((_DWORD *)v7 + 12);
    HIDWORD(v30) = *((_DWORD *)v7 + 5);
    v31 = __PAIR64__(*((_DWORD *)v7 + 13), v18);
    v25 = 0LL;
    if ( v17(v8, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v25) >= 0 )
    {
      v19 = v25;
      v20 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v25 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      v20(v19, &v26);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v33 = 0LL;
      (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v25 + 144LL))(v25, &si128);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v28,
        (const struct D2D1::Matrix3x2F *)&si128,
        (const struct D2D1::Matrix3x2F *)&v30);
      v30 = v28;
      v31 = v29;
    }
    v27 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                                  + 72LL))(
            g_DeviceManager,
            v26,
            &v30,
            &v27);
    v5 = v21;
    if ( v21 >= 0 )
    {
      Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v24, v27);
      v22 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2Eu, 0LL);
    v23 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  }
  else
  {
    v11 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    v12 = v11;
    if ( v11 )
    {
      CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(v11);
      *((_QWORD *)v12 + 2) = v7;
      v13 = (void (__fastcall *)(CTransformedGeometryHelper *))*(&CTransformedGeometryHelper::`vftable' + 1);
      *(_QWORD *)v12 = &CTransformedGeometryHelper::`vftable';
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_QWORD *)v12 + 7) = 0LL;
      v13(v12);
    }
    else
    {
      v12 = 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v12, v8, &v24);
    v5 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_14:
      v4 = v24;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v12 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v12 + 16LL))(v12);
    v4 = v24;
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
