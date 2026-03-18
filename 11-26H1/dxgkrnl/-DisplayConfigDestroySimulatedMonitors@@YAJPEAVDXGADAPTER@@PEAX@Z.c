/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403F1680
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403F17B0 (-MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD *v11; // rax
  _BYTE v13[144]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2256;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2256LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  v7 = COREADAPTERACCESS::AcquireExclusive((__int64)v13, (unsigned int)(v6 + 1));
  if ( v7 >= 0 )
  {
    LOBYTE(v10) = *((_BYTE *)a2 + 4) != 0;
    v7 = MonitorDestroyAllSameTypeSimulatedMonitor(a1, *(unsigned int *)a2, v5, v10);
    goto LABEL_7;
  }
  if ( v7 != -1073741130 )
  {
LABEL_7:
    v2 = v7;
    goto LABEL_8;
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v11[3] = a1;
  v11[4] = *((int *)a1 + 104);
  v11[5] = *((unsigned int *)a1 + 103);
  WdLogGlobalForLineNumber = 2277;
LABEL_8:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v2;
}
