/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x180014474
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180227F40 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180014B18 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180015480 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180115D48 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180121B74 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180121D1C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x1801C72D0 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x1801CC1BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U_ea_1801CC1BC.c)
 *     acosf_0 @ 0x1802B969C (acosf_0.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        void *a2,
        CMILMatrix *a3,
        CMILMatrix *a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  float v10; // xmm6_4
  struct CMILMatrix *v11; // rbx
  CMILMatrix *v12; // r14
  __int128 v13; // xmm0
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  float v16; // xmm10_4
  float v17; // xmm11_4
  unsigned int v18; // xmm8_4
  unsigned int v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  const struct DEVICE_INFO *v22; // rbx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  double v27; // xmm0_8
  float v28; // xmm2_4
  float v29; // xmm2_4
  int v30; // eax
  double v31; // xmm0_8
  float v32; // xmm2_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  int v48; // xmm1_4
  __int64 v49; // [rsp+148h] [rbp-80h] BYREF
  float v50; // [rsp+150h] [rbp-78h]
  float v51; // [rsp+154h] [rbp-74h]
  int v52; // [rsp+158h] [rbp-70h] BYREF
  int v53; // [rsp+15Ch] [rbp-6Ch] BYREF
  int v54; // [rsp+160h] [rbp-68h] BYREF
  int v55; // [rsp+164h] [rbp-64h] BYREF
  int v56; // [rsp+168h] [rbp-60h] BYREF
  float v57; // [rsp+16Ch] [rbp-5Ch] BYREF
  float v58; // [rsp+170h] [rbp-58h] BYREF
  float v59; // [rsp+174h] [rbp-54h] BYREF
  int v60; // [rsp+178h] [rbp-50h] BYREF
  int v61; // [rsp+17Ch] [rbp-4Ch] BYREF
  unsigned int v62; // [rsp+180h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+184h] [rbp-44h] BYREF
  float v64; // [rsp+188h] [rbp-40h] BYREF
  float v65; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v66; // [rsp+190h] [rbp-38h] BYREF
  int v67; // [rsp+194h] [rbp-34h] BYREF
  int v68; // [rsp+198h] [rbp-30h] BYREF
  int v69; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v70; // [rsp+1A0h] [rbp-28h] BYREF
  int v71; // [rsp+1A4h] [rbp-24h] BYREF
  int v72; // [rsp+1A8h] [rbp-20h] BYREF
  int v73; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v74; // [rsp+1B0h] [rbp-18h] BYREF
  int v75; // [rsp+1B4h] [rbp-14h] BYREF
  int v76; // [rsp+1B8h] [rbp-10h] BYREF
  int v77; // [rsp+1BCh] [rbp-Ch] BYREF
  int v78; // [rsp+1C0h] [rbp-8h] BYREF
  int v79; // [rsp+1C4h] [rbp-4h] BYREF
  int v80; // [rsp+1C8h] [rbp+0h] BYREF
  _DWORD v81[3]; // [rsp+1CCh] [rbp+4h] BYREF
  _OWORD v82[4]; // [rsp+1D8h] [rbp+10h] BYREF
  int v83; // [rsp+218h] [rbp+50h]
  __int64 v84; // [rsp+2C8h] [rbp+100h] BYREF
  __int64 v85; // [rsp+2D8h] [rbp+110h] BYREF
  float v86; // [rsp+2E0h] [rbp+118h] BYREF
  float v87; // [rsp+2E4h] [rbp+11Ch]

  *(_OWORD *)a3 = *(_OWORD *)this;
  v10 = 0.0;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)this + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 16);
  *(_QWORD *)((char *)a4 + 60) = 1065353216LL;
  *(_QWORD *)a4 = 1065353216LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_DWORD *)a4 + 4) = 0;
  *(_QWORD *)((char *)a4 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a4 + 28) = 0LL;
  *((_DWORD *)a4 + 9) = 0;
  *((_QWORD *)a4 + 5) = 1065353216LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_DWORD *)a4 + 14) = 0;
  *((_BYTE *)a4 + 65) &= 0xE9u;
  *((_BYTE *)a4 + 65) |= 0x29u;
  v11 = a5;
  *((_BYTE *)a4 + 64) = -86;
  *(_QWORD *)((char *)v11 + 60) = 1065353216LL;
  *(_QWORD *)v11 = 1065353216LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_DWORD *)v11 + 4) = 0;
  *(_QWORD *)((char *)v11 + 20) = 1065353216LL;
  *(_QWORD *)((char *)v11 + 28) = 0LL;
  *((_DWORD *)v11 + 9) = 0;
  *((_QWORD *)v11 + 5) = 1065353216LL;
  *((_QWORD *)v11 + 6) = 0LL;
  *((_DWORD *)v11 + 14) = 0;
  *((_BYTE *)v11 + 65) &= 0xE9u;
  *((_BYTE *)v11 + 65) |= 0x29u;
  v12 = a6;
  *((_BYTE *)v11 + 64) = -86;
  v13 = *(_OWORD *)a3;
  v83 = 170;
  *(_OWORD *)v12 = v13;
  *((_OWORD *)v12 + 1) = *((_OWORD *)a3 + 1);
  *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 2);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *((_OWORD *)v12 + 3) = *((_OWORD *)a3 + 3);
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  *((_DWORD *)v12 + 16) = *((_DWORD *)a3 + 16);
  v16 = *((float *)this + 12);
  v17 = *((float *)this + 13);
  v18 = *(_DWORD *)this;
  v19 = *((_DWORD *)this + 5);
  v82[1] = v15;
  v82[0] = si128;
  v82[3] = _mm_load_si128((const __m128i *)&_xmm);
  v86 = v16;
  v87 = v17;
  a6 = (CMILMatrix *)__PAIR64__(v19, v18);
  v82[2] = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(a5) = 0;
  BYTE1(v83) = BYTE1(v83) & 0xC0 | 0x29;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, v11, (struct CMILMatrix *)v82, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v18 = *(_DWORD *)v11;
    v19 = *((_DWORD *)v11 + 5);
    LODWORD(a6) = *(_DWORD *)v11;
    HIDWORD(a6) = v19;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v49, (const struct D2DMatrix *)v82);
    v49 = 0LL;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v49, (const struct D2DQuaternion *)&v49);
    if ( v50 < 0.0 )
      v20 = FLOAT_N1_0;
    else
      v20 = FLOAT_1_0;
    v21 = acosf_0(v51 * v20);
    v10 = v21 + v21;
    CMILMatrix::Set2DRotation(a4, v21 + v21, 0.0, 0.0);
  }
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v84 = 0LL;
    v85 = 0LL;
    CMILMatrix::Set2DAffineMatrix(
      a3,
      (const struct Windows::Foundation::Numerics::float2 *)&a6,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v86,
      (const struct Windows::Foundation::Numerics::float2 *)&v85,
      (const struct Windows::Foundation::Numerics::float2 *)&v84);
    *(_OWORD *)v12 = *(_OWORD *)a3;
    *((_OWORD *)v12 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v12 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v12 + 16) = *((_DWORD *)a3 + 16);
  }
  v22 = CPointerDeviceCache::Query(a2);
  if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3) && *((_BYTE *)v22 + 48) )
  {
    v26 = *((_DWORD *)v22 + 6) - *((_DWORD *)v22 + 4);
    v27 = (double)*(int *)v22;
    v84 = 0LL;
    v85 = 0LL;
    v28 = v16 - v27;
    v29 = v28 * (float)v26;
    v30 = *((_DWORD *)v22 + 7) - *((_DWORD *)v22 + 5);
    v31 = (double)*((int *)v22 + 1);
    v86 = (float)(v29 / (float)(*((_DWORD *)v22 + 2) - *(_DWORD *)v22)) + (float)*((int *)v22 + 4);
    v32 = v17 - v31;
    v87 = (float)((float)(v32 * (float)v30) / (float)(*((_DWORD *)v22 + 3) - *((_DWORD *)v22 + 1)))
        + (float)*((int *)v22 + 5);
    CMILMatrix::Set2DAffineMatrix(
      v12,
      (const struct Windows::Foundation::Numerics::float2 *)&a6,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v86,
      (const struct Windows::Foundation::Numerics::float2 *)&v85,
      (const struct Windows::Foundation::Numerics::float2 *)&v84);
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v33 = *((_DWORD *)this + 15);
    v34 = *((_DWORD *)this + 14);
    LODWORD(a6) = *((_DWORD *)v22 + 3);
    LODWORD(v84) = *((_DWORD *)v22 + 2);
    LODWORD(v85) = *((_DWORD *)v22 + 1);
    v86 = *(float *)v22;
    v52 = *((_DWORD *)v22 + 7);
    v53 = *((_DWORD *)v22 + 6);
    v54 = *((_DWORD *)v22 + 5);
    v55 = *((_DWORD *)v22 + 4);
    v58 = v51;
    v59 = v50;
    v60 = HIDWORD(v49);
    v61 = v49;
    LODWORD(a5) = (unsigned __int8)a5;
    v66 = v33;
    v35 = *((_DWORD *)this + 13);
    v67 = v34;
    v36 = *((_DWORD *)this + 12);
    v68 = v35;
    v37 = *((_DWORD *)this + 11);
    v69 = v36;
    v38 = *((_DWORD *)this + 10);
    v70 = v37;
    v39 = *((_DWORD *)this + 9);
    v71 = v38;
    v40 = *((_DWORD *)this + 8);
    v72 = v39;
    v41 = *((_DWORD *)this + 7);
    v73 = v40;
    v42 = *((_DWORD *)this + 6);
    v74 = v41;
    v43 = *((_DWORD *)this + 5);
    v75 = v42;
    v44 = *((_DWORD *)this + 4);
    v76 = v43;
    v45 = *((_DWORD *)this + 3);
    v77 = v44;
    v46 = *((_DWORD *)this + 2);
    v78 = v45;
    v47 = *((_DWORD *)this + 1);
    v79 = v46;
    v48 = *(_DWORD *)this;
    v57 = v10;
    v62 = v19;
    v63 = v18;
    v64 = v17;
    v65 = v16;
    v80 = v47;
    v81[0] = v48;
    v56 = (int)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (unsigned int)&unk_1803B2517,
      v24,
      v25,
      (__int64)&a5,
      (__int64)v81,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v86,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&a6);
  }
}
