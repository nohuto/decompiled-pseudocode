/*
 * XREFs of ?LogBoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x1802743D8
 * Callers:
 *     ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC (-BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D594C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall CInteractionTracker2::LogBoostCompositorClock(CInteractionTracker2 *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  CInteractionTracker2 *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    LODWORD(v4) = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v1,
      byte_1803B4773,
      v2,
      v3,
      (__int64)&v4);
  }
}
