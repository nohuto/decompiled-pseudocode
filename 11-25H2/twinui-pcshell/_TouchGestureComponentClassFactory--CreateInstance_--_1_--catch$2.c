/*
 * XREFs of _TouchGestureComponentClassFactory::CreateInstance_::_1_::catch$2 @ 0x1806CEC2A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchGestureComponentClassFactory::CreateInstance_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0xE0,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
                           a4);
  return 0LL;
}
