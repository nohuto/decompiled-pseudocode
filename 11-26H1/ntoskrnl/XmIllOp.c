/*
 * XREFs of XmIllOp @ 0x1405B09B0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
