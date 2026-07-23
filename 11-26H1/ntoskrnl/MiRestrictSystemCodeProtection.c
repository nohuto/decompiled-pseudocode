/*
 * XREFs of MiRestrictSystemCodeProtection @ 0x14052C130
 * Callers:
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRestrictSystemCodeProtection(__int64 a1, unsigned int a2)
{
  char v2; // al
  unsigned __int64 v3; // r9
  unsigned int v4; // r8d

  if ( (a1 & 1) != 0 )
  {
    v2 = 2;
    LODWORD(v3) = (a1 & 0x800) != 0 ? 4 : 1;
    if ( a1 < 0 )
      v2 = 0;
    LOBYTE(v3) = v2 | v3;
  }
  else
  {
    v3 = (unsigned __int64)a1 >> 5;
  }
  if ( (v3 & 7) != 0 )
  {
    v4 = a2 & 0xFFFFFFFD;
    if ( (v3 & 2) != 0 )
      v4 = a2;
    if ( (v4 & 7) != 0 && (v3 & 4) == 0 )
      return v4 & 2 | 1;
  }
  else
  {
    return 24;
  }
  return v4;
}
