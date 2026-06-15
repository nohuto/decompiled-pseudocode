/*
 * XREFs of ??0AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAA@XZ @ 0x1800C13C8
 * Callers:
 *     ??$MakeAndInitialize@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@V12@AEBUAudioPumpDspTokenAcquisitionContext@2@AEAPEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@AEBUAudioPumpDspTokenAcquisitionContext@4@AEAPEAV4@@Z @ 0x1800C0DD8 (--$MakeAndInitialize@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@V12@AEBUAud.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *__fastcall CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::AudioPumpDspResourceTokenContext(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPumpDspResourceTrackerToken>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
