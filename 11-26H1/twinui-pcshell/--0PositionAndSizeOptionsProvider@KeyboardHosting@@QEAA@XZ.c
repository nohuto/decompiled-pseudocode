/*
 * XREFs of ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180482AA0
 * Callers:
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1801E8B44 (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18004B878 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@XZ @ 0x180475F84 (--0MonitorInformation@KeyboardHosting@@QEAA@XZ.c)
 *     ??0PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA@XZ @ 0x180482A54 (--0PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::PositionAndSizeOptionsProvider *)((char *)this + 40));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::PositionAndSizeOptionsProvider *)((char *)this + 208));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::PositionAndSizeOptionsProvider *)((char *)this + 376));
  *((_QWORD *)this + 68) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 69) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 70) = 0x3FF0000000000000LL;
  *((_BYTE *)this + 568) = 0;
  *((_QWORD *)this + 72) = 0LL;
  return this;
}
