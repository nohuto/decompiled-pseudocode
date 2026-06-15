/*
 * XREFs of _CConnectorProcessingModeCharacteristics::AddConnectorFormat_::_1_::catch$5 @ 0x18016458A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xF7,
                           (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                           a4);
  return 0LL;
}
