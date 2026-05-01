/*
 * XREFs of ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x18054C514
 * Callers:
 *     ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x18054C570 (-StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x18054C780 (-UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18020F390 (-Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall AppUsageTelemetry::StopUsageTracking(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = AppUsageTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v4 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        byte_1807E4557,
        0LL,
        v3,
        (__int64)&v4);
    }
  }
}
