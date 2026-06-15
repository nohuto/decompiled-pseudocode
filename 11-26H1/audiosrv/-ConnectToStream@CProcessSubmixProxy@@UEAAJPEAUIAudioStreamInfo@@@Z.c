/*
 * XREFs of ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18001E3EC (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::ConnectToStream(unsigned __int64 this, struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  int v12; // eax
  size_t v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  __int64 v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v25[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER Frequency; // [rsp+A0h] [rbp-60h] BYREF
  char pszDest[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[128]; // [rsp+E8h] [rbp-18h] BYREF
  STRSAFE_LPSTR v32; // [rsp+168h] [rbp+68h] BYREF
  size_t cbDest[2]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int16 *v34; // [rsp+180h] [rbp+80h] BYREF
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+18Ch] [rbp+8Ch]
  void *v37; // [rsp+190h] [rbp+90h]
  int v38; // [rsp+198h] [rbp+98h]
  int v39; // [rsp+19Ch] [rbp+9Ch]
  unsigned __int64 *v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  __int64 *v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h]
  __int64 *v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v21 = v4;
  v5 = *(_QWORD *)a2;
  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 **))(v5 + 192))(a2, &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
LABEL_24:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    return v7;
  }
  v8 = *v20;
  v18 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 80))(v20, &v18);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF37,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
LABEL_23:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    goto LABEL_24;
  }
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(this - 8 + 48);
  v11 = *v10;
  v19 = 0LL;
  v12 = (*v11)(v10, &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675, &v19);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF3A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    goto LABEL_23;
  }
  v13 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v28 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v31, 0, sizeof(v31));
  cbDest[1] = v13;
  StringCchPrintfExA(pszDest, 0x40uLL, &v32, cbDest, 0, "%s", "ProcessSubmix_ConnectToStream");
  StringCchPrintfExA(v32, cbDest[0], 0LL, 0LL, 0, "-Start");
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 72LL))(v18, v19);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF3E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    goto LABEL_22;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  CProcessSubmixProxy::OnConnectedToStream((CProcessSubmixProxy *)(this - 8), a2);
  v15 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v15 > 4u
    && (*(_DWORD *)(v15 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v15 + 24) & 0x200LL) == *(_QWORD *)(v15 + 24) )
  {
    v22 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v23 = *(_QWORD *)(this + 192);
    v24 = this & -(__int64)(this != 8);
    v44 = &v22;
    v45 = 8LL;
    v42 = &v23;
    v43 = 8LL;
    v40 = &v24;
    v41 = 8LL;
    v25[0] = 184549376;
    v25[1] = 4;
    v26 = 512LL;
    v34 = *(unsigned __int16 **)(v15 + 8);
    v35 = *v34;
    v36 = 2;
    v37 = &unk_1801A6175;
    v38 = 72;
    v39 = 1;
    LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v15 + 32), v25, 0LL, 0LL, 5, &v34, v17);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v20 )
    (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
