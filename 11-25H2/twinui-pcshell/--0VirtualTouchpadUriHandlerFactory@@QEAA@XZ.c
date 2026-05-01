/*
 * XREFs of ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x180448470
 * Callers:
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180448218 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804482B0 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017A600 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     ??0?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180448428 (--0-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

VirtualTouchpadUriHandlerFactory *__fastcall VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(
        VirtualTouchpadUriHandlerFactory *this)
{
  __int64 *v2; // rax

  Microsoft::WRL::SimpleClassFactory<VirtualTouchpadUriHandler,0>::SimpleClassFactory<VirtualTouchpadUriHandler,0>();
  *(_QWORD *)this = &VirtualTouchpadUriHandlerFactory::`vftable';
  v2 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  (*(void (__fastcall **)(__int64 *))(*v2 + 8))(v2);
  return this;
}
