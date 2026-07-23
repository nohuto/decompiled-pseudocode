/*
 * XREFs of PopHandleWakeSources @ 0x140BFF52C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404F2B08 (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404F8CDC (PopReleaseWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1406D2C10 (ExCopyWakeTimerInfo.c)
 *     PopNewWakeSource @ 0x14077877C (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x140B47F98 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x140C0F8AC (PopValidateRTCWake.c)
 */

LONG PopHandleWakeSources()
{
  __int64 v0; // rsi
  bool v1; // bl
  __int64 v2; // rdx
  int v3; // r14d
  _QWORD *v4; // rbp
  int v5; // ecx
  __int64 v6; // rdi
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rcx
  char v13; // r8
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v17; // r8
  __int64 *i; // rcx
  __int64 v19; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v0 = PopCurrentWakeInfo;
  v1 = 0;
  PopWakeSourceWorkState = 3;
  if ( !PopCurrentWakeInfo )
    goto LABEL_59;
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  LOBYTE(v2) = 0;
  v22 = 0;
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x200000) != 0 || (PopFixedWakeSourceMask & 1) != 0 )
  {
    v3 = 1;
    goto LABEL_9;
  }
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x400000) != 0 || (PopFixedWakeSourceMask & 2) != 0 )
  {
    v3 = 2;
    goto LABEL_9;
  }
  if ( (unsigned __int8)PopValidateRTCWake(&v22, v2)
    && (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x100000) == 0 )
  {
    LOBYTE(v2) = v22;
    v3 = 4;
LABEL_9:
    if ( dword_140F10490 < 0 || (unsigned __int64)dword_140F10490 >= 3 )
      v4 = 0LL;
    else
      v4 = (_QWORD *)qword_140F104A8[3 * dword_140F10490];
    if ( v3 == 4 )
    {
      if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFCuLL )
        v5 = 4;
      else
        v5 = ((_BYTE)v2 != 0) + 2;
    }
    else
    {
      v5 = 1;
    }
    v6 = PopNewWakeSource(v5);
    PopUnlinkWakeSources(v0);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 16);
      if ( v7 == 2 || v7 == 3 )
      {
        ExCopyWakeTimerInfo(v4, (_QWORD *)(v6 + 24));
      }
      else if ( v4 == (_QWORD *)-1LL )
      {
        *(_DWORD *)(v6 + 24) = 0;
      }
      else if ( v4 == (_QWORD *)-2LL )
      {
        *(_DWORD *)(v6 + 24) = 1;
      }
      else
      {
        if ( v4 == (_QWORD *)-3LL )
          v3 = 2;
        *(_DWORD *)(v6 + 24) = v3;
      }
      v8 = *(__int64 **)(v0 + 32);
      if ( *v8 != v0 + 24 )
LABEL_32:
        __fastfail(3u);
      *(_QWORD *)v6 = v0 + 24;
      *(_QWORD *)(v6 + 8) = v8;
      *v8 = v6;
      *(_QWORD *)(v0 + 32) = v6;
      *(_DWORD *)(v0 + 40) = 1;
    }
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v9 = PopWakeInfoList;
  if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
    goto LABEL_32;
  ++PopWakeInfoCount;
  *(_QWORD *)v0 = PopWakeInfoList;
  *(_QWORD *)(v0 + 8) = &PopWakeInfoList;
  *(_QWORD *)(v9 + 8) = v0;
  v10 = v0 + 24;
  PopWakeInfoList = v0;
  v11 = *(_DWORD *)(v0 + 40);
  if ( v11 )
  {
    v12 = *(__int64 **)v10;
    v13 = 0;
    while ( v12 != (__int64 *)v10 )
    {
      v14 = *((_DWORD *)v12 + 4);
      if ( v14 == 1 )
        goto LABEL_45;
      if ( !v14 )
      {
        v15 = *(__int64 *)((char *)v12 + 76) - *(_QWORD *)&GUID_NETWORK_ADAPTER_CLASS.Data1;
        if ( !v15 )
          v15 = *(__int64 *)((char *)v12 + 84) - *(_QWORD *)GUID_NETWORK_ADAPTER_CLASS.Data4;
        if ( v15 )
        {
          v16 = *(__int64 *)((char *)v12 + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
          if ( !v16 )
            v16 = *(__int64 *)((char *)v12 + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
          if ( v16 )
            goto LABEL_45;
        }
      }
      v12 = (__int64 *)*v12;
    }
  }
  else
  {
LABEL_45:
    v13 = 1;
  }
  *(_BYTE *)(v0 + 80) = v13;
  v17 = 0;
  if ( v11 )
  {
    for ( i = *(__int64 **)v10; i != (__int64 *)v10; i = (__int64 *)*i )
    {
      if ( !*((_DWORD *)i + 4) )
      {
        v19 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v19 )
          v19 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( !v19 )
        {
          v17 = 1;
          break;
        }
      }
    }
  }
  *(_BYTE *)(v0 + 81) = v17;
  if ( v11 == 1 && *(_DWORD *)(*(_QWORD *)v10 + 16LL) == 4 )
    v1 = *(_DWORD *)(*(_QWORD *)v10 + 24LL) == 1;
  *(_BYTE *)(v0 + 82) = v1;
LABEL_59:
  PopWakeSourceWorkState = 4;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
}
