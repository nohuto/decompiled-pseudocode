/*
 * XREFs of ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800DC344
 * Callers:
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800DC534 (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x1800D6FBC (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 *     ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800DC2E8 (--$make_shared@Voperation_guard@wil@@$$V@std@@YA-AV-$shared_ptr@Voperation_guard@wil@@@0@XZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIMuteControlHandler@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800DC4F4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIMuteControlHandler@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>(
        __int64 a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>();
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMuteControlHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::`vftable';
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_WORD *)(a1 + 48) = 0;
  *(GUID *)(a1 + 84) = GUID_00000000_0000_0000_0000_000000000000;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 112) = 0;
  std::atomic<bool>::atomic<bool>((_BYTE *)(a1 + 113));
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 148) = 0;
  std::make_shared<wil::operation_guard,>((_QWORD *)(a1 + 152));
  return a1;
}
