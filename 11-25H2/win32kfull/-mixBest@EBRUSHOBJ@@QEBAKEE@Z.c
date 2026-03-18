/*
 * XREFs of ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1400A2E78
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EBRUSHOBJ::mixBest(EBRUSHOBJ *this, char a2, char a3)
{
  unsigned __int8 v3; // dl

  v3 = ((a2 - 1) & 0xF) + 1;
  if ( a3 == 1 && (*((_DWORD *)this + 30) & 0x8000) != 0 )
    return v3 | 0xB00u;
  else
    return v3 | (v3 << 8);
}
