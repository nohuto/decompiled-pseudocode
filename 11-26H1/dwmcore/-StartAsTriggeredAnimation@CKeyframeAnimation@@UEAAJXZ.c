/*
 * XREFs of ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010
 * Callers:
 *     <none>
 * Callees:
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180046480 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1800465A4 (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18019275C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18027C9E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::StartAsTriggeredAnimation(KeyframeSequence **this)
{
  int started; // eax
  unsigned int v3; // edi
  CComposition *v4; // rcx
  __int64 FrameTargetTime; // rax
  int updated; // eax

  started = CBaseExpression::StartAsTriggeredAnimation((CBaseExpression *)this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, started, 0xD12u, 0LL);
  }
  else if ( ((_BYTE)this[27] & 8) == 0 )
  {
    v4 = this[3];
    *((_DWORD *)this + 111) = 0;
    FrameTargetTime = CComposition::GetFrameTargetTime(v4);
    updated = CKeyframeAnimation::UpdatePlaybackState((__int64)this, 1u, 0, FrameTargetTime);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xD29u, 0LL);
    }
    else if ( ((_BYTE)this[27] & 0x20) != 0 )
    {
      CKeyframeAnimation::Reset((CKeyframeAnimation *)this, 0, 0LL);
      CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)this, 0);
      KeyframeSequence::ResetTime(this[38], 0);
    }
  }
  return v3;
}
