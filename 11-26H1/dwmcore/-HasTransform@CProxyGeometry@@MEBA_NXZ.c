/*
 * XREFs of ?HasTransform@CProxyGeometry@@MEBA_NXZ @ 0x1801C37D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProxyGeometry::HasTransform(CProxyGeometry *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 10) || *((_QWORD *)this + 18) )
    return 1;
  return result;
}
