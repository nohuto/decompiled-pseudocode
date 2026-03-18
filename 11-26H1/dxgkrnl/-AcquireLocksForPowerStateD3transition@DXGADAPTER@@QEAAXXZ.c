/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BAB8
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030D2C4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x14030B9B0 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BDF0 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 *v1; // r14
  __int64 v2; // rdi
  char *v4; // rsi
  _QWORD **v5; // r15
  _QWORD *i; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  ADAPTER_RENDER *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v1 = (__int64 *)((char *)this + 3168);
  v2 = *((_QWORD *)this + 396);
  v4 = (char *)this + 3168;
  if ( v2 )
  {
    v5 = (_QWORD **)(v2 + 144);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 24, 0LL) )
      goto LABEL_25;
    *(_QWORD *)(v2 + 32) = KeGetCurrentThread();
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
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)v8[17], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8 + 18, 0LL) )
      {
        goto LABEL_11;
      }
      v8[19] = KeGetCurrentThread();
    }
    if ( !ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*v1, 1) )
      goto LABEL_11;
    v4 = (char *)this + 3168;
  }
  DXGADAPTER::AcquireCoreResourceExclusive(this, 2LL, 1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    goto LABEL_11;
  v9 = (ADAPTER_RENDER *)*v1;
  if ( *v1 )
  {
    if ( !DXGADAPTER::IsDxgmms2(this) )
    {
      if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(v9) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4707;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          4707LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)v9 + 172) )
        goto LABEL_11;
      v4 = (char *)this + 3168;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 760LL) + 8LL)
                                                   + 1040LL))(*(_QWORD *)(*((_QWORD *)this + 396) + 768LL))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 736LL) + 8LL) + 952LL))(*(_QWORD *)(*(_QWORD *)v4 + 744LL))
      || *((_BYTE *)this + 3093) )
    {
LABEL_11:
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this, 0LL);
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
      return;
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
  {
LABEL_25:
    KeLeaveCriticalRegion();
    goto LABEL_11;
  }
  *((_QWORD *)this + 14) = KeGetCurrentThread();
  v10 = (char *)this + 104;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 4232LL) )
  {
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    goto LABEL_25;
  }
  *((_DWORD *)this + 40) = 1;
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  v11 = *((_QWORD *)this + 396);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 24, 0LL);
    KeLeaveCriticalRegion();
    v12 = *((_QWORD *)this + 396);
    *(_QWORD *)(v12 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
}
