/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180017004
 * Callers:
 *     ?RemoveDelegate@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180017FE8 (-RemoveDelegate@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeM.c)
 *     ?RemoveDelegate@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180018184 (-RemoveDelegate@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@W.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180009F84 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18000A0C0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A1E0 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x180010CCC (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001281C (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        Microsoft::WRL::Details::EventTargetArray **a1,
        unsigned __int64 *a2)
{
  void *v4; // rax
  volatile int *v5; // rbx
  int v6; // edi
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  unsigned __int64 v8; // rdx
  volatile int *v9; // rdx
  volatile int *v10; // rdx
  Microsoft::WRL::Details::EventTargetArray *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v4;
  v5 = (volatile int *)v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>((__int64)v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 2) = 0LL;
    *(_QWORD *)v5 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach((__int64 *)&v12, v5);
    v7 = v12;
    v8 = *a2;
    v13 = 0LL;
    v6 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v12, v8);
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef((__int64 *)&v12, v9);
      *a1 = v7;
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          (__int64)v7,
          v10);
      v6 = 0;
    }
    else if ( v7 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v7,
        v9);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v13);
  return (unsigned int)v6;
}
