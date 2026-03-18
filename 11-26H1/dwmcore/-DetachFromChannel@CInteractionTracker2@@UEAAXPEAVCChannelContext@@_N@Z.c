/*
 * XREFs of ?DetachFromChannel@CInteractionTracker2@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802730B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 */

void __fastcall CInteractionTracker2::DetachFromChannel(
        CInteractionTrackerBindingManager **this,
        struct CChannelContext *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CInteractionTrackerBindingManager *v7; // rcx
  CInteractionTracker2 *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v8 = (CInteractionTracker2 *)this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v4,
      byte_1803B4726,
      v5,
      v6,
      (__int64)&v8);
  }
  *((_BYTE *)this + 829) |= 0x10u;
  v7 = this[131];
  if ( !v7 )
    v7 = (CInteractionTrackerBindingManager *)*((_QWORD *)this[7] + 13);
  CInteractionTrackerBindingManager::ScheduleCleanup(v7, (struct CInteractionTracker2 *)this);
  CNotificationResource::DetachFromChannel((CNotificationResource *)this, a2);
}
