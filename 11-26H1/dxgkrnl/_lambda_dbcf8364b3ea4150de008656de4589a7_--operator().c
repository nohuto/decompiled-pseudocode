/*
 * XREFs of _lambda_dbcf8364b3ea4150de008656de4589a7_::operator() @ 0x14008A7B0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A328 (_DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140004508 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void lambda_dbcf8364b3ea4150de008656de4589a7_::operator()()
{
  __int64 v0; // r8
  __int64 v1; // r9
  unsigned int *v2; // rax
  unsigned int v3; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1401665B8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
    {
      v2 = *(unsigned int **)v1;
      v4 = **(unsigned __int16 ***)(v1 + 8);
      v3 = *v2;
      v5 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v3,
        (__int64)&unk_140144817,
        v0,
        v1,
        (__int64)&v5,
        (__int64)&v3,
        &v4);
    }
  }
}
