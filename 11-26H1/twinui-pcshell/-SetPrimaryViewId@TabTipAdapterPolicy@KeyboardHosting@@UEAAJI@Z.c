/*
 * XREFs of ?SetPrimaryViewId@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z @ 0x180470380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SetPrimaryViewId(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2)
{
  *((_DWORD *)this + 226) = a2;
  return 0LL;
}
