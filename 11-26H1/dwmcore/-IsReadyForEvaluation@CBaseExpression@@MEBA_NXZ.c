/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x18019FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 216);
  return (v1 & 2) != 0 && (v1 & 8) == 0;
}
