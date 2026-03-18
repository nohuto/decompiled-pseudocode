/*
 * XREFs of ?lError@HFDBASIS32@@QEBAJXZ @ 0x14011AC84
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011A830 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x14011AAE0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lError(HFDBASIS32 *this)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx

  v1 = *((_DWORD *)this + 3);
  v2 = *((_DWORD *)this + 2);
  v3 = -v1;
  v4 = -v2;
  v5 = -v2;
  if ( v2 >= 0 )
    v5 = v2;
  if ( v1 >= 0 )
    v3 = v1;
  if ( v5 <= v3 )
  {
    v4 = v1;
    if ( v1 < 0 )
      return (unsigned int)-v1;
  }
  else if ( v2 >= 0 )
  {
    return (unsigned int)v2;
  }
  return v4;
}
