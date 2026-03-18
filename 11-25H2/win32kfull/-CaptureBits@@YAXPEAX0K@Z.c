/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x14033AA1C
 * Callers:
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall CaptureBits(void *a1, char *a2, unsigned int a3)
{
  char *v3; // r9

  if ( a1 && a2 )
  {
    v3 = &a2[a3];
    if ( v3 < a2 || (unsigned __int64)v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
}
