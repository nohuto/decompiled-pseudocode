/*
 * XREFs of ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC000
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088274 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800DC534 (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800DDD30 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_1800DDD30.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>(
        struct IControlChangeNotify **a1)
{
  void *v2; // rax
  int v3; // edi
  __int64 v4; // rax
  struct IControlChangeNotify *v5; // rbx
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = BluetoothControls::BluetoothMute::BluetoothMute((BluetoothControls::BluetoothMute *)v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v8, v4);
    v7 = 0LL;
    v5 = v8;
    v3 = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(v8);
    if ( v3 >= 0 )
    {
      if ( v5 )
        ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->AddRef)(v5);
      *a1 = v5;
      if ( v5 )
        ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->Release)(v5);
      v3 = 0;
    }
    else if ( v5 )
    {
      ((void (__fastcall *)(struct IControlChangeNotify *))v5->lpVtbl->Release)(v5);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v7);
  return (unsigned int)v3;
}
