/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::catch$7 @ 0x1801665F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::catch_7(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x77,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
