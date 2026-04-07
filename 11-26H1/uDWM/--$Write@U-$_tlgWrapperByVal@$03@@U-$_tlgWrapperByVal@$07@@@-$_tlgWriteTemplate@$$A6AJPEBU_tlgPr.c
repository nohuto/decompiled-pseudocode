/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004154C
 * Callers:
 *     ??$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAEAW4WindowAnimationType@CTopLevelWindow3D@@@Z @ 0x180041414 (--$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAE.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800415C4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[5] = 4LL;
  v7[7] = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 4, (__int64)v7);
}
