/*
 * XREFs of ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x14037F10C
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401D500C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x14037E398 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1402FAD94 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

unsigned __int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::Stop(
        DripsBlockerTrackingHelper::TimeInterval *this)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)this )
  {
    result = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 1));
    *((_QWORD *)this + 2) += result;
    *(_BYTE *)this = 0;
  }
  return result;
}
