/*
 * XREFs of ZwAlpcImpersonateClientContainerOfPort @ 0x1407244D0
 * Callers:
 *     DifZwAlpcImpersonateClientContainerOfPortWrapper @ 0x14069B170 (DifZwAlpcImpersonateClientContainerOfPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcImpersonateClientContainerOfPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
