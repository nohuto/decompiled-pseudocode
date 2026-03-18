/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x180045F40
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 465) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 464);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 464) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 38) + 132LL) &= ~2u;
    }
  }
}
