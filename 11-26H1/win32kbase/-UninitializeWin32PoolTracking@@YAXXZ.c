/*
 * XREFs of ?UninitializeWin32PoolTracking@@YAXXZ @ 0x1401B3888
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B3978 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x1401B3A08 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401B3A7C (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z @ 0x1401EB29C (-PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401FCAA0 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall UninitializeWin32PoolTracking(int a1, int a2, int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  unsigned __int64 OutstandingPoolTags; // rax
  unsigned __int64 v5; // rsi
  unsigned int *Pool2; // rax
  unsigned int *v7; // rdi
  NSInstrumentation::CPointerHashTable *v8; // rcx
  struct W32_PUSH_LOCK *v9; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (NSInstrumentation::CLeakTrackingAllocator *)(W32GetUserSessionState(a1, a2, a3) + 72016);
  OutstandingPoolTags = NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v3, 0LL, 0LL, 0LL);
  v5 = OutstandingPoolTags;
  if ( OutstandingPoolTags )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * OutstandingPoolTags, 1953264469LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v3, Pool2, v5, &v10);
      PoolLeakCaptureLiveDump(v10, v7, v5);
      ExFreePoolWithTag(v7, 0);
    }
  }
  v8 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v3 + 11);
  if ( v8 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v8,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      v3);
  v9 = (struct W32_PUSH_LOCK *)*((_QWORD *)v3 + 12);
  if ( v9 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(v9);
  NSInstrumentation::CLeakTrackingAllocator::Destroy(v3);
}
