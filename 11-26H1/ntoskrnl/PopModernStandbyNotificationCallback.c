/*
 * XREFs of PopModernStandbyNotificationCallback @ 0x1407E1D20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceModernStandbyStateNotification @ 0x1407D6998 (PopDiagTraceModernStandbyStateNotification.c)
 */

__int64 __fastcall PopModernStandbyNotificationCallback(
        __int64 SettingGuid,
        int *Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  int v4; // ebx
  bool v6; // bp
  unsigned int updated; // r12d
  int v8; // r15d
  int v10; // esi
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int Buffer; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Buffer = 0;
  v6 = 0;
  updated = 0;
  v8 = ValueLength;
  LOBYTE(v10) = -1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify, (__int64)Value, ValueLength, Context);
  v11 = *(_QWORD *)SettingGuid;
  v12 = dword_140F0C210;
  v13 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *(_QWORD *)SettingGuid;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *(_QWORD *)SettingGuid )
    v13 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)(SettingGuid + 8);
  if ( !v13 && v8 == 4 && Value )
  {
    v14 = 3;
LABEL_13:
    v10 = *Value;
    v6 = *Value != 0;
    goto LABEL_30;
  }
  v15 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - v11;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == v11 )
    v15 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)(SettingGuid + 8);
  if ( !v15 && v8 == 4 && Value )
  {
    v14 = 2;
    goto LABEL_13;
  }
  v16 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v11;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v11 )
    v16 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)(SettingGuid + 8);
  if ( !v16 && v8 == 4 && Value )
  {
    v10 = *Value;
    dword_140F0C214 = *Value;
  }
  else
  {
    v17 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v11;
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v11 )
      v17 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - *(_QWORD *)(SettingGuid + 8);
    if ( v17 || v8 != 4 || !Value )
    {
      updated = -1073741637;
      goto LABEL_36;
    }
    v10 = *Value;
    dword_140F0C218 = *Value;
  }
  if ( !dword_140F0C214 && dword_140F0C218 == 2 )
    v6 = 1;
  v14 = 1;
LABEL_30:
  if ( v6 )
  {
    if ( v14 <= dword_140F0C210 )
      goto LABEL_36;
    goto LABEL_34;
  }
  if ( --v14 < dword_140F0C210 )
  {
LABEL_34:
    dword_140F0C210 = v14;
    BYTE1(Buffer) = v14;
    updated = ZwUpdateWnfStateData(&WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v4 = 1;
  }
LABEL_36:
  PopDiagTraceModernStandbyStateNotification(v12, dword_140F0C210, v4, v6, SettingGuid, v10);
  PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify);
  return updated;
}
