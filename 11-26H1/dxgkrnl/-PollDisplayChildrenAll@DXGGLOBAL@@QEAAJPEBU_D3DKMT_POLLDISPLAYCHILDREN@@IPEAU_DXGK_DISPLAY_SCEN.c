/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E5904
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1402599CC (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403CFBC8 (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 *     ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403E7D00 (-MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v5; // edi
  char *v6; // rdx
  char *v7; // rcx
  char *v8; // rax
  bool v9; // zf
  char *v10; // rax
  PVOID v11; // rcx
  PVOID *v12; // r12
  struct _MONITOR_PENDING_EVENT **QuadPart; // r14
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v15; // rsi
  volatile signed __int64 *v16; // rdx
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  struct _MONITOR_PENDING_EVENT *v20; // rsi
  ULONG v21; // edi
  __int64 v22; // rbx
  int v23; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // r14
  int v25; // eax
  unsigned int v26; // r12d
  _DWORD *v27; // rcx
  void *v29; // rcx
  int v30; // eax
  __int64 v31; // r12
  PVOID *__attribute__((__org_arrdim(0,0))) v32; // rcx
  const wchar_t *v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  PVOID *__attribute__((__org_arrdim(0,0))) v36; // rax
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v38; // rsi
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rbx
  signed __int64 v42; // rsi
  __int64 v43; // rbx
  _QWORD *v44; // rsi
  _QWORD *v45; // rdi
  _QWORD *v46; // rbx
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  __int64 i; // rcx
  int v50; // eax
  __int64 v51; // rbx
  ULONG Count; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+54h] [rbp-ACh]
  _QWORD *v55; // [rsp+60h] [rbp-A0h]
  struct _MONITOR_PENDING_EVENT *v57; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int64 *v58; // [rsp+78h] [rbp-88h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTERLISTLOCK *v61[2]; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v62; // [rsp+A0h] [rbp-60h]
  volatile signed __int64 *v63; // [rsp+A8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v64; // [rsp+B0h] [rbp-50h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+B8h] [rbp-48h]
  DXGGLOBAL *v66; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+D0h] [rbp-30h]
  _BYTE v68[64]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v69; // [rsp+118h] [rbp+18h]
  PVOID v70; // [rsp+120h] [rbp+20h]
  _BYTE v71[64]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v72; // [rsp+168h] [rbp+68h]
  PVOID v73; // [rsp+170h] [rbp+70h]
  _BYTE v74[64]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v75; // [rsp+1B8h] [rbp+B8h]
  PVOID Pool2; // [rsp+1C0h] [rbp+C0h]
  _BYTE v77[64]; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v78; // [rsp+208h] [rbp+108h]
  _BYTE v79[144]; // [rsp+210h] [rbp+110h] BYREF
  PVOID v80; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v81[384]; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v82; // [rsp+428h] [rbp+328h]

  v66 = this;
  v64 = a4;
  v53 = 0;
  v5 = 0;
  Count = 0;
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v61, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v61);
  v6 = (char *)this + 808;
  v7 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
    v8 = 0LL;
    if ( v7 != v6 )
      v8 = v7;
    if ( !v8 )
      break;
    v9 = v7 == v6;
    v10 = v7;
    v7 = *(char **)v7;
    if ( v9 )
      v10 = 0LL;
    if ( *((_QWORD *)v10 + 395) )
      ++v5;
  }
  if ( !v5 )
  {
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v61);
    return 0LL;
  }
  Pool2 = 0LL;
  v78 = 0;
  if ( v5 <= 8 )
  {
    Pool2 = v77;
    memset(v77, 0, 8LL * v5);
LABEL_12:
    v78 = v5;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v5 >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(64LL, 8LL * v5, 1265072196LL);
    goto LABEL_12;
  }
LABEL_13:
  v80 = 0LL;
  v82 = 0;
  if ( v5 <= 8 )
  {
    v80 = v81;
    memset(v81, 0, 48LL * v5);
LABEL_15:
    v82 = v5;
    goto LABEL_16;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v5 >= 0x30 )
  {
    v80 = (PVOID)ExAllocatePool2(64LL, 48LL * v5, 1265072196LL);
    goto LABEL_15;
  }
LABEL_16:
  v73 = 0LL;
  v75 = 0;
  if ( v5 <= 8 )
  {
    v73 = v74;
    memset(v74, 0, 8LL * v5);
LABEL_18:
    v75 = v5;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v5 >= 8 )
  {
    v73 = (PVOID)ExAllocatePool2(256LL, 8LL * v5, 1265072196LL);
    goto LABEL_18;
  }
LABEL_19:
  v70 = 0LL;
  v72 = 0;
  if ( v5 <= 8 )
  {
    v70 = v71;
    memset(v71, 0, 8LL * v5);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 8 )
      goto LABEL_21;
    v70 = (PVOID)ExAllocatePool2(256LL, 8LL * v5, 1265072196LL);
  }
  v72 = v5;
LABEL_21:
  v69 = 0;
  v11 = 0LL;
  v55 = 0LL;
  P = 0LL;
  if ( v5 <= 8 )
  {
    P = v68;
    memset(v68, 0, 8LL * v5);
    v11 = P;
    goto LABEL_83;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v5 >= 8 )
  {
    v11 = (PVOID)ExAllocatePool2(256LL, 8LL * v5, 1265072196LL);
    P = v11;
LABEL_83:
    v55 = v11;
    v69 = v5;
  }
  v12 = (PVOID *)v73;
  QuadPart = (struct _MONITOR_PENDING_EVENT **)v70;
  Object = (PVOID *)Pool2;
  WaitBlockArray = (PKWAIT_BLOCK)v80;
  v62 = (PVOID *)v73;
  Timeout.QuadPart = (LONGLONG)v70;
  if ( v73 && v70 && Pool2 && v80 && v11 )
  {
    v14 = (volatile signed __int64 *)((char *)this + 808);
    v15 = (volatile signed __int64 *)*((_QWORD *)this + 101);
    v58 = (volatile signed __int64 *)((char *)this + 808);
    while ( v15 != v14 && v15 )
    {
      if ( Count >= v5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4134;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NumAdapters < MaxNumAdapters",
          4134LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v16 = v15;
      v17 = v15;
      v15 = (volatile signed __int64 *)*v15;
      v63 = v15;
      _m_prefetchw((const void *)(v17 + 3));
      v18 = *((_QWORD *)v17 + 3);
      while ( v18 )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(v16 + 3, v18 + 1, v18);
        if ( v19 == v18 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, (struct DXGADAPTER *const)v16, 0LL);
          v20 = 0LL;
          v57 = 0LL;
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v17);
          if ( *((_QWORD *)v17 + 395) && (int)COREADAPTERACCESS::AcquireExclusive((__int64)v79, 1LL) >= 0 )
          {
            v29 = (void *)*((_QWORD *)v17 + 27);
            v12[Count] = v29;
            ObfReferenceObject(v29);
            if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
              goto LABEL_59;
            v30 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v17, &v57);
            v20 = v57;
            v31 = v30;
            if ( v30 < 0 )
            {
              if ( v57 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4191;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pMonitorPendingEvent == NULL",
                  4191LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              WdLogSingleEntry1(2LL);
              v33 = L"Failed in acquiring monitor pending event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4193;
            }
            else
            {
              v32 = Object;
              QuadPart[Count] = v57;
              v32[Count] = (char *)v20 + 24;
LABEL_59:
              if ( (*((_DWORD *)a2 + 1) & 4) == 0 )
              {
LABEL_60:
                ++Count;
                v12 = v62;
                goto LABEL_94;
              }
              v34 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v17, 0);
              v31 = v34;
              if ( v34 >= 0 )
              {
                v55[Count] = v17;
                goto LABEL_60;
              }
              WdLogSingleEntry1(2LL);
              v33 = L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4213;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, v31, 0LL, 0LL, 0LL, 0LL);
            v53 = v31;
            v12 = v62;
            ObfDereferenceObject(v62[Count]);
            v12[Count] = 0LL;
            if ( v20 )
            {
              MonitorReleaseMonitorPendingEvent(v20, v35);
              v36 = Object;
              QuadPart[Count] = 0LL;
              v36[Count] = 0LL;
            }
LABEL_94:
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v79);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
          v15 = v63;
          break;
        }
      }
      v14 = v58;
    }
    DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)v61);
    v21 = Count;
    if ( Count )
    {
      v22 = Count;
      v23 = v53;
      v24 = v64;
      do
      {
        v25 = DpiPollDisplayChildren(*v12, a3, v24);
        if ( v25 < 0 )
          v23 = v25;
        ObfDereferenceObject(*v12);
        *v12++ = 0LL;
        --v22;
      }
      while ( v22 );
      QuadPart = (struct _MONITOR_PENDING_EVENT **)Timeout.QuadPart;
      v53 = v23;
      v21 = Count;
    }
    v26 = v53;
    v27 = (_DWORD *)a2 + 1;
    if ( (*((_DWORD *)a2 + 1) & 2) != 0 && v21 )
    {
      Timeout.QuadPart = -10000000LL;
      WaitMode = ExGetPreviousMode();
      v38 = Object;
      v39 = KeWaitForMultipleObjects(v21, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
      v26 = 258;
      if ( v39 == 258 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4280;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Monitor pending event wait has been timeouted!",
          4280LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( v39 < 0 )
      {
        v26 = v39;
        v41 = v39;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4286;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
          v41,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v26 = v53;
      }
      v42 = (char *)v38 - (char *)QuadPart;
      v43 = v21;
      do
      {
        MonitorReleaseMonitorPendingEvent(*QuadPart, v40);
        *QuadPart = 0LL;
        *(struct _MONITOR_PENDING_EVENT **)((char *)QuadPart++ + v42) = 0LL;
        --v43;
      }
      while ( v43 );
      v27 = (_DWORD *)a2 + 1;
    }
    if ( (*v27 & 4) != 0 && v21 )
    {
      DXGAUTOADAPTERLISTLOCK::AcquireShared(v61);
      v44 = (_QWORD *)((char *)v66 + 808);
      v45 = (_QWORD *)*((_QWORD *)v66 + 101);
LABEL_106:
      while ( v45 != v44 && v45 )
      {
        v46 = v45;
        v45 = (_QWORD *)*v45;
        _m_prefetchw(v46 + 3);
        v47 = v46[3];
        while ( v47 )
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange64(v46 + 3, v47 + 1, v47);
          if ( v48 == v47 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, (struct DXGADAPTER *const)v46, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v46);
            for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
            {
              if ( (_QWORD *)v55[i] == v46 )
              {
                if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v79, 1LL) >= 0 )
                {
                  v50 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v46, 1);
                  if ( v50 < 0 )
                  {
                    v51 = v50;
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 4359;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to re-eanble mode reset on monitor event (Status == 0x%I64x)!",
                      v51,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v79);
                }
                break;
              }
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
            goto LABEL_106;
          }
        }
      }
    }
    if ( P != v68 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v69 = 0;
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    if ( v73 != v74 && v73 )
      ExFreePoolWithTag(v73, 0);
    v73 = 0LL;
    v75 = 0;
    if ( v80 != v81 && v80 )
      ExFreePoolWithTag(v80, 0);
    v80 = 0LL;
    v82 = 0;
    if ( Pool2 != v77 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v78 = 0;
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v61);
    return v26;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4123;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate per-adapter array memory in PollDisplayChildrenAll",
      4123LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v68 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v69 = 0;
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    if ( v73 != v74 && v73 )
      ExFreePoolWithTag(v73, 0);
    v73 = 0LL;
    v75 = 0;
    if ( v80 != v81 && v80 )
      ExFreePoolWithTag(v80, 0);
    v80 = 0LL;
    v82 = 0;
    if ( Pool2 != v77 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v78 = 0;
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v61);
    return 3221225495LL;
  }
}
