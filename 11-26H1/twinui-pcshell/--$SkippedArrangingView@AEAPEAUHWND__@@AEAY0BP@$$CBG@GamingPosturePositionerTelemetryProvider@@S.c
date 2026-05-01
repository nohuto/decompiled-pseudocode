/*
 * XREFs of ??$SkippedArrangingView@AEAPEAUHWND__@@AEAY0BP@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAY0BP@$$CBG@Z @ 0x1804F6300
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F8EF4 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800055EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::SkippedArrangingView<HWND__ * &,unsigned short const (&)[31]>(
        __int64 *a1,
        const wchar_t *a2)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  const wchar_t *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v6 = L"Already full screen borderless";
    v7 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
                                            (__int64)result,
                                            (__int64)&unk_180814644,
                                            v4,
                                            v5,
                                            (__int64)&v7,
                                            &v6);
  }
  return result;
}
