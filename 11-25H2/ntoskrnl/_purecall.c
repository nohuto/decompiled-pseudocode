/*
 * XREFs of _purecall @ 0x14064C5F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
