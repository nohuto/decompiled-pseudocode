/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E1280
 * Callers:
 *     _CWindowList::ForceUpdateScene_::_1_::catch$1 @ 0x1800EB3B0 (_CWindowList--ForceUpdateScene_--_1_--catch$1.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$5 @ 0x1800EDA07 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--catch$5.c)
 *     _CWindowList::_CWindowList_::_1_::catch$22 @ 0x1800EDBA4 (_CWindowList--_CWindowList_--_1_--catch$22.c)
 *     _CWindowList::MoveSize_::_1_::catch$1 @ 0x1800EDC1A (_CWindowList--MoveSize_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E0F5C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
