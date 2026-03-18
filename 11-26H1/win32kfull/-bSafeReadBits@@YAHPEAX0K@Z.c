/*
 * XREFs of ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D9610
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiEngCreatePalette @ 0x14021FF70 (NtGdiEngCreatePalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14032F920 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSafeReadBits(void *a1, void *a2, unsigned int a3)
{
  if ( a1 && a2 )
    GreProbeAndReadFromUntrustedVa(a1, a3, a2, a3, 1uLL);
  return 1LL;
}
