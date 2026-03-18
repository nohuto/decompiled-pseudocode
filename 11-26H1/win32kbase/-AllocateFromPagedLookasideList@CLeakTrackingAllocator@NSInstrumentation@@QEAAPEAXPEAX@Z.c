/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140016A50
 * Callers:
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1401EAC90 (Win32UAFMAllocateFromPagedLookasideList.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x140016B60 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B72D4 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_QWORD *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rsi
  void *v6; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a2[5] )
  {
    v5 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a2 + 16), a2);
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 16);
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              this,
                              v5,
                              (unsigned __int8)a2[4],
                              BackTrace) )
        return v5 + 2;
      _InterlockedIncrement64((volatile signed __int64 *)this + 17);
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v5, v6);
    }
    return 0LL;
  }
  if ( *(_DWORD *)this && *(_DWORD *)this != 2 )
  {
    v5 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a2 + 16), a2);
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 14);
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *((NSInstrumentation::CPointerHashTable **)this + 1),
        (const void *)*(unsigned int *)a2);
      *v5 = *(unsigned int *)a2;
      return v5 + 2;
    }
    return 0LL;
  }
  result = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a2 + 16), a2);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)this + 14);
  return result;
}
