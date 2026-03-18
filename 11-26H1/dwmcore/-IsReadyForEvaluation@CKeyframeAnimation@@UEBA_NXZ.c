/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x18019D0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl
  char result; // al

  v1 = *((_BYTE *)this + 216);
  result = 0;
  if ( (v1 & 2) != 0 && (v1 & 8) == 0 )
  {
    if ( *((_QWORD *)this + 38) )
      return 1;
  }
  return result;
}
