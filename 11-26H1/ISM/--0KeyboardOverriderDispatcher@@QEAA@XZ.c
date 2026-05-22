/*
 * XREFs of ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x1800F05C8
 * Callers:
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800F0400 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800148E4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x1800880AC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
KeyboardOverriderDispatcher *__fastcall KeyboardOverriderDispatcher::KeyboardOverriderDispatcher(
        KeyboardOverriderDispatcher *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteKeyboardOverriderCallback,IMessageProxyListener>::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteKeyboardOverriderCallback,IMessageProxyListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardOverriderDispatcher::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &KeyboardOverriderDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 3);
  memset_0((char *)this + 64, 0, 0x170uLL);
  *((_BYTE *)this + 432) = 0;
  *((_QWORD *)this + 55) = 0LL;
  memset_0((char *)this + 448, 0, 0x100uLL);
  *((_BYTE *)this + 704) = 0;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 89);
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  return this;
}
