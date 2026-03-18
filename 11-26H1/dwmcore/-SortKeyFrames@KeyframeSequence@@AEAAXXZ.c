/*
 * XREFs of ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180045E3C
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::SortKeyFrames(void **this)
{
  unsigned int v2; // eax

  if ( (*((_BYTE *)this + 132) & 4) != 0 )
  {
    qsort(this[12], *((unsigned int *)this + 26), 0x18uLL, KeyframeSequence::CompareKeyframes);
    *((_BYTE *)this + 132) &= ~4u;
    v2 = *((_DWORD *)this + 26);
    *((_DWORD *)this + 28) = 0;
    if ( v2 >= 2 )
      *((_DWORD *)this + 28) = *((_DWORD *)this[12] + 6 * v2 - 6) - *(_DWORD *)this[12];
  }
}
