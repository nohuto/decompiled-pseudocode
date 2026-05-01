/*
 * XREFs of ??$ReleasingSecondaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F5670
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_294070f2d01ea5c5503dcfbd23d118bd__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x180504160 (std--_Func_impl_no_alloc__lambda_294070f2d01ea5c5503dcfbd23d118bd__void_HWND_____un_ea_180504160.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000B368 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_t.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::ReleasingSecondaryView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h] BYREF
  __int64 v14; // [rsp+90h] [rbp+1Fh] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v11 = *a7;
    v12 = *a3;
    v13 = *a2;
    v14 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_180814E93,
                                            v11,
                                            (__int64)a7,
                                            (__int64)&v14,
                                            &v13,
                                            &v12);
  }
  return result;
}
