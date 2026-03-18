/*
 * XREFs of XmIllOp @ 0x1405AE1A0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x140533940 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
