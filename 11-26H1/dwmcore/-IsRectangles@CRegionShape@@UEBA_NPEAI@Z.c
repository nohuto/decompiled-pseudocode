/*
 * XREFs of ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180173730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRegionShape::IsRectangles(CRegionShape *this, unsigned int *a2)
{
  _DWORD *v3; // rdx
  bool result; // al

  if ( !a2 )
    return 1;
  v3 = (_DWORD *)*((_QWORD *)this + 2);
  if ( *v3 )
  {
    *a2 = (8LL * (*v3 - 1) + (int)v3[2 * *v3 + 2] - (__int64)(int)v3[4]) >> 3;
    return 1;
  }
  result = 1;
  *a2 = 0;
  return result;
}
