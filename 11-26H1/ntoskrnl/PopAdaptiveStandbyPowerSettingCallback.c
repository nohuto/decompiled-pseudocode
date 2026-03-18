/*
 * XREFs of PopAdaptiveStandbyPowerSettingCallback @ 0x1407E0230
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall PopAdaptiveStandbyPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  size_t v4; // rdi
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-41h] BYREF
  GUID *v17; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+50h] [rbp-29h] BYREF
  LPCGUID v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  unsigned int *v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]
  PVOID v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]

  v4 = ValueLength;
  v17 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v8 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v17 = (GUID *)v8;
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    LOWORD(v15) = v4;
    v24 = (unsigned __int16)v4;
    v21 = &v15;
    v19 = SettingGuid;
    v20 = 16LL;
    v22 = 2LL;
    v23 = Value;
    v25 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F8BB,
      &ActivityId,
      (const GUID *)v8,
      5u,
      v18);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v9, v10, v11);
  v12 = *(_QWORD *)&SettingGuid->Data1 - **(_QWORD **)Context;
  if ( *(_QWORD *)&SettingGuid->Data1 == **(_QWORD **)Context )
    v12 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)(*(_QWORD *)Context + 8LL);
  if ( v12 || (_DWORD)v4 != Context[3] )
  {
    v13 = -1073741811;
  }
  else
  {
    memmove(&PopAdaptiveStandbyContext[Context[2]], Value, v4);
    v13 = 0;
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    v19 = (LPCGUID)&v15;
    v15 = v13;
    v20 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)&dword_14004F8F4,
      &ActivityId,
      v17,
      3u,
      v18);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v17);
  return v13;
}
