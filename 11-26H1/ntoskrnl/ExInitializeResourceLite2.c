/*
 * XREFs of ExInitializeResourceLite2 @ 0x1406D2760
 * Callers:
 *     <none>
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

__int64 __fastcall ExInitializeResourceLite2(_KSWAPPABLE_PAGE *a1, int a2)
{
  unsigned __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  unsigned __int16 *v6; // rax
  __int64 *v7; // r14
  int RecordedStackTraceIndex; // ebp
  unsigned int v9; // ecx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)a1 < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)a1) == 256 )
    ExpTraceLogBadResourceAddress((unsigned __int64)a1, retaddr);
  memset_0(a1, 0, 0x68uLL);
  a1->TransitionLock = (unsigned __int64)a1;
  a1->RegionStart = a1;
  v4 = 0LL;
  *(_QWORD *)&a1->Mdl.Size = 0LL;
  a1->Mdl.Process = 0LL;
  a1[1].LockCount.Value = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v5 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v6 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
      v7 = (__int64 *)v6;
      if ( v6 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v5, v6);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)v5, v7);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v4) = RecordedStackTraceIndex;
    }
    v4 = (unsigned __int16)v4;
  }
  v9 = -1;
  a1[1].TransitionLock = v4;
  if ( a2 != -1 )
    v9 = (a2 + 3999) / 0xFA0u;
  HIDWORD(a1[1].RegionStart) = v9;
  ExpAddResourceToSystemResourceList(a1);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)a1, 0, 0);
  return 0LL;
}
