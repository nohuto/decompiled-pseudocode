/*
 * XREFs of RtlInitializeHeapManager @ 0x1800CFAEC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x1800840B0 (RtlGetSuiteMask.c)
 *     RtlpHpQueryGCTimerInterval @ 0x1800CFCD4 (RtlpHpQueryGCTimerInterval.c)
 *     RtlHpGlobalsInitialize @ 0x1800CFD78 (RtlHpGlobalsInitialize.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800CFEE4 (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800CFF64 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D0FC8 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D10F0 (RtlpHpInitializePerfPolicies.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1)
{
  struct _PEB *v2; // rbx
  unsigned int GCTimerInterval; // eax
  unsigned __int64 v4; // rax
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt
  void (*v8)(void); // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v2 = NtCurrentPeb();
  v9 = 0;
  if ( (unsigned int)RtlpHpOptIntoSegmentHeap(a1, &v9) )
  {
    RtlpHpHeapFeatures |= 1u;
    v8 = (void (*)(void))qword_1801C6698;
    if ( qword_1801C6698
      || (v8 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (ULONGLONG)"kLsE", 1u),
          (qword_1801C6698 = (__int64)v8) != 0) )
    {
      v8();
    }
  }
  RtlpHpInitializePerfPolicies(v9);
  GCTimerInterval = RtlpHpQueryGCTimerInterval(a1);
  Timer = 0LL;
  DueTime.QuadPart = -10000LL * GCTimerInterval;
  qword_1801C6278 = 0LL;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      RtlpHeapErrorHandlerThreshold = 2;
    RtlpDisableBreakOnFailureCookie = 0;
  }
  if ( (RtlpDisableHeapLookaside & 1) == 0 )
    RtlpDisableBreakOnFailureCookie = 0;
  v2->NumberOfHeaps = 0;
  v2->ProcessHeaps = (void **)&RtlpPebHeapListStaticBuffer;
  v2->MaximumNumberOfHeaps = 16;
  qword_1801CBF88 = (__int64)&RtlpProcessHeaps;
  RtlpProcessHeaps = (__int64)&RtlpProcessHeaps;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsLock, 0, 0x10000000u);
  v4 = qword_1801C5F00;
  do
  {
    v5 = v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25) ^ ((v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25)) >> 27);
    v6 = v4;
    v4 = _InterlockedCompareExchange64(&qword_1801C5F00, v5, v4);
  }
  while ( v6 != v4 );
  RtlpHeapKey = 0x2545F4914F6CDD1DLL * v5;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
