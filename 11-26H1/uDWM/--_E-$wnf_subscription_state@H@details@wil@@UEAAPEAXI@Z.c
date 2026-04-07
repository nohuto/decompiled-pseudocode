/*
 * XREFs of ??_E?$wnf_subscription_state@H@details@wil@@UEAAPEAXI@Z @ 0x1800DF820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x1800DF414 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<int>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  wil::details::wnf_subscription_state<int>::~wnf_subscription_state<int>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
