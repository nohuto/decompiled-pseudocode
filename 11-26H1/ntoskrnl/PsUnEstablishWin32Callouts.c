/*
 * XREFs of PsUnEstablishWin32Callouts @ 0x1407F68F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __noreturn PsUnEstablishWin32Callouts()
{
  KeBugCheckEx(0x1FCu, 0LL, 0LL, 0LL, 0LL);
}
