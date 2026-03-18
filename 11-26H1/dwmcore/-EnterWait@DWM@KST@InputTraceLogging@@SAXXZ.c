/*
 * XREFs of ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18015079C
 * Callers:
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180150618 (-Run@CKstBase@@AEAAKXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void InputTraceLogging::KST::DWM::EnterWait(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 4u && (*((_BYTE *)v0 + 16) & 2) != 0 && (*((_QWORD *)v0 + 3) & 2LL) == *((_QWORD *)v0 + 3) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      (__int64)&unk_1803B6B69);
}
