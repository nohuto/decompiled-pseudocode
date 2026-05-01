/*
 * XREFs of ??$Make@VCTempAppVisualArray@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTempAppVisualArray@@@12@XZ @ 0x18052245C
 * Callers:
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805229C4 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopP.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITemporaryAppVisualArray@@UIObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180522518 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfaces@UITe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CTempAppVisualArray,>(__int64 *a1)
{
  _OWORD *v2; // rax
  _QWORD *v3; // rbx
  volatile int *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITemporaryAppVisualArray,IObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITemporaryAppVisualArray,IObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>(v2);
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ITemporaryAppVisualArray,IObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v3 = &CTempAppVisualArray::`vftable';
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopPersistence>::Release(
        *a1,
        v4);
    v6 = 0LL;
    *a1 = (__int64)v3;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v6);
  return a1;
}
