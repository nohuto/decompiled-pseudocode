/*
 * XREFs of Lanczos::Sinc @ 0x18025B954
 * Callers:
 *     Lanczos::Lanczos @ 0x18025B8EC (Lanczos--Lanczos.c)
 * Callees:
 *     sin_0 @ 0x1802B9768 (sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return sin_0(a1) / a1;
}
