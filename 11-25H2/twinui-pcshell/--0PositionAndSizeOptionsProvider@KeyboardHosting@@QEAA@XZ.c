/*
 * XREFs of ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180473B84
 * Callers:
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x180128534 (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??0PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA@XZ @ 0x180473B3C (--0PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(
        KeyboardHosting::PositionAndSizeOptionsProvider *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::PositionAndSizeOptionsProvider::`vftable';
  KeyboardHosting::PositionAndSizeOptionsHelper::PositionAndSizeOptionsHelper((KeyboardHosting::PositionAndSizeOptionsProvider *)((char *)this + 16));
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 20) = 100;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_OWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 40) = 100;
  *(_OWORD *)((char *)this + 164) = 0LL;
  *(_OWORD *)((char *)this + 180) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 60) = 100;
  *(_OWORD *)((char *)this + 244) = 0LL;
  *(_OWORD *)((char *)this + 260) = 0LL;
  *((_QWORD *)this + 35) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 36) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 37) = 0x3FF0000000000000LL;
  *((_BYTE *)this + 304) = 0;
  *((_QWORD *)this + 39) = 0LL;
  return this;
}
