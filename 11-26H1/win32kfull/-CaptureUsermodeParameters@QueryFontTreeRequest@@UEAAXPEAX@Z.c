/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x140284F10
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400D1B40 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x14028433C (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 */

void __fastcall QueryFontTreeRequest::CaptureUsermodeParameters(void **this, char *a2)
{
  const void *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v4, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(this + 11, 8uLL, a2 + 32, 8uLL, 1uLL);
  if ( v4 == this[10] )
  {
    GreProbeAndReadFromUntrustedVa(this[8], 8uLL, v4, 8uLL, 1uLL);
    if ( *((_DWORD *)this + 15) == 2 )
    {
      QueryFontTreeRequest::CaptureKerningPairs((QueryFontTreeRequest *)this);
    }
    else if ( *((_DWORD *)this + 15) == 3 )
    {
      QueryFontTreeRequest::CaptureGlyphSet((QueryFontTreeRequest *)this);
    }
  }
}
