/*
 * XREFs of ACPIPepPowerSettingChangeCallback @ 0x1400CD590
 * Callers:
 *     <none>
 * Callees:
 *     PepPromoteNextNotificationState @ 0x1400CD6FC (PepPromoteNextNotificationState.c)
 *     ACPIPepQueueWorker @ 0x1400CD730 (ACPIPepQueueWorker.c)
 */

__int64 __fastcall ACPIPepPowerSettingChangeCallback(__int64 *a1, _DWORD *a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = a4 + 160;
  ExAcquireFastMutex((PFAST_MUTEX)(a4 + 184));
  v10 = *a1;
  v11 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *a1;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *a1 )
    v11 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - a1[1];
  if ( !v11 && a3 == 4 && a2 )
  {
    v12 = 3LL;
LABEL_7:
    LOBYTE(v9) = *a2 != 0;
    goto LABEL_8;
  }
  v14 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - v10;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == v10 )
    v14 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v14 && a3 == 4 && a2 )
  {
    v12 = 2LL;
    goto LABEL_7;
  }
  v15 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v10;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v10 )
    v15 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  if ( !v15 && a3 == 4 && a2 )
  {
    *(_DWORD *)(v4 + 124) = *a2;
  }
  else
  {
    v16 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v10;
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v10 )
      v16 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - a1[1];
    if ( !v16 && a3 == 4 && a2 )
      *(_DWORD *)(v4 + 128) = *a2;
  }
  if ( *(_DWORD *)(v4 + 124) || (LOBYTE(v9) = 1, *(_DWORD *)(v4 + 128) != 2) )
    LOBYTE(v9) = 0;
  v12 = 1LL;
LABEL_8:
  if ( (unsigned __int8)PepPromoteNextNotificationState(a4, v12, v9) )
    ACPIPepQueueWorker(v4);
  ExReleaseFastMutex((PFAST_MUTEX)(v4 + 24));
  return 0LL;
}
