/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C2AB4
 * Callers:
 *     ??$?RV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@_lambda_35c23013e967e1c82d79423ab9efa765_@@QEBA?A_PAEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C07B0 (--$-RV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@_lambda_35c23013e967e1c82d.c)
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F618C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@Z @ 0x1800F67E0 (--$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800F6888 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F6948 (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 *     ??$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIMixedRealitySpatialAudioFormatPolicyChange@@Uerr_returncode_policy@wil@@@1@XZ @ 0x180150830 (--$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@-$com_ptr_t@UIWeakReference@@Uerr_ret.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query(struct IWeakReference *a1, const struct _GUID *a2, void **a3)
{
  struct IWeakReferenceVtbl *lpVtbl; // rax
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  lpVtbl = a1->lpVtbl;
  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IWeakReference *, GUID *, __int64 *))lpVtbl->Resolve)(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v8);
  if ( v6 >= 0 )
  {
    if ( !v8 )
      return 2147943568LL;
    v6 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v8)(v8, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v6;
}
