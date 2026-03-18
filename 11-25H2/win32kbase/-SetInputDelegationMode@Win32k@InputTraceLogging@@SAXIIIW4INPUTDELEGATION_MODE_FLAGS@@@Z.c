/*
 * XREFs of ?SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z @ 0x140215C3C
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140008CF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Win32k::SetInputDelegationMode()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  int v3; // r11d
  int v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+44h] [rbp-14h] BYREF
  int v6; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v7[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 2LL) )
  {
    v4 = v0;
    v5 = v2;
    v6 = v3;
    v7[0] = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_1402811E7,
      v0,
      v1,
      (__int64)v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
