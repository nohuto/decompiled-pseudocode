/*
 * XREFs of ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x140016910
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     AllocQueue @ 0x1400D2A10 (AllocQueue.c)
 *     ?AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x140165010 (-AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x140016B60 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B72D4 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideListImpl(char *a1)
{
  void *v2; // rdx
  __int64 v3; // rbx
  char *result; // rax
  char *v5; // rsi
  char *v6; // rsi
  void *v7; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = W32GetUserSessionState() + 72016;
  if ( a1[5] )
  {
    v6 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a1 + 16), v2);
    if ( v6 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              v6,
                              (unsigned __int8)a1[4],
                              BackTrace) )
        return v6 + 16;
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 136));
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 16), v6, v7);
    }
    return 0LL;
  }
  if ( !*(_DWORD *)v3 || *(_DWORD *)v3 == 2 )
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a1 + 16), v2);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 112));
  }
  else
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a1 + 16), v2);
    v5 = result;
    if ( result )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v3 + 8),
        (const void *)*(unsigned int *)a1);
      result = v5 + 16;
      *(_QWORD *)v5 = *(unsigned int *)a1;
    }
  }
  return result;
}
