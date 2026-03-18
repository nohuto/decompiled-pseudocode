/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093290
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093270 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180093A18 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180093A80 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180094C30 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1801CA2FC (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  __int64 v2; // r8
  int v3; // ebx
  CHitTestContext *v4; // r15
  unsigned __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  CResource *v9; // r14
  int v10; // esi
  __int64 v11; // rax
  int v12; // eax
  _DWORD *Value; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  CThreadContext *v20; // rax
  CThreadContext *v21; // rax
  int v22; // eax
  CResource *v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v41[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  _BYTE v45[64]; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  unsigned __int8 v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+40h] BYREF
  __int64 v49; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v50; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v51[2]; // [rsp+158h] [rbp+58h] BYREF
  int v52; // [rsp+168h] [rbp+68h]
  int v53; // [rsp+16Ch] [rbp+6Ch]
  _BYTE v54[64]; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1C8h] [rbp+C8h]
  int *v58; // [rsp+1D0h] [rbp+D0h]
  __int64 v59; // [rsp+1D8h] [rbp+D8h]
  __int64 *v60; // [rsp+1E0h] [rbp+E0h]
  __int64 v61; // [rsp+1E8h] [rbp+E8h]
  __int64 *v62; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  int *v66; // [rsp+210h] [rbp+110h]
  __int64 v67; // [rsp+218h] [rbp+118h]
  int *v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+228h] [rbp+128h]
  int *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]
  int *v72; // [rsp+240h] [rbp+140h]
  __int64 v73; // [rsp+248h] [rbp+148h]
  int *v74; // [rsp+250h] [rbp+150h]
  __int64 v75; // [rsp+258h] [rbp+158h]
  int *v76; // [rsp+260h] [rbp+160h]
  __int64 v77; // [rsp+268h] [rbp+168h]
  int *v78; // [rsp+270h] [rbp+170h]
  __int64 v79; // [rsp+278h] [rbp+178h]
  int *v80; // [rsp+280h] [rbp+180h]
  __int64 v81; // [rsp+288h] [rbp+188h]
  int *v82; // [rsp+290h] [rbp+190h]
  __int64 v83; // [rsp+298h] [rbp+198h]
  int *v84; // [rsp+2A0h] [rbp+1A0h]
  __int64 v85; // [rsp+2A8h] [rbp+1A8h]
  int *v86; // [rsp+2B0h] [rbp+1B0h]
  __int64 v87; // [rsp+2B8h] [rbp+1B8h]
  int *v88; // [rsp+2C0h] [rbp+1C0h]
  __int64 v89; // [rsp+2C8h] [rbp+1C8h]
  int *v90; // [rsp+2D0h] [rbp+1D0h]
  __int64 v91; // [rsp+2D8h] [rbp+1D8h]
  int *v92; // [rsp+2E0h] [rbp+1E0h]
  __int64 v93; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v94; // [rsp+2F0h] [rbp+1F0h]
  __int64 v95; // [rsp+2F8h] [rbp+1F8h]
  CResource **v96; // [rsp+300h] [rbp+200h]
  __int64 v97; // [rsp+308h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+310h] [rbp+210h] BYREF
  int *v99; // [rsp+320h] [rbp+220h]
  __int64 v100; // [rsp+328h] [rbp+228h]
  int *v101; // [rsp+330h] [rbp+230h]
  __int64 v102; // [rsp+338h] [rbp+238h]
  __int64 *v103; // [rsp+340h] [rbp+240h]
  __int64 v104; // [rsp+348h] [rbp+248h]
  int *v105; // [rsp+350h] [rbp+250h]
  __int64 v106; // [rsp+358h] [rbp+258h]
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v54, "HitTest", 0LL);
  v41[1] = *((_DWORD *)a1 + 32);
  v3 = 1;
  v42 = *((_QWORD *)a1 + 15);
  v44 = 0LL;
  v47 = 0;
  *(_DWORD *)&v45[56] = 0;
  v46 = 10666LL;
  v43 = 0LL;
  *(__m128i *)&v45[8] = _mm_load_si128((const __m128i *)&_xmm);
  v41[0] = 0;
  *(_QWORD *)v45 = 1065353216LL;
  *(_OWORD *)&v45[24] = 0LL;
  *(__m128i *)&v45[40] = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)&v45[60] = 1065353216;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v18 = *((int *)a1 + 29);
    v26 = *((_DWORD *)a1 + 27);
    v19 = *((unsigned int *)a1 + 28) | (unsigned __int64)(v18 << 32);
    v100 = 4LL;
    v25 = *((_DWORD *)a1 + 2);
    v24 = *((_DWORD *)a1 + 1);
    v99 = &v24;
    v101 = &v25;
    v103 = (__int64 *)&v40;
    v105 = &v26;
    v40 = v19;
    v102 = 4LL;
    v104 = 8LL;
    v106 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_Start,
      v2,
      5u,
      &v98);
  }
  if ( !CInputManager::s_pInputManager )
  {
LABEL_17:
    v14 = v47;
    v15 = *((_QWORD *)&v43 + 1);
    *((_QWORD *)a1 + 2) = v43;
    *((_DWORD *)a1 + 24) = HIDWORD(v46);
    v16 = (*((_DWORD *)a1 + 25) ^ v14) & 0xFFFFFFFE;
    *((_QWORD *)a1 + 3) = v15;
    *((_DWORD *)a1 + 25) = v14 ^ v16;
    *((_DWORD *)a1 + 32) = v41[0];
    if ( v15 )
    {
      *((_OWORD *)a1 + 2) = *(_OWORD *)v45;
      *((_OWORD *)a1 + 3) = *(_OWORD *)&v45[16];
      *((_OWORD *)a1 + 4) = *(_OWORD *)&v45[32];
      *((_OWORD *)a1 + 5) = *(_OWORD *)&v45[48];
    }
    goto LABEL_19;
  }
  v4 = (struct CInputManager *)((char *)CInputManager::s_pInputManager + 80);
  if ( !*((_DWORD *)a1 + 27) && (*((_DWORD *)a1 + 28) || *((_DWORD *)a1 + 29)) )
    v5 = *((_QWORD *)a1 + 14);
  else
    v5 = *((unsigned int *)a1 + 27) | 0xFFFFFFFE00000000uLL;
  v6 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
  v7 = *v6;
  v23 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, CResource **))(v7 + 64))(v6, v5, &v23);
  v3 = v8;
  if ( v8 >= 0 )
  {
    v9 = v23;
    v10 = 0;
    while ( 1 )
    {
      CTreeLock::AcquireShared((CTreeLock *)(*((_QWORD *)v9 + 3) + 5696LL));
      v11 = *((_QWORD *)v9 + 9);
      if ( !v11 || !*(_BYTE *)(v11 + 96) )
        break;
      v22 = CComposition::RequestOffThreadCleanTree(*((CComposition **)v9 + 3));
      v10 = v22;
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x4Bu, 0LL);
        CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)v9 + 3) + 5696LL));
        goto LABEL_32;
      }
      CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)v9 + 3) + 5696LL));
      _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(*((_QWORD *)v9 + 3) + 6400LL);
    }
    v3 = v10;
    if ( v10 < 0 )
    {
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3220, 2u, v10, 0x12Fu, 0LL);
      goto LABEL_23;
    }
    v51[0] = v23;
    v51[1] = *(_QWORD *)((char *)a1 + 4);
    v52 = *(_DWORD *)a1;
    v53 = *((_DWORD *)a1 + 26);
    v12 = CHitTestContext::HitTestPoint(
            v4,
            (const struct CHitTestContext::HitTestPointRequest *)v51,
            (struct CHitTestContext::HitTestPointResult *)v41);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3220, 2u, v12, 0x138u, 0LL);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v23 + 3) + 5696LL));
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v20 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v20 || (v21 = CThreadContext::CThreadContext(v20), (Value = v21) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x91,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
          (const char *)0x8007000ELL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v21);
    }
    --Value[10];
    if ( v23 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v23);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3220, 2u, v8, 0x12Cu, 0LL);
LABEL_23:
  if ( v23 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v23);
LABEL_19:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v49 = *((_QWORD *)a1 + 3);
    v48 = *((_QWORD *)a1 + 2);
    v25 = *((_DWORD *)a1 + 2);
    v26 = *((_DWORD *)a1 + 1);
    LODWORD(v23) = *(_DWORD *)&v45[60];
    LODWORD(v40) = *(_DWORD *)&v45[56];
    v39 = *(_DWORD *)&v45[52];
    v38 = *(_DWORD *)&v45[48];
    v37 = *(_DWORD *)&v45[44];
    v36 = *(_DWORD *)&v45[40];
    v35 = *(_DWORD *)&v45[36];
    v34 = *(_DWORD *)&v45[32];
    v33 = *(_DWORD *)&v45[28];
    v32 = *(_DWORD *)&v45[24];
    v31 = *(_DWORD *)&v45[20];
    v30 = *(_DWORD *)&v45[16];
    v29 = *(_DWORD *)&v45[12];
    v56 = &v26;
    v58 = &v25;
    v60 = &v48;
    v62 = &v49;
    v64 = &v50;
    v66 = &v24;
    v68 = &v27;
    v70 = &v28;
    v72 = &v29;
    v74 = &v30;
    v76 = &v31;
    v28 = *(_DWORD *)&v45[8];
    v78 = &v32;
    v27 = *(_DWORD *)&v45[4];
    v24 = *(_DWORD *)v45;
    v50 = (unsigned int)v44 | (unsigned __int64)((__int64)SHIDWORD(v44) << 32);
    v57 = 4LL;
    v59 = 4LL;
    v61 = 8LL;
    v63 = 8LL;
    v65 = 8LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v80 = &v33;
    v83 = 4LL;
    v82 = &v34;
    v85 = 4LL;
    v84 = &v35;
    v87 = 4LL;
    v86 = &v36;
    v88 = &v37;
    v90 = &v38;
    v92 = &v39;
    v94 = (__int64 *)&v40;
    v96 = &v23;
    v89 = 4LL;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_Stop,
      v2,
      0x16u,
      &v55);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v54);
  return v3 >= 0;
}
