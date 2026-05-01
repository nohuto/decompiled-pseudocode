/*
 * XREFs of ??$DisabledInterceptingOfEventsForView@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F3890
 * Callers:
 *     ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x180503354 (-SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::DisabledInterceptingOfEventsForView<HWND__ * &>(__int64 *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
                    (__int64)v2,
                    byte_180814DC9,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
