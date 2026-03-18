/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B3978
 * Callers:
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x1401B3888 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401FC880 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x14017CFFC (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x1401B39B8 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation::CLeakTrackingAllocator::PersistState(this);
  NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(this);
  if ( *((_BYTE *)this + 144) )
    ExFreePoolWithTag(this, 0);
}
