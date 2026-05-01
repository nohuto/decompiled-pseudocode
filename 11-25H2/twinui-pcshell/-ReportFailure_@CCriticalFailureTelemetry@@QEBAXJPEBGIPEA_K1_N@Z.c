/*
 * XREFs of ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x18065472C
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180010114 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapper.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x180654C50 (-get@-$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AX.c)
 */

void __fastcall CCriticalFailureTelemetry::ReportFailure_(
        CCriticalFailureTelemetry *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  __int64 v18; // [rsp+80h] [rbp+27h]
  const unsigned __int16 *v19; // [rsp+88h] [rbp+2Fh] BYREF

  v8 = wil::details::static_lazy<CCriticalFailureLogging>::get(
         this,
         _lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 5u )
  {
    v9 = tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x200000000000LL);
    v13 = 0LL;
    if ( v9 )
    {
      v16 = 0x1000000LL;
      if ( a6 )
        v14 = *a6;
      else
        v14 = 0LL;
      v17 = v14;
      if ( a5 )
        v13 = *a5;
      v18 = v13;
      v19 = a3;
      v15 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v12,
        (__int64)&unk_1807F0165,
        v10,
        v11,
        (__int64)&v15,
        &v19);
    }
  }
}
