/*
 * XREFs of ?SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z @ 0x140180394
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1401993CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall InputTraceLogging::Win32k::SetInputDelegationMode(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+44h] [rbp-14h] BYREF
  int v7; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v8[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 )
  {
    result = qword_1402A9E58 & 2;
    if ( result == qword_1402A9E58 )
    {
      v6 = a2;
      v7 = a1;
      v5 = a3;
      v8[0] = a4;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               (unsigned int)&dword_1402A9E40,
               (unsigned int)&unk_14028B7E3,
               a3,
               a4,
               (__int64)v8,
               (__int64)&v7,
               (__int64)&v6,
               (__int64)&v5);
    }
  }
  return result;
}
