/*
 * XREFs of ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x14002F13C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x14002F240 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x14002F2A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrame(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // r10d
  __int64 v8; // r9
  int v9; // r8d
  int v10; // [rsp+60h] [rbp+27h] BYREF
  int v11; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v12; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+37h] BYREF
  __int64 v14; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+47h] BYREF
  int v16; // [rsp+A8h] [rbp+6Fh] BYREF
  int v17; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v3 = InputTraceLogging::CompletionReasonToString(a3);
    v5 = *(_QWORD *)(v4 + 448);
    v12 = v3;
    v16 = *(unsigned __int16 *)(v5 + 18);
    v17 = *(unsigned __int16 *)(v5 + 16);
    v10 = *(_DWORD *)(v6 + 196);
    v13 = *(_QWORD *)(v6 + 48);
    v11 = v7;
    v14 = v8;
    v15 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027BFCA,
      v9,
      v8,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v12);
  }
}
