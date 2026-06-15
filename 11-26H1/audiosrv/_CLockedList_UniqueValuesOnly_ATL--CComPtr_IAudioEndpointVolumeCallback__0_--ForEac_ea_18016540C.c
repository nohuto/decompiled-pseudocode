/*
 * XREFs of _CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::ForEachEntry_::_1_::catch$8 @ 0x18016540C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::ForEachEntry_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xC7,
                           (int)"avcore\\audiocore\\Include\\LockedList.h",
                           a4);
  return 0LL;
}
