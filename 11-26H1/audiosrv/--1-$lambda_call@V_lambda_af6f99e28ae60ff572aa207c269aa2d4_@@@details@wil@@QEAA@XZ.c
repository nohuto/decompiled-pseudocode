/*
 * XREFs of ??1?$lambda_call@V_lambda_af6f99e28ae60ff572aa207c269aa2d4_@@@details@wil@@QEAA@XZ @ 0x1800DC6A0
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$6 @ 0x18016883A (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_18016883A.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call<_lambda_af6f99e28ae60ff572aa207c269aa2d4_>::~lambda_call<_lambda_af6f99e28ae60ff572aa207c269aa2d4_>(
        _BYTE *a1)
{
  char IsEnabled; // al
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  if ( a1[8] )
  {
    a1[8] = 0;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 148LL) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl);
      v3 = *(__int64 **)(*(_QWORD *)a1 + 136LL);
      v4 = *v3;
      v5 = *(unsigned int *)(*(_QWORD *)a1 + 144LL);
      if ( IsEnabled )
        (*(void (__fastcall **)(__int64 *, __int64))(v4 + 48))(v3, v5);
      else
        (*(void (__fastcall **)(__int64 *, __int64))(v4 + 32))(v3, v5);
    }
  }
}
