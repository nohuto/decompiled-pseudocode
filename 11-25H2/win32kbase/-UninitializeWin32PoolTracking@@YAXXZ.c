/*
 * XREFs of ?UninitializeWin32PoolTracking@@YAXXZ @ 0x14019A604
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x14019A6F0 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x14019A780 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x14019A7F0 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z @ 0x1401C27FC (-PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D3610 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall UninitializeWin32PoolTracking(__int64 a1, __int64 a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx
  unsigned __int64 OutstandingPoolTags; // rax
  unsigned __int64 v4; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v6; // rsi
  NSInstrumentation::CPointerHashTable *v7; // rcx
  struct W32_PUSH_LOCK *v8; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (NSInstrumentation::CLeakTrackingAllocator *)(W32GetUserSessionState(a1, a2) + 72032);
  OutstandingPoolTags = NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v2, 0LL, 0LL, 0LL);
  v4 = OutstandingPoolTags;
  if ( OutstandingPoolTags )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * OutstandingPoolTags, 1953264469LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v2, Pool2, v4, &v9);
      PoolLeakCaptureLiveDump(v9, v6, v4);
      ExFreePoolWithTag(v6, 0);
    }
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v2 + 11);
  if ( v7 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v7,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      v2);
  v8 = (struct W32_PUSH_LOCK *)*((_QWORD *)v2 + 12);
  if ( v8 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(v8);
  NSInstrumentation::CLeakTrackingAllocator::Destroy(v2);
}
