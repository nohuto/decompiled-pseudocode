/*
 * XREFs of ?GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x180076A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007547C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothVolume::GetMasterVolumeLevel(
        BluetoothControls::BluetoothVolume *this,
        float *a2)
{
  __int64 *TargetedControl; // rax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      &v6);
  v4 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)*TargetedControl + 128LL))(*TargetedControl, a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
