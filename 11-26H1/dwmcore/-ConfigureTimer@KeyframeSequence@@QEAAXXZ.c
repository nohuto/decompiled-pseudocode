/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180045EB0
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800457E4 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  float v1; // xmm1_4
  bool v2; // dl
  int v3; // r8d
  int v4; // r9d
  float v5; // xmm1_4
  int v6; // eax

  v1 = *((float *)this + 32);
  v2 = (*((_BYTE *)this + 132) & 0x10) != 0;
  if ( v1 == 1.0 )
  {
    v3 = *((_DWORD *)this + 28);
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 28);
    v3 = (int)(float)((float)v4 * v1);
  }
  v5 = *((float *)this + 31);
  if ( v5 == 0.0 )
    v6 = 0;
  else
    v6 = (int)(float)((float)v4 * v5);
  *((_DWORD *)this + 18) = v6;
  *((_DWORD *)this + 19) = v3;
  *((_DWORD *)this + 20) = v4;
  *((_BYTE *)this + 88) = v2;
  *((_DWORD *)this + 21) = v6;
  *((_BYTE *)this + 132) |= 0x20u;
}
