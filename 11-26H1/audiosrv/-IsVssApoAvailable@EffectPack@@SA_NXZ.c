/*
 * XREFs of ?IsVssApoAvailable@EffectPack@@SA_NXZ @ 0x18013B0E0
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x180091C90 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool EffectPack::IsVssApoAvailable(void)
{
  bool v0; // bl
  __int64 v1; // rax
  int v2; // ebx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_COMCatalog, 0LL, 1u, &GUID_000001e0_0000_0000_c000_000000000046, &ppv) >= 0 )
  {
    v4 = 0LL;
    v1 = *(_QWORD *)ppv;
    v4 = 0LL;
    v2 = (*(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(v1 + 24))(
           ppv,
           &unk_18018A628,
           &GUID_000001e2_0000_0000_c000_000000000046,
           &v4);
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(&v4);
    v0 = v2 >= 0;
  }
  wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&ppv);
  return v0;
}
