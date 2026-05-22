/*
 * XREFs of ?LogOnPrimaryClickZoneChanging@BamoVirtualTouchpadControllerProxy@@AEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x1801382D8
 * Callers:
 *     ?UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x180139B90 (-UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClic.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoVirtualTouchpadControllerProxy::LogOnPrimaryClickZoneChanging(
        BamoVirtualTouchpadControllerProxy *this,
        const struct Windows::UI::Internal::Input::PhysicalClickZone *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v5) = *(_DWORD *)(v3 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_1802209C6,
      v3,
      v4,
      (__int64)&v5);
  }
}
