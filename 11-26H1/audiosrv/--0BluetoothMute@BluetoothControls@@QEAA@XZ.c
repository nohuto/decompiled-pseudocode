/*
 * XREFs of ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800DC534
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800ADE60 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC000 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 * Callees:
 *     ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800DC344 (--0-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls.c)
 */

BluetoothControls::BluetoothMute *__fastcall BluetoothControls::BluetoothMute::BluetoothMute(
        BluetoothControls::BluetoothMute *this)
{
  BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>((__int64)this);
  *(_QWORD *)this = &BluetoothControls::BluetoothMute::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 180) = 0;
  return this;
}
