/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180474E80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(RTL_SRWLOCK *this, int a2, char *a3)
{
  *a3 = KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(this - 2, a2);
  return 0LL;
}
