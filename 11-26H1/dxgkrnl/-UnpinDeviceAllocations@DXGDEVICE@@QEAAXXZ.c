/*
 * XREFs of ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x14030F070
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x14030EFB0 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140317484 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceAllocations(struct _KTHREAD **this)
{
  DXGPUSHLOCK *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KTHREAD *i; // rbx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  struct DXGALLOCATION *v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = (DXGPUSHLOCK *)(this + 26);
  if ( this != (struct _KTHREAD **)-208LL && this[27] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v1, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v1, v3, v4);
    ExAcquirePushLockExclusiveEx(v1, 0LL);
  }
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  for ( i = this[6]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 8) )
  {
    v6 = this[2];
    v9 = i;
    v7 = *((_QWORD *)v6 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v7 + 184)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 478;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
        478LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)i + 18) & 0x800) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 216LL))(
        *((_QWORD *)this[2] + 96),
        *((_QWORD *)i + 3));
      *((_DWORD *)i + 18) &= ~0x800u;
    }
    v8 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v8 & 0x2000) != 0 && *((_QWORD *)i + 3) )
      DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, (v8 >> 6) & 0xF, v4, &v9, 0LL);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
