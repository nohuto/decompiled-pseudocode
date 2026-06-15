/*
 * XREFs of _dynamic_initializer_for__s_DspResourceTracker__ @ 0x180008470
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioPumpDspResourceTracker@@QEAA@XZ @ 0x1800C1430 (--0CAudioPumpDspResourceTracker@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__s_DspResourceTracker__(CAudioPumpDspResourceTracker *a1)
{
  CAudioPumpDspResourceTracker::CAudioPumpDspResourceTracker(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_DspResourceTracker__);
}
