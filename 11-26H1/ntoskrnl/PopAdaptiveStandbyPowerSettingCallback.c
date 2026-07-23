/*
 * XREFs of PopAdaptiveStandbyPowerSettingCallback @ 0x1407E4C70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopAdaptiveStandbyUpdateRegions @ 0x1407E5F5C (PopAdaptiveStandbyUpdateRegions.c)
 */

__int64 __fastcall PopAdaptiveStandbyPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  size_t v4; // rsi
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-41h] BYREF
  GUID *v16; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+50h] [rbp-29h] BYREF
  LPCGUID v18; // [rsp+70h] [rbp-9h]
  __int64 v19; // [rsp+78h] [rbp-1h]
  unsigned int *v20; // [rsp+80h] [rbp+7h]
  __int64 v21; // [rsp+88h] [rbp+Fh]
  PVOID v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]

  v4 = ValueLength;
  v16 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v8 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v16 = (GUID *)v8;
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    LOWORD(v14) = v4;
    v23 = (unsigned __int16)v4;
    v20 = &v14;
    v18 = SettingGuid;
    v19 = 16LL;
    v21 = 2LL;
    v22 = Value;
    v24 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)byte_14004FA9B,
      &ActivityId,
      (const GUID *)v8,
      5u,
      v17);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v9, v10, v11);
  if ( *(_QWORD *)&SettingGuid->Data1 == **(_QWORD **)Context
    && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)(*(_QWORD *)Context + 8LL)
    && (_DWORD)v4 == Context[3] )
  {
    memmove(&PopAdaptiveStandbyContext[Context[2]], Value, v4);
    v12 = 0;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      PopAdaptiveStandbyUpdateRegions(&xmmword_140F0BAE4);
  }
  else
  {
    v12 = -1073741811;
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v18 = (LPCGUID)&v14;
    v14 = v12;
    v19 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&dword_14004FAD4,
      &ActivityId,
      v16,
      3u,
      v17);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v16);
  return v12;
}
