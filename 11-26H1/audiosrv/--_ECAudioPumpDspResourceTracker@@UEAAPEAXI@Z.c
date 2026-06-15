/*
 * XREFs of ??_ECAudioPumpDspResourceTracker@@UEAAPEAXI@Z @ 0x1800C1950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioPumpDspResourceTracker@@UEAA@XZ @ 0x1800C1718 (--1CAudioPumpDspResourceTracker@@UEAA@XZ.c)
 */

CAudioPumpDspResourceTracker *__fastcall CAudioPumpDspResourceTracker::`vector deleting destructor'(
        CAudioPumpDspResourceTracker *this,
        char a2)
{
  CAudioPumpDspResourceTracker::~CAudioPumpDspResourceTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
