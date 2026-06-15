/*
 * XREFs of wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x180150BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIMixedRealitySpatialAudioFormatPolicyChange@@Uerr_returncode_policy@wil@@@1@XZ @ 0x180150830 (--$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@-$com_ptr_t@UIWeakReference@@Uerr_ret.c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180151588 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl_enum_Windows::Internal::Shell::Holographic::ShellState_const____::operator()(
        __int64 a1,
        unsigned int *a2)
{
  __int64 v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 8;
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_copy<IMixedRealitySpatialAudioFormatPolicyChange>(
    (struct IWeakReference **)(a1 + 8),
    &v5);
  if ( v5 )
    CExclusiveModeListener::OnHoloshellStateChange(*(_QWORD *)(v3 + 8), *a2);
  return wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v5);
}
