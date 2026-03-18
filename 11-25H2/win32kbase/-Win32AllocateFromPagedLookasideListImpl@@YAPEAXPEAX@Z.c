/*
 * XREFs of ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     AllocQueue @ 0x140060510 (AllocQueue.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C4C34 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x140243000 (memset.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideListImpl(char *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  void *v4; // rdx
  _QWORD *v5; // rbx
  struct _PAGED_LOOKASIDE_LIST *v6; // rcx
  __int64 v7; // rdi
  PVOID v8; // rax
  _QWORD *v10; // r14
  char *v11; // rbp
  void *v12; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 0LL;
  v6 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 16);
  v7 = UserSessionState + 72032;
  if ( a1[5] )
  {
    v11 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v7,
                              v11,
                              (unsigned __int8)a1[4],
                              BackTrace) )
      {
        return v11 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(a1 + 16), v11, v12);
      }
    }
  }
  else if ( (*(_DWORD *)v7 & 0xFFFFFFFD) != 0 )
  {
    v10 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v10 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v7 + 8),
        *(unsigned int *)a1);
      v5 = v10 + 2;
      *v10 = *(unsigned int *)a1;
    }
  }
  else
  {
    v8 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v8 )
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
    return (char *)v8;
  }
  return (char *)v5;
}
