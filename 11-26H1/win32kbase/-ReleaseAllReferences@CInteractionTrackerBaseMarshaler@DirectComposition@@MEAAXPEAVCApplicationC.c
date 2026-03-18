/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14022AD30
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTracker2Marshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234BF0 (-ReleaseAllReferences@CInteractionTracker2Marshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402437B0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x14024426C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBaseMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerBaseMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v3; // rcx

  v3 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(v3, a2, *((_DWORD *)this + 8));
    *((_QWORD *)this + 9) = 0LL;
  }
}
