/*
 * XREFs of ??$EvaluatingShowWindowPolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEBI@Z @ 0x1804F3A38
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_561bdfa3023437196c4db234bebf1bd3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x1805043B0 (std--_Func_impl_no_alloc__lambda_561bdfa3023437196c4db234bebf1bd3__void_HWND_____un_ea_1805043B0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18000B264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::EvaluatingShowWindowPolicyForView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,unsigned int const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp-10h] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a3;
    v10 = *a4;
    v12 = *a2;
    v13 = *a1;
    v11 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_180815116,
                                            v9,
                                            v10,
                                            (__int64)&v13,
                                            &v12,
                                            &v11);
  }
  return result;
}
