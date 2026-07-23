/*
 * XREFs of PopGetSettingNotificationName @ 0x1409F6CE4
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140424C54 (PsIsSessionInCurrentServerSilo.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     PopCreateNotificationName @ 0x1409F6A38 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1409F6BDC (PsIsServiceSession.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1409F6F44 (PopDiagTracePowerSettingRegistration.c)
 *     PopStateIsSessionSpecific @ 0x1409FA3A0 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 *     PopValidateContextMembership @ 0x140B41010 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, void *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v9; // rsi
  WNF_STATE_NAME v10; // rax
  int v11; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int SessionId; // eax
  unsigned int v16; // esi
  __int64 v17; // rax
  _WNF_STATE_NAME Src; // [rsp+40h] [rbp-38h] BYREF

  Src = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = qword_140E676F8;
    if ( qword_140E676F8 == __PAIR64__(qword_140E676F8.Data[0], 0) )
    {
      v11 = PopCreateNotificationName(&Src);
      if ( v11 < 0 )
        goto LABEL_12;
      qword_140E676F8 = Src;
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
        v11 = -1073741811;
        goto LABEL_16;
      }
      v6 = v16;
    }
    else
    {
      v11 = PopValidateContextMembership(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
      if ( v11 < 0 )
      {
        if ( !PsIsServiceSession(v16)
          || !PsIsSessionInCurrentServerSilo(v6)
          || (v11 = PopValidateContextMembership(SeExports->SeLocalServiceSid), v11 < 0) )
        {
LABEL_12:
          if ( v11 && v11 != -1073741275 )
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
  v9 = (_WNF_STATE_NAME *)PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      v11 = PopCreateNotificationName(&Src);
      if ( v11 < 0 )
        goto LABEL_12;
      v17 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v17 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v17 )
        v9[6].Data[1] |= 8u;
      v9[7] = Src;
      v9[6].Data[1] |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(WNF_STATE_NAME *)(PowerSettingConfiguration + 56);
LABEL_10:
    Src = v10;
LABEL_11:
    KeReleaseGuardedMutex(&PopSettingLock);
    v5 = 0;
    RtlCopyToUser(a2, &Src, 8uLL);
    v11 = 0;
    goto LABEL_12;
  }
  v11 = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v13) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v13);
  }
LABEL_16:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v3 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v11;
}
