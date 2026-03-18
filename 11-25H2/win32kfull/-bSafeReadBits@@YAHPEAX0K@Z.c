/*
 * XREFs of ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D6924
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D5490 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiEngCreatePalette @ 0x1401F0EE0 (NtGdiEngCreatePalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14033CEB0 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bSafeReadBits(void *a1, char *a2, unsigned int a3)
{
  char *v4; // rcx

  if ( a1 && a2 )
  {
    v4 = &a2[a3];
    if ( v4 < a2 || (unsigned __int64)v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
