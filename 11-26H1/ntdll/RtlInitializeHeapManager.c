/*
 * XREFs of RtlInitializeHeapManager @ 0x1800D3DD4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHpQueryGCTimerInterval @ 0x1800D3FBC (RtlpHpQueryGCTimerInterval.c)
 *     RtlHpGlobalsInitialize @ 0x1800D4060 (RtlHpGlobalsInitialize.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800D41CC (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800D424C (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D5070 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D5198 (RtlpHpInitializePerfPolicies.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlInitializeHeapManager(__int64 a1)
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
    v8 = (void (*)(void))qword_1801C7648;
    if ( qword_1801C7648
      || (v8 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (signed __int64)"kLsE", 1u),
          (qword_1801C7648 = (__int64)v8) != 0) )
    {
      v8();
    }
  }
  RtlpHpInitializePerfPolicies(v9);
  GCTimerInterval = RtlpHpQueryGCTimerInterval(a1);
  qword_1801C7268 = 0LL;
  qword_1801C7270 = -10000LL * GCTimerInterval;
  qword_1801C7278 = 0LL;
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
  qword_1801CCF48 = (__int64)&RtlpProcessHeaps;
  RtlpProcessHeaps = (__int64)&RtlpProcessHeaps;
  RtlInitializeCriticalSectionEx((__int64)&RtlpProcessHeapsLock, 0, 0x10000000);
  v4 = qword_1801C6F00;
  do
  {
    v5 = v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25) ^ ((v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25)) >> 27);
    v6 = v4;
    v4 = _InterlockedCompareExchange64(&qword_1801C6F00, v5, v4);
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
