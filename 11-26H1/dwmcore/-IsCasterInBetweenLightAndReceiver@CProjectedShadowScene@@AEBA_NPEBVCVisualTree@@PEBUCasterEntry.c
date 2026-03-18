/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1800CF6B0
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1800CF8C4 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800D0530 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

bool __fastcall CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        const struct CProjectedShadowScene::CasterEntry *a3,
        const struct CProjectedShadowScene::ReceiverEntry *a4,
        float a5)
{
  __m128i si128; // xmm8
  __m128i v7; // xmm7
  __int64 v9; // rcx
  __m128i v10; // xmm6
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // xmm1_4
  Microsoft::BamoImpl::BamoPrincipalImpl *v23; // rbx
  _DWORD v25[2]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v26[12]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v27[20]; // [rsp+68h] [rbp-A0h]
  _OWORD v28[4]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+C8h] [rbp-40h]
  _OWORD v30[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v31; // [rsp+118h] [rbp+10h]
  _QWORD v32[4]; // [rsp+128h] [rbp+20h] BYREF
  int v33; // [rsp+148h] [rbp+40h]
  char v34; // [rsp+17Ch] [rbp+74h] BYREF
  _BYTE v35[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v36; // [rsp+1F8h] [rbp+F0h]
  char v37; // [rsp+22Ch] [rbp+124h] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  v10 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v27[12] = 1065353216LL;
  v11 = (float)(a5 + a5) + *(float *)(v9 + 140);
  v12 = (float)(a5 + a5) + *(float *)(v9 + 144);
  *(_DWORD *)v27 = LODWORD(a5) ^ _xmm;
  *(_DWORD *)&v27[4] = LODWORD(a5) ^ _xmm;
  v13 = *((_DWORD *)a4 + 24);
  *(float *)v26 = v11;
  v14 = *((_OWORD *)a4 + 2);
  *(_DWORD *)&v27[8] = 0;
  *(float *)&v26[1] = v12;
  v15 = *((_OWORD *)a4 + 3);
  *(_WORD *)&v27[16] = 10664;
  v28[0] = v14;
  v16 = *((_OWORD *)a4 + 4);
  v29 = v13;
  v28[1] = v15;
  v17 = *((_OWORD *)a4 + 5);
  v28[2] = v16;
  v28[3] = v17;
  CMILMatrix::Multiply((CMILMatrix *)v28, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
  v30[3] = *(_OWORD *)v27;
  v30[0] = si128;
  v30[1] = v7;
  v30[2] = v10;
  v31 = *(_DWORD *)&v27[16];
  CMILMatrix::Multiply((CMILMatrix *)v30, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 16));
  v18 = *(_QWORD *)a4;
  v19 = (Microsoft::BamoImpl::BamoPrincipalImpl *)&v34;
  v20 = 4LL;
  v21 = 4LL;
  v32[0] = *(_QWORD *)(v18 + 72);
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v19);
    v19 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v19 + 16);
    --v21;
  }
  while ( v21 );
  v22 = *(_DWORD *)(v32[0] + 144LL);
  v25[0] = *(_DWORD *)(v32[0] + 140LL);
  v25[1] = v22;
  CVisualDepthGeometry::Init(
    (CVisualDepthGeometry *)v32,
    (const struct Windows::Foundation::Numerics::float2 *)v25,
    (const struct CMILMatrix *)v28);
  v23 = (Microsoft::BamoImpl::BamoPrincipalImpl *)&v37;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v23);
    v23 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v23 + 16);
    --v20;
  }
  while ( v20 );
  CVisualDepthGeometry::Init(
    (CVisualDepthGeometry *)v35,
    (const struct Windows::Foundation::Numerics::float2 *)v26,
    (const struct CMILMatrix *)v30);
  v33 = 2;
  v36 = 1;
  return (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v35, v32) == 0;
}
