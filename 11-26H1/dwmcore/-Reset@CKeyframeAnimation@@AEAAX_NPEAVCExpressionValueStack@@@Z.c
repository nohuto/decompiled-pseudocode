/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180046480 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180046570 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1800465A4 (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z @ 0x18010BF90 (-PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18010C3D0 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18010D45C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 */

void __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  char *v3; // rdi
  int v6; // eax
  KeyframeSequence *v7; // rcx
  char v8; // al
  bool v9; // zf
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // r10d

  v3 = (char *)this + 465;
  if ( (*((_BYTE *)this + 465) & 1) == 0 )
    goto LABEL_8;
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 115);
    if ( v6 == 1 )
    {
      *((_DWORD *)this + 93) = *((_DWORD *)this + 92);
      CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
      v11 = 0;
    }
    else
    {
      if ( v6 != 2 )
      {
LABEL_5:
        KeyframeSequence::Calculate(*((KeyframeSequence **)this + 38), a3);
        CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 38));
        v3 = (char *)this + 465;
        goto LABEL_6;
      }
      *((_DWORD *)this + 93) = *((_DWORD *)this + 92);
      CKeyframeAnimation::GetAnimationTimeLength(this);
      v12 = *((_DWORD *)this + 107);
      v13 = 0;
      if ( v12 >= 1 )
        v13 = v12 - 1;
      CKeyframeAnimation::PrepareSequenceForIteration(this, v13);
      v11 = v14;
    }
    KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 38), v11);
    goto LABEL_5;
  }
LABEL_6:
  v7 = (KeyframeSequence *)*((_QWORD *)this + 38);
  if ( (*((_BYTE *)v7 + 132) & 1) != 0 )
    KeyframeSequence::Stop(v7);
LABEL_8:
  *v3 &= ~1u;
  v8 = *v3;
  *((_BYTE *)this + 464) &= ~0x80u;
  *((_DWORD *)this + 93) = 0;
  v9 = (*((_BYTE *)this + 464) & 0x20) == 0;
  *v3 = v8 & 0xF9;
  if ( v9 )
  {
    v10 = CBaseExpression::NotifyAnimationStopped(this);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x75Du, 0LL);
  }
}
