/*
 * XREFs of ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x140329FC8
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1401043D0 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1401060F0 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProbeAndReadDesignVector(struct tagDESIGNVECTOR *a1, struct tagDESIGNVECTOR *a2)
{
  unsigned int v4; // eax
  unsigned int v6; // ebx

  GreProbeAndReadFromUntrustedVa(a1, 8uLL, a2, 8uLL, 1uLL);
  v4 = *((_DWORD *)a1 + 1);
  if ( v4 > 0x10 )
    return 0LL;
  v6 = 4 * v4 + 8;
  if ( v4 )
    GreProbeAndReadFromUntrustedVa((char *)a1 + 8, 4 * v4, (char *)a2 + 8, 4 * v4, 1uLL);
  return v6;
}
