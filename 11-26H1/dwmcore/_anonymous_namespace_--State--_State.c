/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x18022FB64
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___ @ 0x18022FA48 (std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__anonymous_namespace_--F.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop @ 0x18022FC0C (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Stop.c)
 */

__int64 __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop(a1 + 16);
  std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___((_QWORD *)(a1 + 40));
  return std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))a1);
}
