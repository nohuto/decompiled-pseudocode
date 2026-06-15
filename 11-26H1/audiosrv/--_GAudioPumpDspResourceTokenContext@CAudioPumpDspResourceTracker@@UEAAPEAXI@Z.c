/*
 * XREFs of ??_GAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAAPEAXI@Z @ 0x1800C1910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAA@XZ @ 0x1800C16B8 (--1AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAA@XZ.c)
 */

CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *__fastcall CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::`scalar deleting destructor'(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *this,
        char a2)
{
  CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::~AudioPumpDspResourceTokenContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
