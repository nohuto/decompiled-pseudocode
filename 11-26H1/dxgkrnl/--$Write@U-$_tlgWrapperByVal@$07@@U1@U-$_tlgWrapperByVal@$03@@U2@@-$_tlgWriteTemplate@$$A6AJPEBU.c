/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x14000688C
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74 (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x1402846EC (-LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140057178 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  __int64 v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  __int64 v16; // [rsp+88h] [rbp+27h]

  v15 = a7;
  v13 = a6;
  v11 = a5;
  v9 = a4;
  v16 = 4LL;
  v14 = 4LL;
  v12 = 8LL;
  v10 = 8LL;
  return tlgWriteAgg((int)&dword_1401665B8, a2, 0, 6, &v8);
}
