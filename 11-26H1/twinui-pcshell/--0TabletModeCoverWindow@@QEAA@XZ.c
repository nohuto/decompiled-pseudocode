/*
 * XREFs of ??0TabletModeCoverWindow@@QEAA@XZ @ 0x1800D48AC
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1800D45E8 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$Selector@VCWRLObjectWithGITSite@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800D4D74 (--0-$Selector@VCWRLObjectWithGITSite@@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
TabletModeCoverWindow *__fastcall TabletModeCoverWindow::TabletModeCoverWindow(TabletModeCoverWindow *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi

  Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>>>::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>>>();
  v3 = (_QWORD *)(v2 + 40);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 40));
  *((_DWORD *)this + 23) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *v3 = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITabletModeCoverWindow,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `ITabletModeCoverWindow'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *v3 = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITabletModeCoverWindow,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>'};
  *((_QWORD *)this + 9) = &TabletModeCoverWindow::`vftable'{for `ITabletModeCoverWindow'};
  *((_QWORD *)this + 10) = &TabletModeCoverWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>'};
  *((_QWORD *)this + 12) = &TabletModeCoverWindow::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 14);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_BYTE *)this + 220) = 0;
  return this;
}
