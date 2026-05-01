/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000F1E4
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch$5 @ 0x180043A0D (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterGameConfig_--_1_--catch$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch$33 @ 0x180043ACA (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--catch$33.c)
 *     _DoWorkOnGameConfigStore_::_1_::catch$3 @ 0x180043C08 (_DoWorkOnGameConfigStore_--_1_--catch$3.c)
 *     _GetStringPropertyFromGameConfigStore_::_1_::catch$1 @ 0x180043C6E (_GetStringPropertyFromGameConfigStore_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18000C2F8 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr);
}
