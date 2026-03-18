/*
 * XREFs of EngCreateDeviceSurface @ 0x140122040
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121FD0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002541C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) != 1
    && (iFormatCompat & 0xFFFF7FFF) != 2
    && (iFormatCompat & 0xFFFF7FFF) != 3
    && (iFormatCompat & 0xFFFF7FFF) != 4
    && (iFormatCompat & 0xFFFF7FFF) - 5 >= 2 )
  {
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  }
  return (HSURF)hbmCreateDriverSurface(1u, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
