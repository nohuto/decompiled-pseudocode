/*
 * XREFs of ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x18009CA70
 * Callers:
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x18009DEA0 (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 * Callees:
 *     ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x18009B428 (--0-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>(
        Platform::Details *a1,
        __int64 a2)
{
  Platform::Details *Value; // rbx
  Platform::Details *v3; // rsi
  Platform::Details *v4; // rdi
  Platform::Details *v5; // rax
  Platform::Details *v6; // rbx
  __int64 v7; // rbx
  Platform::Details *type_id; // rbx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  Platform::Details *v11; // [rsp+60h] [rbp+28h] BYREF
  Platform::Details *v12; // [rsp+70h] [rbp+38h]
  Platform::Details *v13; // [rsp+78h] [rbp+40h]

  v11 = a1;
  v10[0] = a2;
  if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA == -1 )
    {
      type_id = (Platform::Details *)__abi_make_type_id(&_abi_typedesc_Windows_Foundation_Size);
      v11 = type_id;
      `Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode = Platform::Type::GetTypeCode(type_id);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(type_id);
      Init_thread_footer(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    }
  }
  Value = (Platform::Details *)Platform::Details::CreateValue(
                                 (unsigned int)`Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode,
                                 v10);
  v11 = Value;
  v3 = (Platform::Details *)__abi_winrt_ptr_ctor(Value);
  v12 = v3;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Value);
  v4 = 0LL;
  if ( v3 )
  {
    v11 = 0LL;
    if ( !(**(unsigned int (__fastcall ***)(Platform::Details *, void *, Platform::Details **))v3)(
            v3,
            &_uuidof__AV__Box_VSize_Foundation_Windows___Platform__,
            &v11) )
    {
      __abi_ThrowIfFailed(0);
      v4 = v11;
    }
    v13 = v4;
    v7 = __abi_winrt_ptr_ctor(v4);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  }
  else
  {
    v11 = (Platform::Details *)Platform::Details::Heap::Allocate(0x38uLL, 0x48uLL);
    v5 = Platform::Details::CustomBox<Windows::Foundation::Size>::CustomBox<Windows::Foundation::Size>(v11, v10[0]);
    v6 = v5;
    v11 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v5 + 8LL))(v5);
      v3 = v6;
      v12 = v6;
    }
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
    v7 = __abi_winrt_ptr_ctor(v3);
  }
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v7;
}
