/*
 * XREFs of XmHltOp @ 0x1405734D0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1404F9210 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
