/*
 * XREFs of XmHltOp @ 0x1405B00D0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
