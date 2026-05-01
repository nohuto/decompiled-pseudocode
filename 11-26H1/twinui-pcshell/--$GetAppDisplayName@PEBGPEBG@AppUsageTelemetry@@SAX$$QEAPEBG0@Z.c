/*
 * XREFs of ??$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z @ 0x18056AFA4
 * Callers:
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18056D400 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801EA130 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802019DC (-Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::GetAppDisplayName<unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        const WCHAR **a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // rcx
  const WCHAR *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  const WCHAR *v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = AppUsageTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *a2;
      v9 = *a1;
      v11 = v7;
      v10 = 0x2000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v6,
                     byte_18081F9B8,
                     v5,
                     v6,
                     &v9,
                     &v11,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
