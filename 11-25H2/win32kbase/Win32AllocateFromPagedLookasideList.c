/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x14000BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x140243000 (memset.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideList(unsigned __int8 *a1)
{
  __int64 UserSessionState; // rax
  void *v3; // rdx
  struct _PAGED_LOOKASIDE_LIST *v4; // rcx
  __int64 v5; // rbx
  char *result; // rax
  char *v7; // rsi
  char *v8; // rsi
  void *v9; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  UserSessionState = W32GetUserSessionState();
  v4 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 16);
  v5 = UserSessionState + 72032;
  if ( a1[5] )
  {
    v8 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    if ( v8 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v5,
                              v8,
                              a1[4],
                              BackTrace) )
        return v8 + 16;
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 16), v8, v9);
    }
    return 0LL;
  }
  if ( (*(_DWORD *)v5 & 0xFFFFFFFD) != 0 )
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    v7 = result;
    if ( result )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
        (const void *)*(unsigned int *)a1);
      result = v7 + 16;
      *(_QWORD *)v7 = *(unsigned int *)a1;
    }
  }
  else
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
  }
  return result;
}
