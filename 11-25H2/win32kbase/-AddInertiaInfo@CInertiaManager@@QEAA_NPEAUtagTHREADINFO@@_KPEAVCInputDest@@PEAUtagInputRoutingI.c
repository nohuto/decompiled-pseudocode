/*
 * XREFs of ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x140211DDC
 * Callers:
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140125E38 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionEdgyProcessInertia @ 0x14019500C (ApiSetEditionEdgyProcessInertia.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14021206C (-AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
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
  __int64 v12; // r14
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  LONGLONG v22; // rbx
  int v23; // eax
  unsigned int v25; // r9d
  CInputDest *v26; // rcx
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v28; // r9d
  int v29; // r10d
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx

  v12 = *((_QWORD *)a2 + 58);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v19, v18) + 17160) )
  {
    v22 = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(W32GetUserSessionState(
                  (unsigned __int64)((unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 63,
                  (unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64)
              + 17160) = v22;
  }
  if ( (*((_DWORD *)this + 48) & 1) != 0
    && *((_QWORD *)this + 1) == v12
    && PerformanceCounter.QuadPart - *((_QWORD *)this + 23) <= *(_QWORD *)(W32GetUserSessionState(v21, v20) + 17160) )
  {
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a8 || (v23 = 0, a10 > *((double *)this + 5)) )
        v23 = 1;
      if ( !v23 )
        return 0;
    }
    else if ( a10 <= *((double *)this + 5) )
    {
      return 0;
    }
  }
  *((_QWORD *)this + 1) = v12;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = *(_QWORD *)a9;
  *((_DWORD *)this + 8) = *((_DWORD *)a9 + 2);
  *((double *)this + 5) = a10;
  *((LARGE_INTEGER *)this + 23) = PerformanceCounter;
  v25 = (32 * a8) ^ ((8 * a6) ^ (16 * a7)) & 0xFFFFFFCF ^ ((16 * a7) ^ (32 * a8)) & 0xFFFFFFDF ^ (*((_DWORD *)this + 48) ^ (8 * a6)) & 0xFFFFFFC7;
  *((_DWORD *)this + 48) = v25;
  if ( a7 || !a4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    v31 = v25 & 0xFFFFFFFD;
  }
  else
  {
    *((_QWORD *)this + 16) = CInputDest::GetWindowHandle(a4);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(v26);
    v30 = 2;
    if ( a2 != DelegateThreadInfo )
      v30 = v29;
    v31 = v28 & 0xFFFFFFFD | v30;
  }
  *((_DWORD *)this + 48) = v31;
  if ( a11 )
  {
    v32 = v31 | 4;
    *((struct tagRECT *)this + 3) = *a11;
    *((struct _D3DMATRIX *)this + 1) = *a12;
  }
  else
  {
    v32 = v31 & 0xFFFFFFFB;
  }
  *((_DWORD *)this + 48) = v32;
  if ( a5 )
  {
    v32 |= 0x40u;
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a5 + 1);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a5 + 2);
  }
  *((_DWORD *)this + 48) = v32 | 1;
  InputTraceLogging::Inertia::AddInertiaInfo((CInertiaManager *)((char *)this + 8));
  ApiSetEditionEdgyProcessInertia((__int64)this + 8, v33);
  return 1;
}
