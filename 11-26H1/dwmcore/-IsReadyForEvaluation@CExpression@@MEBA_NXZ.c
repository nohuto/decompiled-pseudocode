/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1801AFEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  char v1; // dl
  char result; // al

  v1 = *((_BYTE *)this + 216);
  result = 0;
  if ( (v1 & 2) != 0 && (v1 & 8) == 0 )
  {
    if ( *((_QWORD *)this + 35) )
      return 1;
  }
  return result;
}
