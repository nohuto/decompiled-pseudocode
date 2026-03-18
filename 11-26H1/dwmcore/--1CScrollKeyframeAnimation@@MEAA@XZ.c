/*
 * XREFs of ??1CScrollKeyframeAnimation@@MEAA@XZ @ 0x18015289C
 * Callers:
 *     ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x180152850 (--_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x180289B40 (--_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

void __fastcall CScrollKeyframeAnimation::~CScrollKeyframeAnimation(CScrollKeyframeAnimation *this)
{
  *((_QWORD *)this + 59) = 0LL;
  CExpressionValue::DestroyCurrent((CScrollKeyframeAnimation *)((char *)this + 552));
  CExpressionValue::DestroyCurrent((CScrollKeyframeAnimation *)((char *)this + 480));
  CKeyframeAnimation::~CKeyframeAnimation(this);
}
