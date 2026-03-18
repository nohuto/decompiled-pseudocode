/*
 * XREFs of XmIllOp @ 0x140573DC0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1404F9210 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
