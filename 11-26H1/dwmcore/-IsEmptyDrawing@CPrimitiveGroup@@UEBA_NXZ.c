/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18018D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 44)
    || *((float *)this + 29) <= *((float *)this + 27)
    || *((float *)this + 30) <= *((float *)this + 28) )
  {
    return 1;
  }
  return result;
}
