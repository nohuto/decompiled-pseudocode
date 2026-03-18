/*
 * XREFs of Lanczos::Lanczos @ 0x18025B8EC
 * Callers:
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x18025B734 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x18025B82C (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 * Callees:
 *     Lanczos::Sinc @ 0x18025B954 (Lanczos--Sinc.c)
 */

double __fastcall Lanczos::Lanczos(double a1)
{
  double v1; // xmm0_8

  if ( COERCE_DOUBLE(*(_QWORD *)&a1 & _xmm) >= 3.0 )
    return 0.0;
  v1 = Lanczos::Sinc();
  return Lanczos::Sinc() * v1;
}
