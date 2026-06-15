/*
 * XREFs of ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD24C
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800DDD30 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_1800DDD30.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007AC38 (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008E120 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x180108FBC (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 */

// Hidden C++ exception states: #wind=1
struct IMuteControlHandler *__fastcall BluetoothControls::BluetoothMute::MakeRealControl(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList **a3)
{
  struct IMuteControlHandler *v5; // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMuteControlHandler *v10; // [rsp+40h] [rbp+18h] BYREF
  struct IPartsList *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  VolumeHelpers::GetPath((VolumeHelpers *)a1, (struct IMMDevice *)&v11, a3);
  if ( !v11 || (CMuteHardware::Make(a1, a2, v11, &v10), (v5 = v10) == 0LL) )
  {
    v6 = CMuteSoftware::Make(a1, a2, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        599LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v6,
        v8);
    v5 = v10;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return v5;
}
