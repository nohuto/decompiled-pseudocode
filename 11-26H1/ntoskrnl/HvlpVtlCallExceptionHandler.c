/*
 * XREFs of HvlpVtlCallExceptionHandler @ 0x1405BFCFC
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HvlpVtlCallExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
