/*
 * XREFs of PopDispatchCallout @ 0x140B49550
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404E3D88 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
