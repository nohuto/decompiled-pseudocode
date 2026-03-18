/*
 * XREFs of ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1800465A4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ResetTime(KeyframeSequence *this, int a2)
{
  float v3; // xmm1_4
  bool v4; // r9
  int v5; // edx
  int v6; // eax
  float v7; // xmm1_4
  int v8; // r8d

  v3 = *((float *)this + 32);
  v4 = (*((_BYTE *)this + 132) & 0x10) != 0;
  if ( v3 == 1.0 )
  {
    v5 = *((_DWORD *)this + 28);
    v6 = v5;
  }
  else
  {
    v6 = *((_DWORD *)this + 28);
    v5 = (int)(float)((float)v6 * v3);
  }
  v7 = *((float *)this + 31);
  if ( v7 == 0.0 )
    v8 = 0;
  else
    v8 = (int)(float)((float)v6 * v7);
  *((_DWORD *)this + 18) = v8;
  *((_DWORD *)this + 19) = v5;
  *((_DWORD *)this + 20) = v6;
  *((_BYTE *)this + 88) = v4;
  *((_BYTE *)this + 132) |= 0x20u;
  *((_DWORD *)this + 21) = a2;
}
