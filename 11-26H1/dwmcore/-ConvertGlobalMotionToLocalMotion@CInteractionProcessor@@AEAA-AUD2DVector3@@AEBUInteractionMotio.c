/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017B788 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA88 (--$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD90 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 * Callees:
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18017B694 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017DCF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AF7C4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444@Z @ 0x1801B37C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_1801B37C4.c)
 */

float *__fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        float *a2,
        float *a3,
        const struct D2DMatrix *a4,
        struct D2DMatrix *a5,
        struct D2DMatrix *a6)
{
  __int128 v6; // xmm4
  struct D2DMatrix *v8; // r14
  __int128 v12; // xmm8
  __int128 v13; // xmm12
  struct D2DMatrix *v14; // rdi
  __int128 v15; // xmm8
  __int128 v16; // xmm12
  __int128 v17; // xmm4
  int v18; // xmm2_4
  float v19; // xmm1_4
  __int32 v20; // xmm6_4
  __int32 v21; // xmm7_4
  __int32 v22; // xmm8_4
  int v23; // xmm9_4
  int v24; // xmm10_4
  int v25; // xmm11_4
  __int32 v26; // xmm12_4
  __int32 v27; // xmm13_4
  __int32 v28; // xmm14_4
  struct Windows::Foundation::Numerics::float4x4 *v29; // r8
  __int64 v30; // r10
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  const struct D2DMatrix *v34; // rax
  __m128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // [rsp+118h] [rbp-80h] BYREF
  __int32 v41; // [rsp+11Ch] [rbp-7Ch] BYREF
  __int32 v42; // [rsp+120h] [rbp-78h] BYREF
  __int32 v43; // [rsp+124h] [rbp-74h] BYREF
  int v44; // [rsp+128h] [rbp-70h] BYREF
  int v45; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v46; // [rsp+130h] [rbp-68h] BYREF
  int v47; // [rsp+134h] [rbp-64h] BYREF
  int v48; // [rsp+138h] [rbp-60h] BYREF
  int v49; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v50; // [rsp+140h] [rbp-58h] BYREF
  int v51; // [rsp+144h] [rbp-54h] BYREF
  int v52; // [rsp+148h] [rbp-50h] BYREF
  int v53; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v54; // [rsp+150h] [rbp-48h] BYREF
  float v55; // [rsp+154h] [rbp-44h] BYREF
  int v56; // [rsp+158h] [rbp-40h] BYREF
  int v57; // [rsp+15Ch] [rbp-3Ch] BYREF
  float v58; // [rsp+160h] [rbp-38h] BYREF
  int v59; // [rsp+164h] [rbp-34h] BYREF
  __m128 v60; // [rsp+168h] [rbp-30h] BYREF
  __int128 v61; // [rsp+178h] [rbp-20h]
  __m256i v62; // [rsp+188h] [rbp-10h]
  __m128 v63; // [rsp+1A8h] [rbp+10h] BYREF
  __int128 v64; // [rsp+1B8h] [rbp+20h]
  __m256i v65; // [rsp+1C8h] [rbp+30h]
  int v66; // [rsp+1E8h] [rbp+50h]
  __int64 v67; // [rsp+1F8h] [rbp+60h] BYREF
  __int64 v68; // [rsp+200h] [rbp+68h] BYREF
  __int64 v69; // [rsp+208h] [rbp+70h] BYREF
  __int64 v70; // [rsp+210h] [rbp+78h] BYREF
  _QWORD v71[22]; // [rsp+218h] [rbp+80h] BYREF
  __int32 v72; // [rsp+308h] [rbp+170h] BYREF
  int v73; // [rsp+310h] [rbp+178h] BYREF
  int v74; // [rsp+318h] [rbp+180h] BYREF

  v6 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v8 = a5;
  v12 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v13 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  *(_OWORD *)a5 = CMILMatrix::Identity;
  *((_OWORD *)v8 + 1) = v6;
  *((_OWORD *)v8 + 2) = v12;
  *((_OWORD *)v8 + 3) = v13;
  v14 = a6;
  v15 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v16 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  v17 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  *(_OWORD *)a6 = CMILMatrix::Identity;
  *((_OWORD *)v14 + 1) = v17;
  *((_OWORD *)v14 + 2) = v15;
  *((_OWORD *)v14 + 3) = v16;
  v18 = *((_DWORD *)a3 + 1);
  v19 = 1.0 / a3[2];
  *a2 = *a3;
  *((_DWORD *)a2 + 1) = v18;
  a2[2] = v19 - 1.0;
  v20 = CMILMatrix::Identity;
  v21 = *(&CMILMatrix::Identity + 1);
  v22 = unk_1803DD488;
  v23 = HIDWORD(qword_1803DD48C);
  v24 = unk_1803DD494;
  v25 = qword_1803DD498;
  v26 = LODWORD(ymmword_1803DD4A0.m256_f32[0]);
  v27 = LODWORD(ymmword_1803DD4A0.m256_f32[1]);
  v28 = LODWORD(ymmword_1803DD4A0.m256_f32[2]);
  v60.m128_i32[3] = qword_1803DD48C;
  HIDWORD(v61) = HIDWORD(qword_1803DD498);
  *(_OWORD *)((char *)&v62.m256i_u64[1] + 4) = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[3];
  v62.m256i_i32[7] = LODWORD(ymmword_1803DD4A0.m256_f32[7]);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044) )
  {
    v36 = *(__m128 *)v30;
    v37 = *(_OWORD *)(v30 + 16);
    v66 = *(_DWORD *)(v30 + 64);
    v63 = v36;
    v38 = *(_OWORD *)(v30 + 32);
    v64 = v37;
    v39 = *(_OWORD *)(v30 + 48);
    *(_OWORD *)v65.m256i_i8 = v38;
    *(_OWORD *)&v65.m256i_u64[2] = v39;
    if ( Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v63, &v63, v29) )
    {
      v20 = v63.m128_i32[0];
      v21 = v63.m128_i32[1];
      v22 = v63.m128_i32[2];
      v23 = v64;
      v24 = DWORD1(v64);
      v25 = DWORD2(v64);
      v26 = v65.m256i_i32[0];
      v27 = v65.m256i_i32[1];
      v28 = v65.m256i_i32[2];
      v60 = v63;
      v62 = v65;
      v61 = v64;
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v60);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(a4) )
  {
    v34 = D2DMatrixTranspose(v8, a4);
    if ( D2DMatrixInverse(v14, 0LL, v34) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, v14);
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v44 = *((_DWORD *)v14 + 10);
    v45 = *((_DWORD *)v14 + 9);
    v46 = *((_DWORD *)v14 + 8);
    v47 = *((_DWORD *)v14 + 6);
    v48 = *((_DWORD *)v14 + 5);
    v49 = *((_DWORD *)v14 + 4);
    v50 = *((_DWORD *)v14 + 2);
    v51 = *((_DWORD *)v14 + 1);
    v52 = *(_DWORD *)v14;
    v53 = *((_DWORD *)a3 + 2);
    v54 = *((_DWORD *)a3 + 1);
    v55 = *a3;
    v56 = *((_DWORD *)a2 + 2);
    v57 = *((_DWORD *)a2 + 1);
    v58 = *a2;
    v59 = *((_DWORD *)a1 + 197);
    v67 = a1[60];
    v68 = a1[40];
    v69 = a1[20];
    v70 = *a1;
    LODWORD(a5) = v28;
    LODWORD(a6) = v27;
    v72 = v26;
    v73 = v25;
    v74 = v24;
    v40 = v23;
    v41 = v22;
    v42 = v21;
    v43 = v20;
    v71[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v31,
      (unsigned int)&unk_1803B213A,
      v32,
      v33,
      (__int64)v71,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&a6,
      (__int64)&a5);
  }
  return a2;
}
