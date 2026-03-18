/*
 * XREFs of ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1801260E0
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333333333333@Z @ 0x180002A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTe.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x1801261F8 (-IsVailContainer@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x1801DA64C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame(
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r9d
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v8; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v9; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v10; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+138h] [rbp+8h] BYREF
  __int64 v13; // [rsp+140h] [rbp+10h] BYREF
  __int64 v14; // [rsp+148h] [rbp+18h] BYREF

  if ( IsVailContainer() )
  {
    v4 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 7u && tlgKeywordOn((__int64)v4, 0x10000LL) )
    {
      v13 = *((_QWORD *)a1 + 15);
      v6 = *((_QWORD *)a1 + 17);
      v14 = *((_QWORD *)a1 + 14);
      v12 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)&unk_1803AF8D8);
    }
  }
  else
  {
    v2 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v2 > 7u
      && (*((_DWORD *)v2 + 4) & 0x10000) != 0
      && (*((_QWORD *)v2 + 3) & 0x10000LL) == *((_QWORD *)v2 + 3) )
    {
      v12 = *((_QWORD *)a1 + 7);
      v13 = *((_QWORD *)a1 + 6);
      v14 = *((_QWORD *)a1 + 5);
      v7 = *((_QWORD *)a1 + 4);
      v8 = *((_QWORD *)a1 + 3);
      v9 = *((_QWORD *)a1 + 2);
      v10 = *((_QWORD *)a1 + 1);
      v11 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v2,
        (unsigned int)&unk_1803AF7E9,
        (_DWORD)v2,
        v3,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
