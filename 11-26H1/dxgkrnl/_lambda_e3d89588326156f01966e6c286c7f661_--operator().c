/*
 * XREFs of _lambda_e3d89588326156f01966e6c286c7f661_::operator() @ 0x14008A82C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_e3d89588326156f01966e6c286c7f661____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A344 (_DXGKCALLONEXIT__lambda_e3d89588326156f01966e6c286c7f661____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140004378 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_U_ea_140004378.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x14008B3F8 (-Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 */

void __fastcall lambda_e3d89588326156f01966e6c286c7f661_::operator()(int **a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int *v4; // rax
  int v5; // ecx
  int *v6; // rax
  DISPLAY_MUX_DEVICE *v7; // rcx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v4 = a1[1];
    v10 = *(unsigned __int16 **)a1[2];
    v5 = *v4;
    v6 = *a1;
    v8 = v5;
    v9 = *v6;
    v11 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
      v9,
      (__int64)&unk_140144FB7,
      v2,
      v3,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v8,
      &v10);
  }
  if ( **a1 >= 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1243;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)*a1[1], **a1);
    v7 = (DISPLAY_MUX_DEVICE *)a1[3];
    WdLogGlobalForLineNumber = 1236;
    DISPLAY_MUX_DEVICE::Cleanup(v7);
  }
}
