/*
 * XREFs of _lambda_0cf1f7547ea24b3f810b01f1b8e4dfad_::operator() @ 0x140277694
 * Callers:
 *     _DXGKCALLONEXIT__lambda_0cf1f7547ea24b3f810b01f1b8e4dfad____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A58 (_DXGKCALLONEXIT__lambda_0cf1f7547ea24b3f810b01f1b8e4dfad____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44344@Z @ 0x14000642C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

unsigned int *__fastcall lambda_0cf1f7547ea24b3f810b01f1b8e4dfad_::operator()(unsigned int **a1)
{
  __int64 v2; // r9
  unsigned int *v3; // r8
  unsigned int *v4; // rdx
  unsigned int *v5; // rax
  __int64 *v6; // r8
  unsigned int *result; // rax
  int v8; // [rsp+60h] [rbp+27h] BYREF
  __int64 v9; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v10[4]; // [rsp+70h] [rbp+37h] BYREF
  unsigned int v11; // [rsp+A0h] [rbp+67h] BYREF
  int v12; // [rsp+A8h] [rbp+6Fh] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+77h] BYREF
  int v14; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( !**a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 268;
  }
  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 0x400000001000LL) )
  {
    v3 = *a1;
    v4 = a1[3];
    v11 = (*a1)[1];
    v12 = *(_DWORD *)(*(_QWORD *)v4 + 32LL);
    v5 = a1[2];
    v9 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
    v13 = *v5;
    LODWORD(v5) = *v3;
    v6 = (__int64 *)a1[1];
    v14 = (int)v5;
    v8 = 1;
    v10[0] = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_140146599,
      *v6,
      v2,
      (__int64)v10,
      (__int64)&v8,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v9,
      (__int64)&v12,
      (__int64)&v11);
  }
  result = a1[2];
  if ( (*result & 0x80000000) != 0 )
  {
    DxgkLogCodePointPacket(0x7Cu, *result, **a1, (*a1)[1], *(_QWORD *)(*(_QWORD *)a1[3] + 24LL));
    result = (unsigned int *)WdLogSingleEntry2(2LL, **a1, (int)*a1[2]);
    WdLogGlobalForLineNumber = 289;
  }
  return result;
}
