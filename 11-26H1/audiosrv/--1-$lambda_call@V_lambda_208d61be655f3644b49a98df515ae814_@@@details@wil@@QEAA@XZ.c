/*
 * XREFs of ??1?$lambda_call@V_lambda_208d61be655f3644b49a98df515ae814_@@@details@wil@@QEAA@XZ @ 0x1800DC658
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$7 @ 0x18016884C (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_18016884C.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_208d61be655f3644b49a98df515ae814_>::~lambda_call<_lambda_208d61be655f3644b49a98df515ae814_>(
        _BYTE *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    return wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 104LL));
  }
  return result;
}
