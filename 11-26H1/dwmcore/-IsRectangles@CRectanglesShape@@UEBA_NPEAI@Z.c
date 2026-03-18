/*
 * XREFs of ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180174730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::IsRectangles(CRectanglesShape *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4;
  return 1;
}
