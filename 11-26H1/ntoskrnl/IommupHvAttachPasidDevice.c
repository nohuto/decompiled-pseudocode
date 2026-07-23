/*
 * XREFs of IommupHvAttachPasidDevice @ 0x1405A001C
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     IommupHvSetUpDomainConfig @ 0x1405A110C (IommupHvSetUpDomainConfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDevice(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  char v5; // r14
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // r14
  __int64 v11; // rdx
  AutoBoost *v12; // rax
  volatile unsigned __int8 *v13; // rdx
  AutoBoost *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h] BYREF
  __int128 v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v20 = 0x100000000LL;
  v5 = 0;
  LODWORD(v23) = 0;
  v21 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v25 = 0;
  if ( *(_BYTE *)(a1 + 265) )
  {
    if ( !BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    {
      v7 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase, 0LL, 0LL, a4);
      v9 = _interlockedbittestandset64(
             (volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
             0LL);
      v10 = v7;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
          v7,
          (__int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v8) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v8, 1);
        }
        else
        {
          *((_BYTE *)v10 + 10) = 1;
        }
      }
      if ( !BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
      {
        v4 = guard_dispatch_icall_no_overrides(0LL, LODWORD(IommuInterfaceStateChangeCallbackPushLock.KernelStack));
        if ( v4 >= 0 )
          BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = 1;
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      if ( v4 < 0 )
        goto LABEL_44;
    }
    LODWORD(v20) = _InterlockedIncrement(&HalpIommuDomainId);
    v24 = v20;
    v4 = guard_dispatch_icall_no_overrides(&v24, a2);
    if ( v4 < 0 )
      goto LABEL_44;
    v21 = 0LL;
    v23 = 0LL;
    v5 = 1;
    v22 = 0LL;
    v4 = IommupHvSetUpDomainConfig(0LL, &v21);
    if ( v4 < 0 )
      goto LABEL_43;
    v4 = guard_dispatch_icall_no_overrides(&v20, &v21);
    if ( v4 < 0 )
      goto LABEL_43;
  }
  else
  {
    LODWORD(v20) = IommuInterfaceStateChangeCallbackPushLock.CycleTime;
    if ( !LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadLock) )
    {
      v12 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase, 0LL, 0LL, a4);
      v9 = _interlockedbittestandset64(
             (volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
             0LL);
      v14 = v12;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
          v12,
          (__int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v13) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v14 + 33), v13, 1);
        }
        else
        {
          *((_BYTE *)v14 + 10) = 1;
        }
      }
      v24 = v20;
      v4 = guard_dispatch_icall_no_overrides(&v24, v13);
      if ( v4 >= 0 )
      {
        v21 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        v4 = IommupHvSetUpDomainConfig(0LL, &v21);
        if ( v4 < 0 || (v4 = guard_dispatch_icall_no_overrides(&v20, &v21), v4 < 0) )
          guard_dispatch_icall_no_overrides(&v20, v15);
        else
          LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadLock) = 1;
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.StackBase);
      if ( v4 < 0 )
        goto LABEL_44;
    }
  }
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v20);
  if ( v4 < 0 )
  {
LABEL_42:
    if ( !v5 )
    {
LABEL_44:
      *(_DWORD *)(a1 + 268) = -1;
      return (unsigned int)v4;
    }
LABEL_43:
    guard_dispatch_icall_no_overrides(&v20, v11);
    goto LABEL_44;
  }
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v20);
  if ( v4 < 0 )
  {
LABEL_41:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v16);
    goto LABEL_42;
  }
  v17 = *(_BYTE *)(a1 + 265) == 0;
  *(_DWORD *)(a1 + 268) = v20;
  if ( !v17 )
  {
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 42LL);
    if ( v4 < 0 )
    {
LABEL_40:
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v18);
      goto LABEL_41;
    }
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 0LL);
    if ( v4 < 0 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 33LL);
      goto LABEL_40;
    }
  }
  return (unsigned int)v4;
}
