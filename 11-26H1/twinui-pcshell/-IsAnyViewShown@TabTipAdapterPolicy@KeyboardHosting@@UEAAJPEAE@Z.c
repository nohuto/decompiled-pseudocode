/*
 * XREFs of ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x1801C5860
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnyViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1801C5884 (-IsAnyViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  *a2 = KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShownInternal((KeyboardHosting::TabTipAdapterPolicy *)((char *)this - 16));
  return 0LL;
}
