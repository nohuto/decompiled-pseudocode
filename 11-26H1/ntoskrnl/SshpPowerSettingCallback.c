/*
 * XREFs of SshpPowerSettingCallback @ 0x140B1F180
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetCollectionActive @ 0x1404A2B28 (SshpSetCollectionActive.c)
 */

__int64 __fastcall SshpPowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  char v5; // bl

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v4 )
  {
    v5 = *Value != 0;
    if ( v5 != LOBYTE(PsAltSystemCallRegistrationLock.WpsFeedback) )
    {
      SshpSetCollectionActive(&SshpBlockerCollections, *Value != 0);
      LOBYTE(PsAltSystemCallRegistrationLock.WpsFeedback) = v5;
    }
  }
  return 0LL;
}
