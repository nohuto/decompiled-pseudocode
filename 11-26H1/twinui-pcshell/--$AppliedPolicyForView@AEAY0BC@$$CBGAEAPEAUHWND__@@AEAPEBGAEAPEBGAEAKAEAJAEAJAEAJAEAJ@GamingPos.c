/*
 * XREFs of ??$AppliedPolicyForView@AEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F2E04
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f2891c0172863061fab18253a66ceb0__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x1805041E0 (std--_Func_impl_no_alloc__lambda_2f2891c0172863061fab18253a66ceb0__void_HWND_____un_ea_1805041E0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000A9E4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::AppliedPolicyForView<unsigned short const (&)[18],HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v12; // r9
  unsigned int v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+90h] [rbp+17h] BYREF
  __int64 v16; // [rsp+98h] [rbp+1Fh] BYREF
  const wchar_t *v17; // [rsp+A0h] [rbp+27h] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v13 = *a8;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v17 = L"Alt-F4 disallowed";
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_1808149E1,
                                            v13,
                                            v12,
                                            &v17,
                                            (__int64)&v16,
                                            &v15,
                                            &v14);
  }
  return result;
}
