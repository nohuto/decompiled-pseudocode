/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180020240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(unsigned __int64 this, struct IStreamInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  size_t v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp-B0h] BYREF
  char pszDest[64]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[128]; // [rsp+98h] [rbp-68h] BYREF
  STRSAFE_LPSTR v15; // [rsp+118h] [rbp+18h] BYREF
  size_t cbDest[2]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v11 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v14, 0, sizeof(v14));
  cbDest[1] = v5;
  StringCchPrintfExA(pszDest, 0x40uLL, &v15, cbDest, 0, "%s", "ProcessSubmix_StreamStart");
  StringCchPrintfExA(v15, cbDest[0], 0LL, 0LL, 0, "-Start");
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  v6 = (*(__int64 (__fastcall **)(struct IStreamInstance *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
  else
  {
    v8 = *(_DWORD *)(this - 8 + 128);
    *(_DWORD *)(this - 8 + 128) = v8 + 1;
    if ( !v8 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this - 8 + 200) + 344LL))(
        *(_QWORD *)(this - 8 + 200),
        this & -(__int64)(this != 8));
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
