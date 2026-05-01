/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180370DFC
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$0A@@@IEAA@XZ @ 0x18037194C (--1-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_P_ea_18037194C.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

ULONG __fastcall _tlgWriteActivityAutoStop<0,0>(_DWORD *a1, const GUID *a2)
{
  ULONG result; // eax

  if ( *a1 )
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
             (__int64)a1,
             byte_1807F0643,
             a2);
  return result;
}
