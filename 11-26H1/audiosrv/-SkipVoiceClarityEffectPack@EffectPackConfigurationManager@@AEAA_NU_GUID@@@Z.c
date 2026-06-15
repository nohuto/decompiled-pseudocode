/*
 * XREFs of ?SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z @ 0x180103EA0
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x180103720 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x180103ADC (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800021D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

char __fastcall EffectPackConfigurationManager::SkipVoiceClarityEffectPack(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  _DWORD *v2; // rcx
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+54h] [rbp+Ch]
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v5 = HIDWORD(this);
  pvData = 0;
  pcbData = 4;
  if ( memcmp_0(a2, &CLSID_VOCAAudioEffectPackID, 0x10uLL)
    || RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"SkipVoiceClarity",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || !pvData )
  {
    return 0;
  }
  v2 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_1801A6D1C);
  return 1;
}
