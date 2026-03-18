/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800511A0
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180050A30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x180052750 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x180053380 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  unsigned int v2; // esi
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // rbx
  struct ID2D1Geometry *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 v13; // r10
  float *v14; // rcx
  char v15; // r8
  unsigned __int64 v16; // rdx
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm1_4
  int v22; // eax
  int v23; // r15d
  int *i; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rsi
  int v30; // eax
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // eax
  int v34; // eax
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, struct ID2D1Geometry **); // rsi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(__int64, struct ID2D1Geometry **); // rsi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rbx
  struct ID2D1Geometry *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  struct ID2D1Geometry *v56; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 *v64; // rcx
  struct ID2D1Geometry *v65; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v66; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  __int64 v73; // [rsp+88h] [rbp-80h]
  __int64 v74; // [rsp+90h] [rbp-78h]
  __int128 v75; // [rsp+98h] [rbp-70h]
  _DWORD v76[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v77; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v78; // [rsp+D0h] [rbp-38h]
  float v79; // [rsp+D8h] [rbp-30h] BYREF
  float v80[5]; // [rsp+DCh] [rbp-2Ch]
  float v81; // [rsp+F0h] [rbp-18h]
  float v82; // [rsp+F4h] [rbp-14h]
  float v83; // [rsp+118h] [rbp+10h]
  float v84; // [rsp+11Ch] [rbp+14h]
  float v85; // [rsp+130h] [rbp+28h]
  float v86; // [rsp+134h] [rbp+2Ch]

  v2 = 0;
  v3 = (Microsoft::BamoImpl::BamoPrincipalImpl *)&v79;
  v6 = 0LL;
  v7 = 20LL;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v3);
    v3 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v3 + 8);
    --v7;
  }
  while ( v7 );
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct CMilPoint2F *)&v79);
  v8 = *((_QWORD *)this + 2);
  v9 = *(float *)(v8 + 20);
  v10 = *(float *)(v8 + 16);
  if ( *(_BYTE *)(v8 + 68) )
  {
    v12 = v10 + *(float *)(v8 + 24);
    v11 = v9 + *(float *)(v8 + 28);
  }
  else
  {
    v11 = *(float *)(v8 + 28);
    v12 = *(float *)(v8 + 24);
  }
  *(float *)&v76[3] = v11;
  v13 = v8 + 32;
  *(float *)&v76[2] = v12;
  *(float *)&v76[1] = v9;
  v14 = (float *)(v8 + 32);
  *(float *)v76 = v10;
  v15 = *(_BYTE *)(v8 + 68);
  if ( !v15 )
    v14 = (float *)(v8 + 40);
  v16 = -(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v15 )
  {
    v17 = *(float *)(v8 + 32);
  }
  else
  {
    v13 = v8 + 56;
    v17 = *(float *)(v8 + 56);
  }
  v18 = fmaxf(v11, fmaxf(*(float *)(v8 + 36), v14[1]) + v9);
  v19 = fmaxf(v12, fmaxf(*(float *)(v8 + 32), v17) + v10);
  v20 = fminf(v9, v11 - fmaxf(*(float *)(v13 + 4), *(float *)(v16 + v8 + 52)));
  v21 = fminf(v10, v12 - fmaxf(*v14, *(float *)(v16 + v8 + 48)));
  if ( v21 == v10 && v20 == v9 && v19 == v12 && v18 == v11 )
    goto LABEL_15;
  v79 = v21;
  v80[0] = v20;
  v81 = v19;
  v82 = v20;
  v83 = v21;
  v84 = v18;
  v85 = v19;
  v86 = v18;
  v66 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
  v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 40LL))(
          g_DeviceManager,
          v76,
          &v66);
  v2 = v22;
  if ( v22 >= 0 )
  {
    v6 = v66;
LABEL_15:
    v23 = 0;
    for ( i = (int *)&unk_1802F2AD4; ; i += 7 )
    {
      v25 = *((_QWORD *)this + 2);
      if ( v23 >= 4 )
        break;
      if ( *(_BYTE *)(v25 + 68) )
        v26 = 32LL;
      else
        v26 = 8LL * (unsigned int)v23 + 32;
      if ( CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v26 + v25)) )
      {
        v68 = *(i - 1);
        v69 = *i;
        v70 = i[1];
        v71 = i[2];
        v72 = i[3];
        v73 = i[4];
        v74 = i[5];
        v65 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
        v27 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v65);
        v2 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x271u, 0LL);
          goto LABEL_58;
        }
        v67 = 0LL;
        v28 = (__int64)v65;
        v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v67);
        v30 = v29(v28, &v67);
        v2 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x274u, 0LL);
          v64 = &v67;
          goto LABEL_51;
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v67 + 40LL))(
          v67,
          _mm_unpacklo_ps((__m128)LODWORD(v80[2 * v68 - 1]), (__m128)LODWORD(v80[2 * v68])).m128_u64[0],
          0LL);
        v31 = v80[2 * v69 - 1];
        *((float *)&v75 + 1) = v80[2 * v69];
        *(float *)&v75 = v31;
        v32 = v80[2 * v70 - 1];
        *((float *)&v75 + 3) = v80[2 * v70];
        *((float *)&v75 + 2) = v32;
        v78 = _mm_unpacklo_ps((__m128)LODWORD(v80[2 * v71 - 1]), (__m128)LODWORD(v80[2 * v71])).m128_u64[0];
        v77 = v75;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v67 + 88LL))(v67, &v77);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v67 + 80LL))(
          v67,
          _mm_unpacklo_ps((__m128)LODWORD(v80[2 * v72 - 1]), (__m128)LODWORD(v80[2 * v72])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v67 + 80LL))(
          v67,
          _mm_unpacklo_ps((__m128)LODWORD(v80[2 * v73 - 1]), (__m128)LODWORD(v80[2 * v73])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v67 + 80LL))(
          v67,
          _mm_unpacklo_ps((__m128)LODWORD(v80[2 * v74 - 1]), (__m128)LODWORD(v80[2 * v74])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 64LL))(v67, 1LL);
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 72LL))(v67);
        v2 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x27Du, 0LL);
          v59 = v67;
          if ( v67 )
          {
            v67 = 0LL;
LABEL_65:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          }
          goto LABEL_58;
        }
        if ( v6 )
        {
          v68 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
          v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(
                  g_DeviceManager,
                  &v68);
          v2 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x287u, 0LL);
LABEL_86:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v67);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
            goto LABEL_53;
          }
          v66 = 0LL;
          v35 = v68;
          v36 = *(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v68 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
          v37 = v36(v35, &v66);
          v2 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x28Au, 0LL);
LABEL_67:
            v60 = (__int64)v66;
            if ( v66 )
            {
              v66 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            }
            v61 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
            }
            v62 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            }
            v63 = (__int64)v65;
            if ( v65 )
            {
              v65 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            }
LABEL_53:
            v55 = *(_QWORD *)v6;
            v56 = v6;
LABEL_54:
            (*(void (__fastcall **)(struct ID2D1Geometry *))(v55 + 16))(v56);
            return v2;
          }
          v38 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1Geometry *, __int64, _QWORD, _DWORD, struct ID2D1Geometry *))(*(_QWORD *)v6 + 88LL))(
                  v6,
                  v65,
                  1LL,
                  0LL,
                  0,
                  v66);
          v2 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x292u, 0LL);
            goto LABEL_67;
          }
          v39 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v66 + 72LL))(v66);
          v2 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x294u, 0LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
            goto LABEL_86;
          }
          v40 = v68;
          v68 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v6 + 16LL))(v6);
          v41 = (__int64)v66;
          v6 = (struct ID2D1Geometry *)v40;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          v42 = v68;
          if ( v68 )
          {
            v68 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
        else
        {
          v6 = v65;
          v65 = 0LL;
        }
        v43 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
        v44 = (__int64)v65;
        if ( v65 )
        {
          v65 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
      ++v23;
    }
    if ( *(float *)(v25 + 64) <= 0.0 )
    {
LABEL_50:
      *a2 = v6;
      return v2;
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
    v45 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
            g_DeviceManager,
            &v65);
    v2 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x29Fu, 0LL);
      goto LABEL_58;
    }
    v66 = 0LL;
    v46 = (__int64)v65;
    v47 = *(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v65 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
    v48 = v47(v46, &v66);
    v2 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x2A2u, 0LL);
    }
    else
    {
      v49 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, 1LL, 0LL);
      v2 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2A7u, 0LL);
        v59 = (__int64)v66;
        if ( v66 )
        {
          v66 = 0LL;
          goto LABEL_65;
        }
LABEL_58:
        v58 = (__int64)v65;
        if ( v65 )
        {
          v65 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
LABEL_52:
        if ( v6 )
          goto LABEL_53;
        return v2;
      }
      v50 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v66 + 72LL))(v66);
      v2 = v50;
      if ( v50 >= 0 )
      {
        v51 = (__int64)v65;
        v52 = (__int64)v65;
        if ( v65 )
        {
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v65 + 8LL))(v65);
          v51 = (__int64)v65;
        }
        v53 = v6;
        v6 = (struct ID2D1Geometry *)v52;
        if ( v53 )
        {
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v53 + 16LL))(v53);
          v51 = (__int64)v65;
        }
        v54 = (__int64)v66;
        if ( v66 )
        {
          v66 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          v51 = (__int64)v65;
        }
        if ( v51 )
        {
          v65 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
        goto LABEL_50;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2A8u, 0LL);
    }
    v64 = (__int64 *)&v66;
LABEL_51:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v64);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
    goto LABEL_52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x25Fu, 0LL);
  v56 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    v55 = *(_QWORD *)v56;
    goto LABEL_54;
  }
  return v2;
}
