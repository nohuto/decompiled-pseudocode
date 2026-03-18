/*
 * XREFs of PopModernStandbyNotificationCallback @ 0x1407DD6F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceModernStandbyStateNotification @ 0x1407D3818 (PopDiagTraceModernStandbyStateNotification.c)
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
  int Blink; // r13d
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  v19 = 0;
  v6 = 0;
  updated = 0;
  v8 = ValueLength;
  LOBYTE(v10) = -1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify, (__int64)Value, ValueLength, Context);
  v11 = *(_QWORD *)SettingGuid;
  Blink = (int)PopModernStandbyStateNotify.Header.WaitListHead.Blink;
  v13 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *(_QWORD *)SettingGuid;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *(_QWORD *)SettingGuid )
    v13 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)(SettingGuid + 8);
  if ( !v13 && v8 == 4 && Value )
  {
    v14 = 3;
LABEL_13:
    v10 = *Value;
    v6 = *Value != 0;
    goto LABEL_29;
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
    HIDWORD(PopModernStandbyStateNotify.Header.WaitListHead.Blink) = *Value;
  }
  else
  {
    v17 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v11;
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v11 )
      v17 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - *(_QWORD *)(SettingGuid + 8);
    if ( v17 || v8 != 4 || !Value )
    {
      updated = -1073741637;
      goto LABEL_35;
    }
    v10 = *Value;
    LODWORD(PopModernStandbyStateNotify.SListFaultAddress) = *Value;
  }
  if ( *(struct _LIST_ENTRY **)((char *)&PopModernStandbyStateNotify.Header.WaitListHead.Blink + 4) == (struct _LIST_ENTRY *)0x200000000LL )
    v6 = 1;
  v14 = 1;
LABEL_29:
  if ( v6 )
  {
    if ( v14 <= SLODWORD(PopModernStandbyStateNotify.Header.WaitListHead.Blink) )
      goto LABEL_35;
    goto LABEL_33;
  }
  if ( --v14 < SLODWORD(PopModernStandbyStateNotify.Header.WaitListHead.Blink) )
  {
LABEL_33:
    LODWORD(PopModernStandbyStateNotify.Header.WaitListHead.Blink) = v14;
    BYTE1(v19) = v14;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION, (__int64)&v19);
    v4 = 1;
  }
LABEL_35:
  PopDiagTraceModernStandbyStateNotification(
    Blink,
    (int)PopModernStandbyStateNotify.Header.WaitListHead.Blink,
    v4,
    v6,
    SettingGuid,
    v10);
  PopReleaseRwLock(&PopModernStandbyStateNotify);
  return updated;
}
