/*
 * XREFs of ZwManageWobTicket @ 0x140725770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageWobTicket(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
