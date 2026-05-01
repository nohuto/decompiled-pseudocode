/*
 * XREFs of ??$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z @ 0x180476BF8
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800B287C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted<unsigned int,bool &,unsigned int>(
        int *a1,
        char *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  char v7; // dl
  int v8; // r8d
  char v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  int v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  int *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  char *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v6 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = *a3;
    v12 = *a1;
    v18 = &v11;
    v16 = &v10;
    v14 = &v12;
    v11 = v8;
    v10 = v7;
    v19 = 4LL;
    v17 = 1LL;
    v15 = 4LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer((__int64)v6, byte_18080C6D1, 0LL, 0LL, 5u, &v13);
  }
  return (int)v6;
}
