/*
 * XREFs of PopGetSettingNotificationName @ 0x140A3B2C4
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140435678 (PsIsSessionInCurrentServerSilo.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     PopCreateNotificationName @ 0x140A3AE38 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x140A3B080 (PsIsServiceSession.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A3B524 (PopDiagTracePowerSettingRegistration.c)
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 *     PopValidateContextMembership @ 0x140B3EFE0 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, void *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  NTSTATUS NotificationName; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int SessionId; // eax
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned __int64 Src; // [rsp+40h] [rbp-38h] BYREF

  Src = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = stru_140E66FF0.Padding[2];
    if ( stru_140E66FF0.Padding[2] == __PAIR64__(stru_140E66FF0.Padding[2], 0) )
    {
      NotificationName = PopCreateNotificationName((__int64)&Src);
      if ( NotificationName < 0 )
        goto LABEL_12;
      stru_140E66FF0.Padding[2] = Src;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
  {
    SessionId = TtmiGetSessionId();
    v16 = SessionId;
    if ( v6 == -1 || v6 == SessionId )
    {
      if ( SessionId == -1 || PsIsServiceSession(SessionId) )
      {
        NotificationName = -1073741811;
        goto LABEL_16;
      }
      v6 = v16;
    }
    else
    {
      NotificationName = PopValidateContextMembership(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags);
      if ( NotificationName < 0 )
      {
        if ( !PsIsServiceSession(v16)
          || !PsIsSessionInCurrentServerSilo(v6)
          || (NotificationName = PopValidateContextMembership(SeExports->SeLocalServiceSid), NotificationName < 0) )
        {
LABEL_12:
          if ( NotificationName && NotificationName != -1073741275 )
            goto LABEL_16;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v6 = -1;
  }
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, v6);
  v9 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      NotificationName = PopCreateNotificationName((__int64)&Src);
      if ( NotificationName < 0 )
        goto LABEL_12;
      v17 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v17 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v17 )
        *(_DWORD *)(v9 + 52) |= 8u;
      *(_QWORD *)(v9 + 56) = Src;
      *(_DWORD *)(v9 + 52) |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(PowerSettingConfiguration + 56);
LABEL_10:
    Src = v10;
LABEL_11:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
    v5 = 0;
    RtlCopyToUser(a2, &Src, 8uLL);
    NotificationName = 0;
    goto LABEL_12;
  }
  NotificationName = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v13) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v13);
  }
LABEL_16:
  if ( v5 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  if ( v3 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)NotificationName;
}
