/*
 * XREFs of ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180473C80
 * Callers:
 *     ??$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@@012@@Z @ 0x1802B63F8 (--$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV-$Com.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_DWORD *)this + 14) = 100;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_DWORD *)this + 34) = 100;
  *(_OWORD *)((char *)this + 140) = 0LL;
  *(_OWORD *)((char *)this + 156) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_OWORD *)((char *)this + 184) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *((_DWORD *)this + 54) = 100;
  *(_OWORD *)((char *)this + 220) = 0LL;
  *(_OWORD *)((char *)this + 236) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return this;
}
