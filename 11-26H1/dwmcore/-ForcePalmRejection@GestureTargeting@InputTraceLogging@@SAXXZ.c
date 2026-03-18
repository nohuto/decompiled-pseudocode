/*
 * XREFs of ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x1801D6B5C
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180028970 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void InputTraceLogging::GestureTargeting::ForcePalmRejection(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 4u
    && (*((_DWORD *)v0 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x800LL) == *((_QWORD *)v0 + 3) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      (__int64)&unk_1803B265C);
  }
}
