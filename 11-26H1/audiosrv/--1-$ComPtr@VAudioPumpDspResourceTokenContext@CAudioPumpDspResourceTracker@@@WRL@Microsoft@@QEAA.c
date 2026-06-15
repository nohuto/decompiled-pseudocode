/*
 * XREFs of ??1?$ComPtr@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1524
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext_CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext_const_&_CAudioPumpDspResourceTracker___&__::_1_::dtor$1 @ 0x18016794C (_Microsoft--WRL--Details--MakeAndInitialize_CAudioPumpDspResourceTracker--AudioPumpDspResourceTo.c)
 *     _Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor$0 @ 0x18016AC55 (_Microsoft--WRL--Details--Make_CMonitor_StreamConnectionSettings___bool__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext>::~ComPtr<CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
