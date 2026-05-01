/*
 * XREFs of ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1804546A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18018DB50 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??$AsIID@V?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$05@Details@WRL@Microsoft@@KAJPEAV?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x1801ACE50 (--$AsIID@V-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@-$RuntimeC.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x180454944 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<VirtualTouchpadUriHandlerFactory>(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,VirtualTouchpadUriHandlerFactory,>(v15);
  if ( v8 >= 0 )
  {
    v10 = v15[0];
    v11 = v15[0];
    *(_DWORD *)(v15[0] + 20) = *a1;
    v12 = Microsoft::WRL::Details::RuntimeClassBaseT<6>::AsIID<Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>>(
            v11,
            a3,
            a4);
    v14 = v12;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v12 < 0 )
      {
        *(_DWORD *)(v10 + 20) &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v10 = 0LL;
      }
    }
    if ( v10 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v10,
        v13);
    return v14;
  }
  else
  {
    if ( v15[0] )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v15[0],
        v7);
    return (unsigned int)v8;
  }
}
