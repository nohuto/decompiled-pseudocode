/*
 * XREFs of ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x1800D6FBC
 * Callers:
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800D723C (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800DC344 (--0-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls.c)
 *     ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800DC404 (--0-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 *     ??0CWorkFifo@@QEAA@XZ @ 0x1801245E4 (--0CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z @ 0x1800D6FAC (--0-$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z.c)
 */

__int64 __fastcall std::atomic<bool>::atomic<bool>(_BYTE *a1)
{
  __int64 v1; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_storage<bool,1>::_Atomic_storage<bool,1>(a1, v3);
  return v1;
}
