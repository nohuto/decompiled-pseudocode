/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x14019A6F0
 * Callers:
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x14019A604 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401D33F0 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x1401418D0 (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x14019A730 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation::CLeakTrackingAllocator::PersistState(this);
  NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(this);
  if ( *((_BYTE *)this + 144) )
    ExFreePoolWithTag(this, 0);
}
