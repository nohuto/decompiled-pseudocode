/*
 * XREFs of ??$InterceptedFullScreenRequestForView@_NAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAK@GamingPosturePositionerTelemetryProvider@@SAX$$QEA_NAEAPEAUHWND__@@AEAPEBG2AEAK@Z @ 0x1804F4474
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_538dc53c5a64dc697150150b18586b98__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180504350 (std--_Func_impl_no_alloc__lambda_538dc53c5a64dc697150150b18586b98__void_HWND_____un_ea_180504350.c)
 *     std::_Func_impl_no_alloc__lambda_9b3f8c876ddd452bac31993927a76fa4__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x1805045C0 (std--_Func_impl_no_alloc__lambda_9b3f8c876ddd452bac31993927a76fa4__void_HWND_____un_ea_1805045C0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000AB54 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByV.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::InterceptedFullScreenRequestForView<bool,HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &>(
        _BYTE *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r11d
  _BYTE v13[4]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v10 = *a4;
    v11 = *a3;
    v17 = *a2;
    v12 = *a5;
    v13[0] = *a1;
    v14 = v12;
    v15 = v10;
    v16 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_180815329,
                                            v11,
                                            v10,
                                            (__int64)v13,
                                            (__int64)&v17,
                                            &v16,
                                            &v15);
  }
  return result;
}
