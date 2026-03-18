/*
 * XREFs of _purecall @ 0x1406D0F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
