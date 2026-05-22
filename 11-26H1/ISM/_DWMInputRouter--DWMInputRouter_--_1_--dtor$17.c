/*
 * XREFs of _DWMInputRouter::DWMInputRouter_::_1_::dtor$17 @ 0x1801D5162
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::DWMInputRouter_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 96) + 352LL,
           a2);
}
