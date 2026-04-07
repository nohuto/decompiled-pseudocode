/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DE07C
 * Callers:
 *     _CWindowList::MoveSize_::_1_::catch$1 @ 0x1800E71F0 (_CWindowList--MoveSize_--_1_--catch$1.c)
 *     _CWindowList::ForceUpdateScene_::_1_::catch$3 @ 0x1800E72D0 (_CWindowList--ForceUpdateScene_--_1_--catch$3.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$23 @ 0x1800E7E5D (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--catch$23.c)
 *     _CWindowList::_CWindowList_::_1_::catch$22 @ 0x1800E9B39 (_CWindowList--_CWindowList_--_1_--catch$22.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800DDEBC (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
