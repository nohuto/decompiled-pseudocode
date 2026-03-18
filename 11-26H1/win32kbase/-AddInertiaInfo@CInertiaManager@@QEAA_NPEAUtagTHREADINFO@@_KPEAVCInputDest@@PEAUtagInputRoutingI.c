/*
 * XREFs of ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1401730D8
 * Callers:
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400CE144 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x140189D78 (-AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ApiSetEditionEdgyProcessInertia @ 0x1401C1B14 (ApiSetEditionEdgyProcessInertia.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CInertiaManager::AddInertiaInfo(
        CInertiaManager *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        struct CInputDest *a4,
        struct tagInputRoutingInfo *a5,
        int a6,
        int a7,
        int a8,
        const struct INERTIA_INFO *a9,
        double a10,
        const struct tagRECT *a11,
        const struct _D3DMATRIX *a12)
{
  __int64 v12; // r15
  LARGE_INTEGER PerformanceCounter; // r12
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  LONGLONG v24; // rbx
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v30; // r9d
  CInputDest *v31; // rcx
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v33; // r9d
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx

  v12 = *((_QWORD *)a2 + 57);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 17152) )
  {
    v24 = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(W32GetUserSessionState(
                  (unsigned __int64)((unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 63,
                  (unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64,
                  100 * gliQpcFreq.LowPart)
              + 17152) = v24;
  }
  v25 = (_QWORD *)((char *)this + 8);
  if ( (*((_DWORD *)this + 48) & 1) != 0 && *v25 == v12 )
  {
    v27 = *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 17152);
    if ( PerformanceCounter.QuadPart - *((_QWORD *)this + 23) <= v27
      && (!(unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v27, v26, v28) || !a8)
      && a10 <= *((double *)this + 5) )
    {
      return 0;
    }
  }
  *v25 = v12;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = *(_QWORD *)a9;
  *((_DWORD *)this + 8) = *((_DWORD *)a9 + 2);
  *((double *)this + 5) = a10;
  *((LARGE_INTEGER *)this + 23) = PerformanceCounter;
  v30 = (32 * a8) ^ (*((_DWORD *)this + 48) ^ (8 * a6)) & 0xFFFFFFC7 ^ ((8 * a6) ^ (16 * a7)) & 0xFFFFFFCF ^ ((16 * a7) ^ (32 * a8)) & 0xFFFFFFDF;
  *((_DWORD *)this + 48) = v30;
  if ( a7 || !a4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    v35 = v30 & 0xFFFFFFFD;
  }
  else
  {
    *((_QWORD *)this + 16) = CInputDest::GetWindowHandle(a4);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(v31);
    v34 = 2;
    if ( a2 != DelegateThreadInfo )
      v34 = 0;
    v35 = v33 & 0xFFFFFFFD | v34;
  }
  *((_DWORD *)this + 48) = v35;
  if ( a11 )
  {
    v36 = v35 | 4;
    *((struct tagRECT *)this + 3) = *a11;
    *((struct _D3DMATRIX *)this + 1) = *a12;
  }
  else
  {
    v36 = v35 & 0xFFFFFFFB;
  }
  *((_DWORD *)this + 48) = v36;
  if ( a5 )
  {
    v36 |= 0x40u;
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a5 + 1);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a5 + 2);
  }
  *((_DWORD *)this + 48) = v36 | 1;
  InputTraceLogging::Inertia::AddInertiaInfo((CInertiaManager *)((char *)this + 8));
  ApiSetEditionEdgyProcessInertia((char *)this + 8);
  return 1;
}
