/*
 * XREFs of ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x1800F9CD4
 * Callers:
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x1800FD07C (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800023F0 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FC4FC (-Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall TestCursorTraceLogging::CursorSuppressed<bool &>(char *a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // [rsp+48h] [rbp+10h] BYREF

  result = TestCursorTraceLogging::Provider();
  if ( *(_DWORD *)result > 4u )
  {
    v5 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                                            (__int64)result,
                                            (__int64)&unk_180217E39,
                                            v3,
                                            v4,
                                            (__int64)&v5);
  }
  return result;
}
