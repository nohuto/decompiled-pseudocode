/*
 * XREFs of ??1KeyframeSequence@@QEAA@XZ @ 0x18010F078
 * Callers:
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18010F01C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18010F04C (--1-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18010F11C (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18010FC9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 */

void __fastcall KeyframeSequence::~KeyframeSequence(KeyframeSequence *this)
{
  KeyframeSequence::RemoveAllKeyFrames(this);
  if ( *((_DWORD *)this + 16) == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
