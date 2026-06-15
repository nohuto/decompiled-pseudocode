/*
 * XREFs of ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800ADE60
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088274 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800DC534 (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
        _QWORD *a1,
        struct IMMDevice **a2)
{
  BluetoothControls::BluetoothMute *v4; // rax
  __int64 v6; // rax
  struct IControlChangeNotify *v7; // rbx
  int v8; // edi
  struct IControlChangeNotify *v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = (BluetoothControls::BluetoothMute *)operator new[](0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v6 = BluetoothControls::BluetoothMute::BluetoothMute(v4);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v9, v6);
  v10 = 0LL;
  v7 = v9;
  v8 = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
         v9,
         *a2);
  if ( v8 >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(struct IControlChangeNotify *, GUID *, _QWORD *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_9449e8a8_8cdb_4418_9ed0_34c35420fc84,
           a1);
    ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
  }
  else if ( v7 )
  {
    ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v8;
}
