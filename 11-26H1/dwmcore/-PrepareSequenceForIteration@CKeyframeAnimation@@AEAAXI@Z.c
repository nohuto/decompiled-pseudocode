/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180046480
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  float v4; // xmm1_4
  char v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  bool v8; // cl

  v2 = *((_DWORD *)this + 114);
  v4 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 465) >> 3;
      if ( (a2 & 1) != 0 )
        v5 = (*((_BYTE *)this + 465) & 8) == 0;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 465) >> 3;
  }
  v6 = *((_DWORD *)this + 107);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 109) != 1.0 )
    v4 = *((float *)this + 109);
  *(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^= (*(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^ (8 * v5)) & 8;
  v7 = *((_QWORD *)this + 38);
  v8 = *((float *)this + 102) < 0.0;
  *(_BYTE *)(v7 + 132) &= ~0x10u;
  *(_BYTE *)(v7 + 88) = v8;
  *(_BYTE *)(v7 + 132) |= 16 * v8;
  *(_DWORD *)(*((_QWORD *)this + 38) + 124LL) = 0;
  *(float *)(*((_QWORD *)this + 38) + 128LL) = v4;
}
