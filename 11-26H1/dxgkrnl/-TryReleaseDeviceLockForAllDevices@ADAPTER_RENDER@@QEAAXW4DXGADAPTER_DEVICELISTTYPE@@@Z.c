/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x14030BE30
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BDF0 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(ADAPTER_RENDER *a1, int a2)
{
  __int64 v2; // rbp
  char *v3; // rbp
  __int64 v4; // r14
  _QWORD **v5; // r14
  _QWORD *i; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  PERESOURCE *v9; // rsi

  v2 = 48LL;
  if ( a2 != 1 )
    v2 = 24LL;
  v3 = (char *)a1 + v2;
  v4 = 160LL;
  if ( a2 != 1 )
    v4 = 144LL;
  v5 = (_QWORD **)((char *)a1 + v4);
  if ( *((struct _KTHREAD **)v3 + 1) == KeGetCurrentThread() || ADAPTER_RENDER::IsCoreResourceExclusiveOwner(a1) )
  {
    for ( i = *v5; ; i = (_QWORD *)*i )
    {
      v7 = 0LL;
      if ( i != v5 )
        v7 = i;
      if ( !v7 )
        break;
      v8 = i;
      if ( i == v5 )
        v8 = 0LL;
      v9 = (PERESOURCE *)(v8 + 17);
      if ( !*((_BYTE *)v8 + 72) && !ExIsResourceAcquiredExclusiveLite(*v9) )
        break;
      ExReleaseResourceLite(*v9);
      if ( (struct _KTHREAD *)v8[19] != KeGetCurrentThread() )
        break;
      v8[19] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 18, 0LL);
    }
    if ( *((struct _KTHREAD **)v3 + 1) == KeGetCurrentThread() )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
