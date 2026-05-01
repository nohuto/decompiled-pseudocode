/*
 * XREFs of ?GetLastShowApprovedViewRect@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x18046E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetLastShowApprovedViewRect(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Rect *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 888);
  return result;
}
