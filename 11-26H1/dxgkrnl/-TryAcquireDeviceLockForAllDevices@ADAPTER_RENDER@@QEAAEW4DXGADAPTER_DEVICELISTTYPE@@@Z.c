/*
 * XREFs of ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x14030B9B0
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BAB8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rsi
  _QWORD **v5; // rsi
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  _QWORD *i; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi

  v2 = 160LL;
  if ( a2 != 1 )
    v2 = 144LL;
  v5 = (_QWORD **)(a1 + v2);
  KeEnterCriticalRegion();
  v6 = 48LL;
  if ( a2 != 1 )
    v6 = 24LL;
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + v6, 0LL) )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 56LL;
    if ( a2 != 1 )
      v8 = 32LL;
    *(_QWORD *)(v8 + a1) = CurrentThread;
    for ( i = *v5; ; i = (_QWORD *)*i )
    {
      v10 = 0LL;
      if ( i != v5 )
        v10 = i;
      if ( !v10 )
        break;
      v11 = i;
      if ( i == v5 )
        v11 = 0LL;
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)v11[17], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 18, 0LL) )
      {
        return 0;
      }
      v11[19] = KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0;
  }
}
