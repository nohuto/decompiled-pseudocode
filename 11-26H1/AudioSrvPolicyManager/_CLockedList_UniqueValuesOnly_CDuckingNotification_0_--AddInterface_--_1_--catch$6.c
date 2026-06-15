/*
 * XREFs of _CLockedList_UniqueValuesOnly_CDuckingNotification_0_::AddInterface_::_1_::catch$6 @ 0x18004D080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_UniqueValuesOnly_CDuckingNotification_0_::AddInterface_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x85,
                           (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
                           a4);
  return 0LL;
}
