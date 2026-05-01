/*
 * XREFs of ??_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z @ 0x18059E434
 * Callers:
 *     ??_EInteractionTracker@SnapInteraction@@WBI@EAAPEAXI@Z @ 0x18059E260 (--_EInteractionTracker@SnapInteraction@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x18059DC00 (--1InteractionTracker@SnapInteraction@@UEAA@XZ.c)
 */

SnapInteraction::InteractionTracker *__fastcall SnapInteraction::InteractionTracker::`vector deleting destructor'(
        SnapInteraction::InteractionTracker *this,
        char a2)
{
  SnapInteraction::InteractionTracker::~InteractionTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
