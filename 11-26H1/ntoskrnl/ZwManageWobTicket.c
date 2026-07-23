/*
 * XREFs of ZwManageWobTicket @ 0x14072A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageWobTicket(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
