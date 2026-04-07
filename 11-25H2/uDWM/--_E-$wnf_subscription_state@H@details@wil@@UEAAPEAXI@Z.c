/*
 * XREFs of ??_E?$wnf_subscription_state@H@details@wil@@UEAAPEAXI@Z @ 0x1800E2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x1800E26D8 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<int>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  wil::details::wnf_subscription_state<int>::~wnf_subscription_state<int>(a1);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}
