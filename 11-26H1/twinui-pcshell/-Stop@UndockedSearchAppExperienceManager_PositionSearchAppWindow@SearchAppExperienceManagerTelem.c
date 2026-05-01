/*
 * XREFs of ?Stop@UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAAXAEBUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x18007F5B8
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023DC7C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444444444444444444@Z @ 0x180003DAC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180003DAC.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::Stop(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *this,
        __m128i *a2,
        const struct tagRECT *a3)
{
  __m128i *v4; // rcx
  __m128i v5; // xmm6
  __m128i si128; // xmm7
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  const struct _tlgProvider_t *v12; // rsi
  __int32 v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  LONG v17; // ecx
  int v18; // eax
  LONG v19; // ecx
  int v20; // eax
  LONG v21; // ecx
  __int32 v22; // eax
  LONG v23; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v25; // r8
  const struct _tlgProvider_t *v26; // r9
  __int32 v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  LONG bottom; // ecx
  __int64 v31; // rax
  LONG right; // ecx
  LONG top; // ecx
  LONG left; // ecx
  __int64 v35; // rax
  __int64 v36; // rsi
  LONG v37; // [rsp+18Ch] [rbp-7Ch] BYREF
  LONG v38; // [rsp+190h] [rbp-78h] BYREF
  LONG v39; // [rsp+194h] [rbp-74h] BYREF
  LONG v40; // [rsp+198h] [rbp-70h] BYREF
  int v41; // [rsp+19Ch] [rbp-6Ch] BYREF
  __int32 v42; // [rsp+1A0h] [rbp-68h] BYREF
  DWORD v43; // [rsp+1A4h] [rbp-64h] BYREF
  __int32 v44; // [rsp+1A8h] [rbp-60h] BYREF
  int v45; // [rsp+1ACh] [rbp-5Ch] BYREF
  __int32 v46; // [rsp+1B0h] [rbp-58h] BYREF
  int v47; // [rsp+1B4h] [rbp-54h] BYREF
  int v48; // [rsp+1B8h] [rbp-50h] BYREF
  int v49; // [rsp+1BCh] [rbp-4Ch] BYREF
  int v50; // [rsp+1C0h] [rbp-48h] BYREF
  int v51; // [rsp+1C4h] [rbp-44h] BYREF
  int v52; // [rsp+1C8h] [rbp-40h] BYREF
  int v53; // [rsp+1CCh] [rbp-3Ch] BYREF
  int v54; // [rsp+1D0h] [rbp-38h] BYREF
  int v55; // [rsp+1D4h] [rbp-34h] BYREF
  int v56; // [rsp+1D8h] [rbp-30h] BYREF
  int v57; // [rsp+1DCh] [rbp-2Ch] BYREF
  int v58; // [rsp+1E0h] [rbp-28h] BYREF
  int v59; // [rsp+1E4h] [rbp-24h] BYREF
  __int32 v60; // [rsp+1E8h] [rbp-20h] BYREF
  __int32 v61; // [rsp+1ECh] [rbp-1Ch] BYREF
  __int32 v62; // [rsp+1F0h] [rbp-18h] BYREF
  _DWORD v63[7]; // [rsp+1F4h] [rbp-14h] BYREF
  __int64 v64; // [rsp+210h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+218h] [rbp+10h] BYREF
  __int64 v66; // [rsp+228h] [rbp+20h] BYREF
  __int64 v67; // [rsp+230h] [rbp+28h] BYREF
  __int64 v68; // [rsp+238h] [rbp+30h] BYREF
  __int64 v69; // [rsp+240h] [rbp+38h] BYREF
  __int64 v70; // [rsp+248h] [rbp+40h] BYREF
  __int64 v71; // [rsp+250h] [rbp+48h] BYREF
  __int64 v72; // [rsp+258h] [rbp+50h] BYREF
  __int64 v73; // [rsp+260h] [rbp+58h] BYREF
  __int64 v74; // [rsp+268h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+278h] [rbp+70h] BYREF
  void *v76; // [rsp+288h] [rbp+80h]
  int v77; // [rsp+290h] [rbp+88h]
  int v78; // [rsp+294h] [rbp+8Ch]
  __int64 *v79; // [rsp+298h] [rbp+90h]
  __int64 v80; // [rsp+2A0h] [rbp+98h]
  __int32 *v81; // [rsp+2A8h] [rbp+A0h]
  __int64 v82; // [rsp+2B0h] [rbp+A8h]
  DWORD *v83; // [rsp+2B8h] [rbp+B0h]
  __int64 v84; // [rsp+2C0h] [rbp+B8h]
  __int32 *v85; // [rsp+2C8h] [rbp+C0h]
  __int64 v86; // [rsp+2D0h] [rbp+C8h]
  int *v87; // [rsp+2D8h] [rbp+D0h]
  __int64 v88; // [rsp+2E0h] [rbp+D8h]
  int *v89; // [rsp+2E8h] [rbp+E0h]
  __int64 v90; // [rsp+2F0h] [rbp+E8h]
  int *v91; // [rsp+2F8h] [rbp+F0h]
  __int64 v92; // [rsp+300h] [rbp+F8h]
  int *v93; // [rsp+308h] [rbp+100h]
  __int64 v94; // [rsp+310h] [rbp+108h]
  int *v95; // [rsp+318h] [rbp+110h]
  __int64 v96; // [rsp+320h] [rbp+118h]
  int *v97; // [rsp+328h] [rbp+120h]
  __int64 v98; // [rsp+330h] [rbp+128h]
  int *v99; // [rsp+338h] [rbp+130h]
  __int64 v100; // [rsp+340h] [rbp+138h]
  int *v101; // [rsp+348h] [rbp+140h]
  __int64 v102; // [rsp+350h] [rbp+148h]
  int *v103; // [rsp+358h] [rbp+150h]
  __int64 v104; // [rsp+360h] [rbp+158h]
  int *v105; // [rsp+368h] [rbp+160h]
  __int64 v106; // [rsp+370h] [rbp+168h]
  int *v107; // [rsp+378h] [rbp+170h]
  __int64 v108; // [rsp+380h] [rbp+178h]
  int *v109; // [rsp+388h] [rbp+180h]
  __int64 v110; // [rsp+390h] [rbp+188h]
  int *v111; // [rsp+398h] [rbp+190h]
  __int64 v112; // [rsp+3A0h] [rbp+198h]
  int *v113; // [rsp+3A8h] [rbp+1A0h]
  __int64 v114; // [rsp+3B0h] [rbp+1A8h]
  int *v115; // [rsp+3B8h] [rbp+1B0h]
  __int64 v116; // [rsp+3C0h] [rbp+1B8h]
  __int32 *v117; // [rsp+3C8h] [rbp+1C0h]
  __int64 v118; // [rsp+3D0h] [rbp+1C8h]
  __int32 *v119; // [rsp+3D8h] [rbp+1D0h]
  __int64 v120; // [rsp+3E0h] [rbp+1D8h]
  __int32 *v121; // [rsp+3E8h] [rbp+1E0h]
  __int64 v122; // [rsp+3F0h] [rbp+1E8h]
  _DWORD *v123; // [rsp+3F8h] [rbp+1F0h]
  __int64 v124; // [rsp+400h] [rbp+1F8h]
  LONG *v125; // [rsp+408h] [rbp+200h]
  __int64 v126; // [rsp+410h] [rbp+208h]
  LONG *v127; // [rsp+418h] [rbp+210h]
  __int64 v128; // [rsp+420h] [rbp+218h]
  LONG *v129; // [rsp+428h] [rbp+220h]
  __int64 v130; // [rsp+430h] [rbp+228h]
  LONG *v131; // [rsp+438h] [rbp+230h]
  __int64 v132; // [rsp+440h] [rbp+238h]
  __int32 *v133; // [rsp+448h] [rbp+240h]
  __int64 v134; // [rsp+450h] [rbp+248h]

  v4 = (__m128i *)a2[4].m128i_i64[1];
  v5 = a2[2];
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v9 = (a2[5].m128i_i64[0] - (__int64)v4) >> 4;
  if ( v9 )
    v5 = *v4;
  if ( v9 > 1 )
    si128 = v4[1];
  v10 = *((_QWORD *)this + 34);
  v11 = *(_DWORD *)(v10 + 72);
  if ( v11 < 0 && (v36 = v10 + 80, v11 == *(_DWORD *)(v36 + 8)) && v36 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v26 = SearchAppLauncherLogging::Provider();
    if ( *(_DWORD *)v26 > 5u )
    {
      v27 = a2[4].m128i_i32[0];
      v42 = a2[3].m128i_i32[2];
      v43 = a2[3].m128i_u32[1];
      v44 = a2[3].m128i_i32[0];
      v53 = a2[1].m128i_i32[3];
      v54 = a2[1].m128i_i32[2];
      v55 = a2[1].m128i_i32[1];
      v56 = a2[1].m128i_i32[0];
      v57 = a2->m128i_i32[3];
      v58 = a2->m128i_i32[2];
      v59 = a2->m128i_i32[1];
      v60 = a2->m128i_i32[0];
      v66 = *(_QWORD *)(v36 + 48);
      v61 = *(_DWORD *)(v36 + 68);
      v62 = *(_DWORD *)(v36 + 16);
      v67 = *(_QWORD *)(v36 + 120);
      v68 = *(_QWORD *)(v36 + 112);
      v63[0] = *(_DWORD *)(v36 + 104);
      v69 = *(_QWORD *)(v36 + 96);
      v28 = *(_QWORD *)(v36 + 88);
      v45 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
      v70 = v28;
      v37 = *(_DWORD *)(v36 + 80);
      v29 = *(_QWORD *)(v36 + 72);
      v47 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
      v71 = v29;
      LODWORD(v29) = *(_DWORD *)(v36 + 32);
      v63[5] = v27;
      bottom = a3->bottom;
      v38 = v29;
      v31 = *(_QWORD *)(v36 + 24);
      v63[1] = bottom;
      right = a3->right;
      v41 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
      v49 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
      v63[2] = right;
      top = a3->top;
      v72 = v31;
      LODWORD(v31) = *(_DWORD *)v36;
      v63[3] = top;
      left = a3->left;
      v39 = v31;
      v35 = *(_QWORD *)(v36 + 128);
      v63[4] = left;
      v48 = _mm_cvtsi128_si32(si128);
      v50 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
      v51 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
      v52 = _mm_cvtsi128_si32(v5);
      v73 = v35;
      v40 = *(_DWORD *)(v36 + 64);
      v74 = *(_QWORD *)(v36 + 56);
      v46 = *(_DWORD *)(v36 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v64 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v26,
        (__int64)&unk_1807FB928,
        *((_QWORD *)this + 34) + 8LL,
        (__int64)v26,
        (__int64)&v64,
        (__int64)&EventDescriptor,
        (__int64)&v46,
        &v74,
        (__int64)&v40,
        &v73,
        (__int64)&v39,
        &v72,
        (__int64)&v38,
        &v71,
        (__int64)&v37,
        &v70,
        &v69,
        (__int64)v63,
        &v68,
        &v67,
        (__int64)&v62,
        (__int64)&v61,
        &v66);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = SearchAppLauncherLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v13 = a2[4].m128i_i32[0];
      v63[0] = a2[3].m128i_i32[3];
      v62 = a2[3].m128i_i32[2];
      v61 = a2[3].m128i_i32[1];
      v60 = a2[3].m128i_i32[0];
      v51 = a2[1].m128i_i32[3];
      v14 = a2[1].m128i_i32[2];
      v59 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
      v50 = v14;
      v49 = a2[1].m128i_i32[1];
      v15 = a2[1].m128i_i32[0];
      v57 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
      v48 = v15;
      v16 = a2->m128i_i32[3];
      v46 = v13;
      v17 = a3->bottom;
      v47 = v16;
      v18 = a2->m128i_i32[2];
      v40 = v17;
      v19 = a3->right;
      v58 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
      v55 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
      v41 = v18;
      v20 = a2->m128i_i32[1];
      v39 = v19;
      v21 = a3->top;
      v45 = v20;
      v22 = a2->m128i_i32[0];
      v38 = v21;
      v23 = a3->left;
      v44 = v22;
      v37 = v23;
      v56 = _mm_cvtsi128_si32(si128);
      v54 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
      v53 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
      v52 = _mm_cvtsi128_si32(v5);
      CurrentThreadId = GetCurrentThreadId();
      v25 = *((_QWORD *)this + 34);
      v43 = CurrentThreadId;
      v134 = 4LL;
      v132 = 4LL;
      v42 = *(_DWORD *)(v25 + 72);
      v64 = 0x1000000LL;
      v133 = &v46;
      v131 = &v40;
      v129 = &v39;
      v127 = &v38;
      v125 = &v37;
      v123 = v63;
      v121 = &v62;
      v130 = 4LL;
      v128 = 4LL;
      v126 = 4LL;
      v124 = 4LL;
      v122 = 4LL;
      v119 = &v61;
      v120 = 4LL;
      v117 = &v60;
      v115 = &v59;
      v113 = &v58;
      v111 = &v57;
      v109 = &v56;
      v107 = &v55;
      v105 = &v54;
      v103 = &v53;
      v101 = &v52;
      v99 = &v51;
      v97 = &v50;
      v95 = &v49;
      v93 = &v48;
      v91 = &v47;
      v89 = &v41;
      v87 = &v45;
      v85 = &v44;
      v83 = &v43;
      v81 = &v42;
      v79 = &v64;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v12 + 1);
      v118 = 4LL;
      v116 = 4LL;
      v114 = 4LL;
      v112 = 4LL;
      v110 = 4LL;
      v108 = 4LL;
      v106 = 4LL;
      v104 = 4LL;
      v102 = 4LL;
      v100 = 4LL;
      v98 = 4LL;
      v96 = 4LL;
      v94 = 4LL;
      v92 = 4LL;
      v90 = 4LL;
      v88 = 4LL;
      v86 = 4LL;
      v84 = 4LL;
      v82 = 4LL;
      v80 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v76 = &unk_1807FBF3F;
      UserData.Reserved = 2;
      v77 = 721;
      v78 = 1;
      EventWriteTransfer(*((_QWORD *)v12 + 4), &EventDescriptor, (LPCGUID)(v25 + 8), 0LL, 0x1Eu, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
