/*
 * XREFs of ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x14011AE14
 * Callers:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x14011AAE0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lParentErrorDividedBy4(HFDBASIS32 *this)
{
  int v1; // edx
  unsigned int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  int v5; // eax
  int v6; // r8d

  v1 = *((_DWORD *)this + 3);
  v2 = v1 - 2 * *((_DWORD *)this + 2);
  v3 = 2 * *((_DWORD *)this + 2);
  v4 = v1 - v3;
  v5 = -v1;
  v6 = v3 - v1;
  if ( v6 >= 0 )
    v4 = v6;
  if ( v1 >= 0 )
    v5 = v1;
  if ( v5 <= v4 )
  {
    v1 = v6;
    if ( v6 < 0 )
      return v2;
  }
  else if ( v1 < 0 )
  {
    return (unsigned int)-v1;
  }
  return (unsigned int)v1;
}
