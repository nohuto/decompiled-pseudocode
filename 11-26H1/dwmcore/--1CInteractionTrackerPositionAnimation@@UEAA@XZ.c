/*
 * XREFs of ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1801A1678
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1801A16A0 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180289F10 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMotion@@QEAA@XZ @ 0x1801A16EC (--1CMotion@@QEAA@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::~CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this)
{
  CMotion::~CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 400));
  CScrollAnimation::~CScrollAnimation(this);
}
