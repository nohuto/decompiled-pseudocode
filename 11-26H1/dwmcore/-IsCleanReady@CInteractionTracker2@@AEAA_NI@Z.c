/*
 * XREFs of ?IsCleanReady@CInteractionTracker2@@AEAA_NI@Z @ 0x180274020
 * Callers:
 *     ?ReadyToUpdateBindings@CInteractionTrackerBindingManager@@AEBA_NXZ @ 0x18027889C (-ReadyToUpdateBindings@CInteractionTrackerBindingManager@@AEBA_NXZ.c)
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18000394C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?IsPositionAnimationCleanReady@CInteractionTracker2@@AEAA_NXZ @ 0x180274220 (-IsPositionAnimationCleanReady@CInteractionTracker2@@AEAA_NXZ.c)
 *     ?IsScaleAnimationCleanReady@CInteractionTracker2@@AEAA_NXZ @ 0x1802742FC (-IsScaleAnimationCleanReady@CInteractionTracker2@@AEAA_NXZ.c)
 */

char __fastcall CInteractionTracker2::IsCleanReady(CInteractionTracker2 *this, unsigned int a2)
{
  char v2; // bl
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rcx

  v2 = 0;
  if ( dword_1803DC880 && tlgKeywordOn((__int64)&dword_1803DC880, 0x400000000002LL) && v6 > 4 && tlgKeywordOn(v5, 2LL) )
  {
    CInteractionTracker2::IsPositionAnimationCleanReady(this);
    CInteractionTracker2::IsScaleAnimationCleanReady(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_1803B4398);
  }
  if ( (*((_BYTE *)this + 829) & 0x10) != 0
    || *((_DWORD *)this + 226) >= a2
    && CInteractionTracker2::IsScaleAnimationCleanReady(this)
    && CInteractionTracker2::IsPositionAnimationCleanReady(this) )
  {
    return 1;
  }
  return v2;
}
