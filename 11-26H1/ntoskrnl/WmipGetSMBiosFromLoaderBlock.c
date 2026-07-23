/*
 * XREFs of WmipGetSMBiosFromLoaderBlock @ 0x140CE6318
 * Callers:
 *     WMIInitialize @ 0x140CE6210 (WMIInitialize.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int8 __fastcall WmipGetSMBiosFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rbp
  ULONG_PTR v2; // rax
  KSPIN_LOCK *v3; // rdi
  unsigned __int16 *v4; // rax
  __int64 *v5; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v7; // bx
  unsigned __int8 result; // al
  __int64 v9; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 240);
  if ( (unsigned __int64)&WmipSMBiosLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&WmipSMBiosLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&WmipSMBiosLock, retaddr);
  }
  memset_0(&WmipSMBiosLock.OwnerTable, 0, 0x50uLL);
  v2 = 0LL;
  WmipSMBiosLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&WmipSMBiosLock;
  WmipSMBiosLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&WmipSMBiosLock;
  WmipSMBiosLock.SharedWaiters = 0LL;
  WmipSMBiosLock.ExclusiveWaiters = 0LL;
  WmipSMBiosLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v3 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v4 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v5 = (__int64 *)v4) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v3, v4);
      v7 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)v3, v5);
    }
    else
    {
      v7 = 0;
    }
    v2 = v7;
  }
  WmipSMBiosLock.CreatorBackTraceIndex = v2;
  HIDWORD(WmipSMBiosLock.Reserved2) = -1;
  result = ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&WmipSMBiosLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    result = PerfLogExecutiveResourceInitialize(65544, (__int64)&WmipSMBiosLock, 0, 0);
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
