/*
 * XREFs of ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x1400167C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x140016B60 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B72D4 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char *__fastcall ScanLookAsideList_Allocate(__int64 a1)
{
  unsigned __int8 *v1; // rsi
  _QWORD *v2; // rbx
  void *v3; // rdx
  __int64 v4; // rdi
  void *v5; // rax
  _QWORD *v7; // r14
  char *v8; // rbp
  void *v9; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *(unsigned __int8 **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4240LL);
  v2 = 0LL;
  v4 = W32GetUserSessionState() + 72016;
  if ( v1[5] )
  {
    v8 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v1 + 16), v3);
    if ( v8 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v4,
                              v8,
                              v1[4],
                              BackTrace) )
      {
        return v8 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v1 + 16), v8, v9);
      }
    }
  }
  else if ( !*(_DWORD *)v4 || *(_DWORD *)v4 == 2 )
  {
    v5 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v1 + 16), v3);
    if ( v5 )
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
    return (char *)v5;
  }
  else
  {
    v7 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v1 + 16), v3);
    if ( v7 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
        (const void *)*(unsigned int *)v1);
      v2 = v7 + 2;
      *v7 = *(unsigned int *)v1;
    }
  }
  return (char *)v2;
}
