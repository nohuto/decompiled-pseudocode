/*
 * XREFs of ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180021450
 * Callers:
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x180062C58 (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 *     ?DestroyStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180080C10 (-DestroyStream@CStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstanceProxyImpl::DestroyStream(CStreamInstanceProxyImpl *this)
{
  size_t v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-E0h]
  __int64 v8; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  CStreamInstanceProxyImpl *v10; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v11[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER Frequency; // [rsp+80h] [rbp-80h] BYREF
  char pszDest[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v17[128]; // [rsp+C8h] [rbp-38h] BYREF
  STRSAFE_LPSTR v18; // [rsp+148h] [rbp+48h] BYREF
  size_t cbDest[2]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int16 *v20; // [rsp+160h] [rbp+60h] BYREF
  int v21; // [rsp+168h] [rbp+68h]
  int v22; // [rsp+16Ch] [rbp+6Ch]
  void *v23; // [rsp+170h] [rbp+70h]
  int v24; // [rsp+178h] [rbp+78h]
  int v25; // [rsp+17Ch] [rbp+7Ch]
  CStreamInstanceProxyImpl **v26; // [rsp+180h] [rbp+80h]
  __int64 v27; // [rsp+188h] [rbp+88h]
  __int64 *v28; // [rsp+190h] [rbp+90h]
  __int64 v29; // [rsp+198h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v2 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v14 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v17, 0, sizeof(v17));
  cbDest[1] = v2;
  StringCchPrintfExA(pszDest, 0x40uLL, &v18, cbDest, 0, "%s", "StreamInstance_Destroy");
  StringCchPrintfExA(v18, cbDest[0], 0LL, 0LL, 0, "-Start");
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF9B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = this;
    v28 = &v9;
    v29 = 8LL;
    v26 = &v10;
    v27 = 8LL;
    v11[0] = 184549376;
    v11[1] = 4;
    v12 = 512LL;
    v20 = *(unsigned __int16 **)(v5 + 8);
    v21 = *v20;
    v22 = 2;
    v23 = &unk_1801A60E5;
    v24 = 43;
    v25 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v11, 0LL, 0LL, 4, &v20, v8);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}
