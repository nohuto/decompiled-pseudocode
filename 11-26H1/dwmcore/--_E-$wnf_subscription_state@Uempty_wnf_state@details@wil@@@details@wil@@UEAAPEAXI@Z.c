/*
 * XREFs of ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x18022A450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x180229B2C (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
