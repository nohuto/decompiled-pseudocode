/*
 * XREFs of WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80
 * Callers:
 *     WMIInitialize @ 0x140CDFE78 (WMIInitialize.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int8 __fastcall WmipGetSMBiosFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v4; // rax
  __int64 *v5; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v7; // bx
  unsigned __int8 result; // al
  __int64 v9; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 240);
  if ( (unsigned __int64)&EtwpSecurityLock.WpsFeedback < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&EtwpSecurityLock.WpsFeedback) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&EtwpSecurityLock.WpsFeedback, retaddr);
  }
  memset_0(&EtwpSecurityLock.Spare35[1], 0, 0x50uLL);
  v2 = 0LL;
  EtwpSecurityLock.Spare35[0] = (unsigned __int64)&EtwpSecurityLock.WpsFeedback;
  EtwpSecurityLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&EtwpSecurityLock.WpsFeedback;
  EtwpSecurityLock.SystemAffinityTokenListHead.Next = 0LL;
  EtwpSecurityLock.IptSaveArea = 0LL;
  EtwpSecurityLock.SchedulerAssistLastYieldBoostTime = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v4 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v5 = (__int64 *)v4) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v4);
      v7 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v5);
    }
    else
    {
      v7 = 0;
    }
    v2 = v7;
  }
  *(_QWORD *)&EtwpSecurityLock.SchedulerAssistYieldCounter = v2;
  HIDWORD(EtwpSecurityLock.KcsanThread) = -1;
  result = ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&EtwpSecurityLock.WpsFeedback);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    result = PerfLogExecutiveResourceInitialize(65544, (__int64)&EtwpSecurityLock.WpsFeedback, 0, 0);
  if ( *(_DWORD *)v1 >= 0x1150u )
  {
    v9 = *(_QWORD *)(v1 + 56);
    if ( v9 )
    {
      ExpPlatformBinaryLock.StackLimit = *(void *volatile *)(v9 + 16);
      LODWORD(WmipSMBiosTableLength) = *(_DWORD *)(v9 + 12);
      BYTE1(WmipSMBiosVersionInfo) = *(_BYTE *)(v9 + 7);
      result = *(_BYTE *)(v9 + 8);
      LOBYTE(WmipSMBiosVersionInfo) = 0;
      HIWORD(WmipSMBiosVersionInfo) = result;
    }
  }
  return result;
}
