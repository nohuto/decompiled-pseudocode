/*
 * XREFs of ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180045210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x180045304 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18013A09C (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::CalculateValueWorker(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  *(_BYTE *)a3 = 1;
  CNaturalAnimation::SetupAnimationIfNecessary(this);
  if ( CNaturalAnimation::IsPastDelay(this) )
  {
    CNaturalAnimation::CalculateValue(this, a2, a3);
  }
  else if ( *((_DWORD *)this + 89) == 1 )
  {
    v7 = *((_DWORD *)this + 72);
    v8 = *((_QWORD *)this + 35);
    v9 = v7;
    CNaturalAnimation::PushValueToStack(this, &v8, a2);
  }
  else
  {
    *((_BYTE *)a3 + 1) = 1;
  }
  *((_BYTE *)this + 532) ^= (*((_BYTE *)this + 532) ^ (*(_BYTE *)a3 << 6)) & 0x40;
  return 0LL;
}
