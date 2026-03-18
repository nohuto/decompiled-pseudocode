/*
 * XREFs of PsUnEstablishWin32Callouts @ 0x1407F0D90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __noreturn PsUnEstablishWin32Callouts()
{
  KeBugCheckEx(0x1FCu, 0LL, 0LL, 0LL, 0LL);
}
