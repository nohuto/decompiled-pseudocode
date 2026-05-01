/*
 * XREFs of ??$Make@VCRotationManagerSync@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRotationManagerSync@@@12@XZ @ 0x1801DF534
 * Callers:
 *     ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DF494 (-s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801DF670 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::FtmBase **__fastcall Microsoft::WRL::Details::Make<CRotationManagerSync,>(Microsoft::WRL::FtmBase **a1)
{
  Microsoft::WRL::FtmBase *v2; // rax
  Microsoft::WRL::FtmBase *v3; // rbx

  *a1 = 0LL;
  v2 = (Microsoft::WRL::FtmBase *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v2);
    Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IRotationManagerSync,IShellRotationManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IRotationManagerSync,IShellRotationManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>((char *)v3 + 32);
    *((_DWORD *)v3 + 23) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>'};
    *((_QWORD *)v3 + 4) = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IRotationManagerSync,IShellRotationManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>'};
    *((_QWORD *)v3 + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `IRotationManagerSync'};
    *((_QWORD *)v3 + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellRotationManager>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>'};
    *((_QWORD *)v3 + 4) = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IRotationManagerSync,IShellRotationManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>'};
    *((_QWORD *)v3 + 9) = &CRotationManagerSync::`vftable'{for `IRotationManagerSync'};
    *((_QWORD *)v3 + 10) = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellRotationManager>'};
    *((_QWORD *)v3 + 12) = 0LL;
    *((_WORD *)v3 + 52) = 1;
    *(_QWORD *)((char *)v3 + 108) = 0LL;
    *((_WORD *)v3 + 58) = 1;
    *((_QWORD *)v3 + 15) = 0LL;
    *((_BYTE *)v3 + 128) = 0;
    *((_DWORD *)v3 + 33) = -1;
    *((_QWORD *)v3 + 17) = 0LL;
    *((_QWORD *)v3 + 18) = 0LL;
    *((_QWORD *)v3 + 19) = 0LL;
    *((_QWORD *)v3 + 20) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
