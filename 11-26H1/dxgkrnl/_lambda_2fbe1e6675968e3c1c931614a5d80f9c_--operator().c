/*
 * XREFs of _lambda_2fbe1e6675968e3c1c931614a5d80f9c_::operator() @ 0x1402777EC
 * Callers:
 *     _DXGKCALLONEXIT__lambda_2fbe1e6675968e3c1c931614a5d80f9c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A74 (_DXGKCALLONEXIT__lambda_2fbe1e6675968e3c1c931614a5d80f9c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@444AEBU_tlgWrapperBinary@@@Z @ 0x1400064F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x140277E80 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

int *__fastcall lambda_2fbe1e6675968e3c1c931614a5d80f9c_::operator()(__int64 a1)
{
  __int128 **v1; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int *v5; // rax
  int *result; // rax
  __int64 v7; // rcx
  DxgMonitor::MonitorUsb4State *v8; // rcx
  int v9; // [rsp+60h] [rbp+7h] BYREF
  int v10; // [rsp+64h] [rbp+Bh] BYREF
  int v11; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v12; // [rsp+6Ch] [rbp+13h] BYREF
  int v13; // [rsp+70h] [rbp+17h] BYREF
  __int128 *v14; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+27h] BYREF
  __int64 v16; // [rsp+88h] [rbp+2Fh] BYREF
  __int16 v17; // [rsp+90h] [rbp+37h]
  __int128 v18; // [rsp+98h] [rbp+3Fh] BYREF

  v1 = *(__int128 ***)a1;
  v18 = 0LL;
  if ( *v1 )
    v18 = **v1;
  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 0x400000001000LL) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v17 = v3;
    v16 = v4 + 20;
    v9 = *(_DWORD *)(v4 + 16);
    v10 = *(_DWORD *)(v4 + 12);
    LODWORD(v4) = **(_DWORD **)(a1 + 16);
    v14 = &v18;
    v5 = *(unsigned int **)(a1 + 8);
    v11 = v4;
    v12 = *v5;
    v13 = 1;
    v15 = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v12,
      (__int64)&unk_140146446,
      (__int64)&v18,
      v3,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12,
      (__int64 *)&v14,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      &v16);
  }
  result = *(int **)(a1 + 8);
  v7 = *result;
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry2(2LL, **(unsigned int **)(a1 + 16), v7);
    v8 = *(DxgMonitor::MonitorUsb4State **)(a1 + 24);
    WdLogGlobalForLineNumber = 1029;
    DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v8, 0);
    result = *(int **)(a1 + 24);
    *((_BYTE *)result + 8) = 0;
  }
  return result;
}
