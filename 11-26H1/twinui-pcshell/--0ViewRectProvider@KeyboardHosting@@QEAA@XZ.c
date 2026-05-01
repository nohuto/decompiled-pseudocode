/*
 * XREFs of ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180482B4C
 * Callers:
 *     ??$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@@012@@Z @ 0x1802AE520 (--$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV-$Com.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18004B878 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@XZ @ 0x180475F84 (--0MonitorInformation@KeyboardHosting@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::ViewRectProvider(
        KeyboardHosting::ViewRectProvider *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::ViewRectProvider::`vftable';
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::ViewRectProvider *)((char *)this + 16));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::ViewRectProvider *)((char *)this + 184));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::ViewRectProvider *)((char *)this + 352));
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 100;
  *(_OWORD *)((char *)this + 532) = 0LL;
  *(_OWORD *)((char *)this + 548) = 0LL;
  *(_OWORD *)((char *)this + 564) = 0LL;
  *(_OWORD *)((char *)this + 580) = 0LL;
  *((_DWORD *)this + 149) = 0;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 100;
  *(_OWORD *)((char *)this + 612) = 0LL;
  *(_OWORD *)((char *)this + 628) = 0LL;
  *(_OWORD *)((char *)this + 644) = 0LL;
  *(_OWORD *)((char *)this + 660) = 0LL;
  *((_DWORD *)this + 169) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_DWORD *)this + 172) = 100;
  *(_OWORD *)((char *)this + 692) = 0LL;
  *(_OWORD *)((char *)this + 708) = 0LL;
  *(_OWORD *)((char *)this + 724) = 0LL;
  *(_OWORD *)((char *)this + 740) = 0LL;
  *((_DWORD *)this + 189) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  return this;
}
