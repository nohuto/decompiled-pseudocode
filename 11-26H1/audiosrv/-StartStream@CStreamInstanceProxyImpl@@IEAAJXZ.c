/*
 * XREFs of ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180020C84
 * Callers:
 *     ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18007FA50 (-StartStream@CStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::StartStream(CStreamInstanceProxyImpl *this)
{
  size_t v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp-B0h] BYREF
  char pszDest[64]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v10[128]; // [rsp+98h] [rbp-68h] BYREF
  STRSAFE_LPSTR v11; // [rsp+118h] [rbp+18h] BYREF
  size_t cbDest[2]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v2 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v7 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v10, 0, sizeof(v10));
  cbDest[1] = v2;
  StringCchPrintfExA(pszDest, 0x40uLL, &v11, cbDest, 0, "%s", "StreamInstance_Start");
  StringCchPrintfExA(v11, cbDest[0], 0LL, 0LL, 0, "-Start");
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 96LL))(
         *((_QWORD *)this + 3),
         *((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFAB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3);
  else
    v4 = 0;
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
