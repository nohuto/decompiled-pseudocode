/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180050F80 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_qdg @ 0x180085804 (WPP_SF_qdg.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180119AFC (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180119B88 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     WPP_SF_qdggg @ 0x18011A184 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x18011A2D4 (WPP_SF_qgg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rdi
  int v2; // ebx
  _QWORD *v3; // r13
  int v4; // eax
  unsigned int *v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // r8
  float v8; // xmm8_4
  float v9; // xmm9_4
  unsigned int v10; // esi
  __int64 v11; // xmm10_8
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm7_4
  float v15; // xmm6_4
  unsigned int v16; // esi
  _QWORD *v17; // r14
  CVolumeUnit *v18; // rax
  int *v20; // rbx
  __int64 v21; // [rsp+0h] [rbp-148h] BYREF
  __int64 v22; // [rsp+20h] [rbp-128h]
  float v23; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-104h]
  float v25; // [rsp+48h] [rbp-100h]
  float v26; // [rsp+4Ch] [rbp-FCh]
  __int64 *v27; // [rsp+50h] [rbp-F8h]
  unsigned int *v28; // [rsp+58h] [rbp-F0h]
  _QWORD *v29; // [rsp+60h] [rbp-E8h]
  _QWORD *v30; // [rsp+68h] [rbp-E0h]
  ATL::CAtlException *v31; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v32[4]; // [rsp+80h] [rbp-C8h] BYREF
  float v33; // [rsp+84h] [rbp-C4h]
  float v34; // [rsp+88h] [rbp-C0h]
  float v35; // [rsp+94h] [rbp-B4h]
  float v37; // [rsp+158h] [rbp+10h] BYREF
  float v38; // [rsp+160h] [rbp+18h] BYREF
  float v39; // [rsp+168h] [rbp+20h] BYREF

  v1 = this;
  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      this);
  }
  v3 = (_QWORD *)((char *)v1 + 256);
  v29 = (_QWORD *)((char *)v1 + 256);
  if ( !*((_QWORD *)v1 + 32) )
    goto LABEL_6;
  v4 = *((_DWORD *)v1 + 71);
  v5 = (unsigned int *)((char *)v1 + 116);
  v28 = (unsigned int *)((char *)v1 + 116);
  *((_DWORD *)v1 + 29) = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v22) = v4;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      v1,
      v22);
  }
  v27 = (__int64 *)((char *)v1 + 80);
  v30 = (_QWORD *)((char *)v1 + 80);
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 80, 0LL);
  if ( !*v3 )
  {
LABEL_6:
    v2 = -2147418113;
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 1311, v2);
    return (unsigned int)v2;
  }
  v8 = FLOAT_1000_0;
  v9 = FLOAT_N1000_0;
  v10 = 0;
  v11 = *(_QWORD *)&DOUBLE_1_75;
  while ( 1 )
  {
    v24 = v10;
    if ( v10 >= *v5 )
      break;
    v23 = 0.0;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v32, (__int64)v6);
    v39 = 0.0;
    v38 = 0.0;
    v37 = 0.0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(*(_QWORD *)*v3 + 32LL))(
           *v3,
           0LL,
           &v39,
           &v38,
           &v37);
    if ( v2 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v22) = v10;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, v1, v22, v39, v38, v37);
    }
    v14 = v38;
    v15 = v39;
    CVolumeUnit::SetDBRange((__int64)v32, v12, v39, v38, SLODWORD(v37), v11);
    v8 = fminf(v15, v8);
    v25 = v8;
    v9 = fmaxf(v14, v9);
    v26 = v9;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(*(_QWORD *)*v3 + 40LL))(*v3, v10, &v23);
    if ( v2 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v22) = v10;
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
        v1,
        v22,
        v23);
    }
    v33 = fmaxf(fminf(v23, v35), v34);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(v27, v10, (__int64)v32);
    }
    catch ( ATL::CAtlException *v31 )
    {
      v6 = &v21;
      v20 = (int *)v31;
      if ( *(_DWORD *)v31 == -1073741571 )
        _o__resetstkoflw();
      v37 = *(float *)v20;
      v2 = LODWORD(v37);
      if ( v37 < 0.0 )
        goto LABEL_36;
      v1 = this;
      v8 = v25;
      v9 = v26;
      v10 = v24;
      v11 = *(_QWORD *)&DOUBLE_1_75;
      v5 = v28;
      v3 = v29;
    }
    ++v10;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, v1, v8, v9);
  }
  v16 = 0;
  if ( *v5 )
  {
    v17 = v30;
    do
    {
      v18 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](v17, v16);
      CVolumeUnit::SetTaperOverallRange(v18, v8, v9);
      ++v16;
    }
    while ( v16 < *v5 );
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_36;
  return (unsigned int)v2;
}
