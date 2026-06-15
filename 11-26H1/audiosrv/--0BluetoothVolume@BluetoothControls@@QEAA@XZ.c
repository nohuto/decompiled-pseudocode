/*
 * XREFs of ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800DC56C
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC100 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC200 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 * Callees:
 *     ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800DC404 (--0-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 */

BluetoothControls::BluetoothVolume *__fastcall BluetoothControls::BluetoothVolume::BluetoothVolume(
        BluetoothControls::BluetoothVolume *this)
{
  BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>((__int64)this);
  *(_QWORD *)this = &BluetoothControls::BluetoothVolume::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 180) = 0;
  return this;
}
