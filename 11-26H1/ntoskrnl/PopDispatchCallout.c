/*
 * XREFs of PopDispatchCallout @ 0x140B47520
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404EA9D8 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
