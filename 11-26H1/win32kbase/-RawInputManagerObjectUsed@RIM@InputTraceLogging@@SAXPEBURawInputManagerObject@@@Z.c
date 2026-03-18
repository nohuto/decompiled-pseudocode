/*
 * XREFs of ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x14005DE4C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_ @ 0x140196B20 (_lambda_c51e6e2186cc259f124bbf87b89b0c07_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1401856C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?RimObjTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401902E4 (-RimObjTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RawInputManagerObjectUsed(const struct RawInputManagerObject *a1)
{
  unsigned int v2; // ecx
  __int64 v3; // r8
  int v4; // r9d
  int v5; // [rsp+50h] [rbp-20h] BYREF
  const char *v6; // [rsp+58h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp-10h] BYREF
  int v8; // [rsp+88h] [rbp+18h] BYREF
  int v9; // [rsp+90h] [rbp+20h] BYREF
  int v10; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v2 = *((_DWORD *)a1 + 21);
    v8 = -(*((_DWORD *)a1 + 269) & 1);
    v9 = *((_DWORD *)a1 + 264);
    v10 = *((unsigned __int8 *)a1 + 81);
    v5 = *((unsigned __int8 *)a1 + 80);
    v6 = InputTraceLogging::RimObjTypeToString(v2);
    v7 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140284F0B,
      v3,
      v4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
