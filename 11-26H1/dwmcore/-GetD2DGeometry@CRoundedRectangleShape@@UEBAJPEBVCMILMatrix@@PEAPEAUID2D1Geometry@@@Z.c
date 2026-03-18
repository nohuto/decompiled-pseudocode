/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180050A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180013E1C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180050D10 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180050DB0 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800511A0 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801B85E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v5; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  struct ID2D1Geometry *v10; // rcx
  __int64 v11; // rax
  struct ID2D1Geometry *v12; // rdi
  const struct ID2D1Geometry *v13; // rbx
  struct ID2D1Geometry *v14; // rax
  struct ID2D1Geometry *v16; // rcx
  int v17; // eax
  CTransformedGeometryHelper *v18; // rax
  __int64 v19; // rdx
  CTransformedGeometryHelper *v20; // rdi
  void (__fastcall *v21)(CTransformedGeometryHelper *); // rax
  int D2DGeometry; // eax
  unsigned int v23; // xmm1_4
  int (__fastcall **v24)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v25)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v26; // xmm0_4
  __int64 v27; // rbx
  void (__fastcall *v28)(__int64, const struct ID2D1Geometry **); // rsi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct ID2D1Geometry *v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  const struct ID2D1Geometry *v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp+Fh]
  __m128i si128; // [rsp+80h] [rbp+17h] BYREF
  __int64 v41; // [rsp+90h] [rbp+27h]

  v5 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v5 + 72) )
  {
    v32 = 0LL;
    if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v5 + 16)) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
      v17 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v32);
      v8 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD4u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
        v9 = v8;
        goto LABEL_21;
      }
    }
    else
    {
      v7 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v32);
      v8 = v7;
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD8u, 0LL);
        v16 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v16 + 16LL))(v16);
          goto LABEL_21;
        }
LABEL_8:
        v9 = v8;
        if ( v8 >= 0 )
          goto LABEL_9;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC3u, 0LL);
        return (unsigned int)v9;
      }
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)(*((_QWORD *)this + 2) + 72LL),
           (signed __int64)v32,
           0LL) )
    {
      v10 = v32;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_8;
  }
LABEL_9:
  v11 = *((_QWORD *)this + 2);
  v9 = 0;
  v12 = 0LL;
  v32 = 0LL;
  v13 = *(const struct ID2D1Geometry **)(v11 + 72);
  if ( v13 )
  {
    if ( a2 )
    {
      if ( CMILMatrix::Is2DAffine<1>((__int64)a2, 1) )
      {
        v34 = v13;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v34);
        v23 = *((_DWORD *)a2 + 1);
        v24 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v13;
        LODWORD(v38) = *(_DWORD *)a2;
        *(_QWORD *)((char *)&v38 + 4) = __PAIR64__(*((_DWORD *)a2 + 4), v23);
        v25 = *v24;
        v26 = *((_DWORD *)a2 + 12);
        HIDWORD(v38) = *((_DWORD *)a2 + 5);
        v39 = __PAIR64__(*((_DWORD *)a2 + 13), v26);
        v33 = 0LL;
        if ( v25(v13, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v33) >= 0 )
        {
          v27 = v33;
          v28 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v33 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
          v28(v27, &v34);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v41 = 0LL;
          (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v33 + 144LL))(v33, &si128);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v36,
            (const struct D2D1::Matrix3x2F *)&si128,
            (const struct D2D1::Matrix3x2F *)&v38);
          v38 = v36;
          v39 = v37;
        }
        v35 = 0LL;
        v29 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager + 72LL))(
                g_DeviceManager,
                v34,
                &v38,
                &v35);
        v9 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x2Eu, 0LL);
          v31 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
          goto LABEL_13;
        }
        Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v32, v35);
        v30 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
        v12 = v32;
      }
      else
      {
        v18 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        v20 = v18;
        if ( v18 )
        {
          CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
            (__int64)v18,
            v19);
          *((_QWORD *)v20 + 2) = a2;
          v21 = (void (__fastcall *)(CTransformedGeometryHelper *))*(&CTransformedGeometryHelper::`vftable' + 1);
          *(_QWORD *)v20 = &CTransformedGeometryHelper::`vftable';
          *((_QWORD *)v20 + 3) = 0LL;
          *((_QWORD *)v20 + 4) = 0LL;
          *((_QWORD *)v20 + 5) = 0LL;
          *((_QWORD *)v20 + 6) = 0LL;
          *((_QWORD *)v20 + 7) = 0LL;
          v21(v20);
        }
        else
        {
          v20 = 0LL;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v20, v13, &v32);
        v9 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
          if ( v20 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
          v12 = v32;
          goto LABEL_13;
        }
        if ( v20 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
        v12 = v32;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v11 + 72));
      v12 = v13;
    }
  }
  v14 = v12;
  v12 = 0LL;
  *a3 = v14;
LABEL_13:
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC4u, 0LL);
  return (unsigned int)v9;
}
