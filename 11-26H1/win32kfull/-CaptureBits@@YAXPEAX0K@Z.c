/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x14032C110
 * Callers:
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureBits(void *a1, void *a2, unsigned int a3)
{
  if ( a1 )
  {
    if ( a2 )
      GreProbeAndReadFromUntrustedVa(a1, a3, a2, a3, 1uLL);
  }
}
