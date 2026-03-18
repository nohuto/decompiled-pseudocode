/*
 * XREFs of ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14000B080
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x140243000 (memset.c)
 */

char *ScanLookAsideList_Allocate(void)
{
  unsigned __int8 *v0; // rsi
  __int64 UserSessionState; // rax
  void *v2; // rdx
  _QWORD *v3; // rbx
  NSInstrumentation *v4; // rcx
  __int64 v5; // rdi
  void *v6; // rax
  _QWORD *v8; // r14
  char *v9; // rbp
  void *v10; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v0 = *(unsigned __int8 **)(*(_QWORD *)(W32GetSessionState() + 88) + 4136LL);
  UserSessionState = W32GetUserSessionState();
  v3 = 0LL;
  v4 = (NSInstrumentation *)(v0 + 16);
  v5 = UserSessionState + 72032;
  if ( v0[5] )
  {
    v9 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v2);
    if ( v9 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v5,
                              v9,
                              v0[4],
                              BackTrace) )
      {
        return v9 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v0 + 16), v9, v10);
      }
    }
  }
  else if ( (*(_DWORD *)v5 & 0xFFFFFFFD) != 0 )
  {
    v8 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v2);
    if ( v8 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
        (const void *)*(unsigned int *)v0);
      v3 = v8 + 2;
      *v8 = *(unsigned int *)v0;
    }
  }
  else
  {
    v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v2);
    if ( v6 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
    return (char *)v6;
  }
  return (char *)v3;
}
