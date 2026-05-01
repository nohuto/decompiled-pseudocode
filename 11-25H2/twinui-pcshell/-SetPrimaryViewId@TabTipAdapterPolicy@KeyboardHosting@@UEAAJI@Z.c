/*
 * XREFs of ?SetPrimaryViewId@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z @ 0x180464690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SetPrimaryViewId(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2)
{
  *((_DWORD *)this + 160) = a2;
  return 0LL;
}
