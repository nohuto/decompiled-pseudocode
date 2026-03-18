/*
 * XREFs of ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1400D1D2C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400D1B40 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v5; // rbx

  v5 = *((_QWORD *)this + 11);
  ProbeForRead((volatile void *)v5, 0x20uLL, 8u);
  GreProbeAndReadFromUntrustedVa(a2, 4uLL, (const void *)v5, 4uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(a3, 4uLL, (const void *)(v5 + 12), 4uLL, 1uLL);
  return 1;
}
