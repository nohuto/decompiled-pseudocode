/*
 * XREFs of _CWindowList::SwitchDesktop_::_1_::catch$2 @ 0x1800E9C2B
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop_::_1_::catch_2(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x1D7Eu, 0LL);
  return 0LL;
}
