/*
 * XREFs of ?OnNotify@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x180079350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::OnNotify(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rcx

  (*(void (__fastcall **)(_QWORD *))(*a1 + 240LL))(a1);
  v6 = a1[16];
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
  return 0LL;
}
