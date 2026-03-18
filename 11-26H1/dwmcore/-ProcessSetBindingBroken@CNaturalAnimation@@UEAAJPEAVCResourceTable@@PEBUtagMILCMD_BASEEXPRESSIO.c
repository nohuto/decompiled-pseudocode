/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E2D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18010DA40 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801DAC04 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18027B38C (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionVal.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  const union CNaturalAnimation::InternalValue *StopValue; // rax
  int v8; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[64]; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+80h] [rbp-28h]

  v3 = 0;
  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x212u, 0LL);
    }
    else if ( *((_BYTE *)a3 + 8) )
    {
      v12 = 0;
      StopValue = (const union CNaturalAnimation::InternalValue *)CNaturalAnimation::GetStopValue(
                                                                    (__int64)this,
                                                                    (__int64)v10);
      CNaturalAnimation::ExpressionValueFromInternalValue(this, StopValue, (struct CExpressionValue *)v11);
      v8 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v11);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x218u, 0LL);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v11);
    }
  }
  return v3;
}
