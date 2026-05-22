/*
 * XREFs of ??0HotkeyContextualProcessor@@QEAA@XZ @ 0x1801A26A0
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1801A2304 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextualProcessor@@UITextInputStateAdapterOwner@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800F7460 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextualProcessor@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HotkeyContextualProcessor *__fastcall HotkeyContextualProcessor::HotkeyContextualProcessor(
        HotkeyContextualProcessor *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IContextualProcessor,ITextInputStateAdapterOwner,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IContextualProcessor,ITextInputStateAdapterOwner,IInputServiceProxyOwner>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,ITextInputStateAdapterOwner,IInputServiceProxyOwner>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,ITextInputStateAdapterOwner,IInputServiceProxyOwner>::`vftable'{for `ITextInputStateAdapterOwner'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,ITextInputStateAdapterOwner,IInputServiceProxyOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HotkeyContextualProcessor::`vftable';
  *((_QWORD *)this + 1) = &HotkeyContextualProcessor::`vftable'{for `ITextInputStateAdapterOwner'};
  *((_QWORD *)this + 2) = &HotkeyContextualProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
