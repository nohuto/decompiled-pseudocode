/*
 * XREFs of ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BD044
 * Callers:
 *     ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x1800BD1E0 (--_EMPCGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180065488 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BD024 (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x180113638 (--1ManipulationInjector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandler::~MPCGestureHandler(MPCGestureHandler *this)
{
  void **v2; // rdi
  int v3; // eax
  __int64 *v4; // rcx
  __int64 v5; // rcx
  volatile int *v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  v2 = (void **)((char *)this + 888);
  if ( *((_QWORD *)this + 111) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 112) + 64LL))(*((_QWORD *)this + 112));
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v3,
        v7);
  }
  v4 = (__int64 *)*((_QWORD *)this + 115);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
      v4,
      *((__int64 **)this + 116));
    std::_Deallocate<16>(
      *((void **)this + 115),
      (struct std::nothrow_t *)((*((_QWORD *)this + 117) - *((_QWORD *)this + 115)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 115) = 0LL;
    *((_QWORD *)this + 116) = 0LL;
    *((_QWORD *)this + 117) = 0LL;
  }
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 113);
  v5 = *((_QWORD *)this + 112);
  if ( v5 )
  {
    *((_QWORD *)this + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(v2);
  ManipulationInjector::~ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IContextualProcessor,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v6);
}
