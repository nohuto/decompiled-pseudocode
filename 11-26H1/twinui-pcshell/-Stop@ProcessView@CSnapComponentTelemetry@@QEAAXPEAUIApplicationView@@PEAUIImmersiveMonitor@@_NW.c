/*
 * XREFs of ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x18006FC9C
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U4@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U5@U2@U2@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456644444AEBU?$_tlgWrapperByVal@$00@@47444447@Z @ 0x18000EBBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000EBBC.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018644 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800709CC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSnapComponentTelemetry::ProcessView::Stop(
        __int64 a1,
        ApplicationViewTraceLoggingHelpers *a2,
        unsigned __int16 **a3,
        char a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  WCHAR *v17; // r14
  const unsigned __int16 *v18; // rdx
  __int64 v19; // r13
  const WCHAR *v20; // r15
  const WCHAR *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rcx
  const unsigned __int16 *v27; // rdx
  const struct _tlgProvider_t *v28; // rbx
  __int64 v29; // r9
  const WCHAR *v30; // r12
  __int64 v31; // rdi
  char v32; // [rsp+140h] [rbp-80h] BYREF
  char v33; // [rsp+141h] [rbp-7Fh] BYREF
  char v34; // [rsp+142h] [rbp-7Eh] BYREF
  int v35; // [rsp+144h] [rbp-7Ch] BYREF
  unsigned int v36; // [rsp+148h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+14Ch] [rbp-74h]
  int v38; // [rsp+150h] [rbp-70h] BYREF
  __int128 v39; // [rsp+154h] [rbp-6Ch] BYREF
  int v40; // [rsp+164h] [rbp-5Ch] BYREF
  DWORD CurrentThreadId; // [rsp+168h] [rbp-58h] BYREF
  unsigned int v42; // [rsp+16Ch] [rbp-54h] BYREF
  __int128 v43; // [rsp+170h] [rbp-50h] BYREF
  unsigned int v44; // [rsp+180h] [rbp-40h] BYREF
  __int64 v45; // [rsp+188h] [rbp-38h] BYREF
  int v46; // [rsp+190h] [rbp-30h]
  int v47; // [rsp+194h] [rbp-2Ch]
  int v48; // [rsp+198h] [rbp-28h]
  int v49; // [rsp+19Ch] [rbp-24h]
  int v50; // [rsp+1A0h] [rbp-20h]
  __int64 v51; // [rsp+1A8h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+1B8h] [rbp-8h]
  __int64 v54; // [rsp+1C0h] [rbp+0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+1C8h] [rbp+8h] BYREF
  const unsigned __int16 *v56; // [rsp+1D8h] [rbp+18h] BYREF
  const WCHAR *v57; // [rsp+1E0h] [rbp+20h] BYREF
  __int64 v58; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v59; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v60; // [rsp+1F8h] [rbp+38h] BYREF
  __int64 v61; // [rsp+200h] [rbp+40h] BYREF
  __int64 v62; // [rsp+208h] [rbp+48h] BYREF
  __int64 v63; // [rsp+210h] [rbp+50h] BYREF
  __int64 v64; // [rsp+218h] [rbp+58h] BYREF
  __int64 v65; // [rsp+220h] [rbp+60h] BYREF
  __int64 v66; // [rsp+228h] [rbp+68h] BYREF
  LPVOID v67[3]; // [rsp+230h] [rbp+70h] BYREF
  __int128 v68; // [rsp+248h] [rbp+88h] BYREF
  __int128 v69; // [rsp+258h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp+B0h] BYREF
  void *v71; // [rsp+280h] [rbp+C0h]
  int v72; // [rsp+288h] [rbp+C8h]
  int v73; // [rsp+28Ch] [rbp+CCh]
  __int64 *v74; // [rsp+290h] [rbp+D0h]
  __int64 v75; // [rsp+298h] [rbp+D8h]
  int *v76; // [rsp+2A0h] [rbp+E0h]
  __int64 v77; // [rsp+2A8h] [rbp+E8h]
  DWORD *p_CurrentThreadId; // [rsp+2B0h] [rbp+F0h]
  __int64 v79; // [rsp+2B8h] [rbp+F8h]
  const WCHAR *v80; // [rsp+2C0h] [rbp+100h]
  int v81; // [rsp+2C8h] [rbp+108h]
  int v82; // [rsp+2CCh] [rbp+10Ch]
  const WCHAR *v83; // [rsp+2D0h] [rbp+110h]
  int v84; // [rsp+2D8h] [rbp+118h]
  int v85; // [rsp+2DCh] [rbp+11Ch]
  int *v86; // [rsp+2E0h] [rbp+120h]
  __int64 v87; // [rsp+2E8h] [rbp+128h]
  __int128 *v88; // [rsp+2F0h] [rbp+130h]
  __int64 v89; // [rsp+2F8h] [rbp+138h]
  char *v90; // [rsp+300h] [rbp+140h]
  __int64 v91; // [rsp+308h] [rbp+148h]
  char *v92; // [rsp+310h] [rbp+150h]
  __int64 v93; // [rsp+318h] [rbp+158h]
  char *v94; // [rsp+320h] [rbp+160h]
  __int64 v95; // [rsp+328h] [rbp+168h]
  char *v96; // [rsp+330h] [rbp+170h]
  __int64 v97; // [rsp+338h] [rbp+178h]
  unsigned int *v98; // [rsp+340h] [rbp+180h]
  __int64 v99; // [rsp+348h] [rbp+188h]
  char *v100; // [rsp+350h] [rbp+190h]
  __int64 v101; // [rsp+358h] [rbp+198h]
  int *v102; // [rsp+360h] [rbp+1A0h]
  __int64 v103; // [rsp+368h] [rbp+1A8h]
  __int128 *v104; // [rsp+370h] [rbp+1B0h]
  __int64 v105; // [rsp+378h] [rbp+1B8h]
  char *v106; // [rsp+380h] [rbp+1C0h]
  __int64 v107; // [rsp+388h] [rbp+1C8h]
  char *v108; // [rsp+390h] [rbp+1D0h]
  __int64 v109; // [rsp+398h] [rbp+1D8h]
  char *v110; // [rsp+3A0h] [rbp+1E0h]
  __int64 v111; // [rsp+3A8h] [rbp+1E8h]
  char *v112; // [rsp+3B0h] [rbp+1F0h]
  __int64 v113; // [rsp+3B8h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+408h] [rbp+248h]

  v67[0] = 0LL;
  v11 = -1LL;
  v67[1] = (LPVOID)-1LL;
  v67[2] = (LPVOID)-1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)v67, a3);
  pv = 0LL;
  v53 = -1LL;
  v54 = -1LL;
  (*(void (__fastcall **)(ApplicationViewTraceLoggingHelpers *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, &pv);
  v36 = 0;
  v12 = (*((__int64 (__fastcall **)(unsigned __int16 **, unsigned int *))*a3 + 3))(a3, &v36);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v12);
  v69 = 0LL;
  v13 = (*((__int64 (__fastcall **)(unsigned __int16 **, __int128 *))*a3 + 11))(a3, &v69);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v13);
  v68 = 0LL;
  v14 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v68);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v14);
  v35 = 0;
  v45 = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v45) >= 0 )
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 32LL))(v45, &v35);
  v15 = *(_QWORD *)(a1 + 272);
  v16 = *(_DWORD *)(v15 + 72);
  v17 = (WCHAR *)v67[0];
  if ( v16 < 0 && (v31 = v15 + 80, v16 == *(_DWORD *)(v31 + 8)) && v31 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v28 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v28 > 5u )
    {
      v32 = a7;
      v50 = HIDWORD(v68);
      v46 = DWORD2(v68);
      v47 = DWORD1(v68);
      v48 = v68;
      v49 = v35;
      v33 = a6;
      v37 = a5;
      v34 = a4;
      v40 = HIDWORD(v69);
      CurrentThreadId = DWORD2(v69);
      v42 = DWORD1(v69);
      *(_QWORD *)&v43 = __PAIR64__(v36, v69);
      v56 = SQM::CensorAppID((LPCWSTR)pv, v27);
      v30 = &pvData;
      if ( v17 )
        v30 = v17;
      v57 = v30;
      v58 = *(_QWORD *)(v31 + 48);
      DWORD2(v43) = *(_DWORD *)(v31 + 68);
      HIDWORD(v43) = *(_DWORD *)(v31 + 16);
      v59 = *(_QWORD *)(v31 + 120);
      v60 = *(_QWORD *)(v31 + 112);
      v44 = *(_DWORD *)(v31 + 104);
      v61 = *(_QWORD *)(v31 + 96);
      v62 = *(_QWORD *)(v31 + 88);
      v38 = *(_DWORD *)(v31 + 80);
      v66 = *(_QWORD *)(v31 + 72);
      LODWORD(v39) = *(_DWORD *)(v31 + 32);
      v63 = *(_QWORD *)(v31 + 24);
      DWORD1(v39) = *(_DWORD *)v31;
      v64 = *(_QWORD *)(v31 + 128);
      DWORD2(v39) = *(_DWORD *)(v31 + 64);
      v65 = *(_QWORD *)(v31 + 56);
      HIDWORD(v39) = *(_DWORD *)(v31 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v51 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v28,
        (__int64)&unk_180823155,
        *(_QWORD *)(a1 + 272) + 8LL,
        v29,
        (__int64)&v51,
        (__int64)&EventDescriptor,
        (__int64)&v39 + 12,
        &v65,
        (__int64)&v39 + 8,
        &v64,
        (__int64)&v39 + 4,
        &v63,
        (__int64)&v39,
        &v66,
        (__int64)&v38,
        &v62,
        &v61,
        (__int64)&v44,
        &v60,
        &v59,
        (__int64)&v43 + 12,
        (__int64)&v43 + 8,
        &v58,
        &v57,
        &v56);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = *((_QWORD *)WindowManagementLogging::Instance() + 1);
    if ( *(_DWORD *)v19 > 5u )
    {
      v34 = a7;
      v39 = v68;
      v38 = v35;
      v33 = a6;
      v44 = a5;
      v32 = a4;
      v43 = v69;
      v42 = v36;
      v20 = SQM::CensorAppID((LPCWSTR)pv, v18);
      v21 = &pvData;
      if ( v17 )
        v21 = v17;
      CurrentThreadId = GetCurrentThreadId();
      v22 = *(_QWORD *)(a1 + 272);
      v40 = *(_DWORD *)(v22 + 72);
      v51 = 0LL;
      v112 = &v34;
      v113 = 1LL;
      v110 = (char *)&v39 + 12;
      v111 = 4LL;
      v108 = (char *)&v39 + 8;
      v109 = 4LL;
      v106 = (char *)&v39 + 4;
      v107 = 4LL;
      v104 = &v39;
      v105 = 4LL;
      v102 = &v38;
      v103 = 4LL;
      v100 = &v33;
      v101 = 1LL;
      v98 = &v44;
      v99 = 4LL;
      v96 = &v32;
      v97 = 1LL;
      v94 = (char *)&v43 + 12;
      v95 = 4LL;
      v92 = (char *)&v43 + 8;
      v93 = 4LL;
      v90 = (char *)&v43 + 4;
      v91 = 4LL;
      v88 = &v43;
      v89 = 4LL;
      v86 = (int *)&v42;
      v87 = 4LL;
      if ( v20 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( v20[v23] );
        v24 = 2 * v23 + 2;
      }
      else
      {
        v20 = &pvData;
        v24 = 2;
      }
      v83 = v20;
      v84 = v24;
      v85 = 0;
      if ( v21 )
      {
        do
          ++v11;
        while ( v21[v11] );
        v25 = 2 * v11 + 2;
      }
      else
      {
        v21 = &pvData;
        v25 = 2;
      }
      v80 = v21;
      v81 = v25;
      v82 = 0;
      p_CurrentThreadId = &CurrentThreadId;
      v79 = 4LL;
      v76 = &v40;
      v77 = 4LL;
      v74 = &v51;
      v75 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v19 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v71 = &unk_18082302F;
      v72 = 293;
      v73 = 1;
      v37 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v19 + 32), &EventDescriptor, (LPCGUID)(v22 + 8), 0LL, 0x15u, &UserData);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  v26 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v53 = 0LL;
  v54 = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
}
