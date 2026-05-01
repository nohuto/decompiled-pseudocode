/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@WRL@Microsoft@@QEAA@XZ @ 0x1806887C4
 * Callers:
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x1806888C4 (--0CTaskbandPin@@QEAA@XZ.c)
 * Callees:
 *     ??0CPinnedList@@QEAA@XZ @ 0x180688858 (--0CPinnedList@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CPinnedList *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>(
        CPinnedList *a1)
{
  __int64 v2; // rcx

  CPinnedList::CPinnedList(a1);
  *(_DWORD *)(v2 + 124) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::Selector<CPinnedList,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  *(_QWORD *)(v2 + 8) = &CTaskbandPin::`vftable'{for `IContextMenu'};
  *(_QWORD *)(v2 + 16) = &CTaskbandPin::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *(_QWORD *)(v2 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `IPinnedList3'};
  *(_QWORD *)(v2 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *(_QWORD *)(v2 + 40) = &CTaskbandPin::`vftable'{for `IExplorerCommand'};
  *(_QWORD *)(v2 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *(_QWORD *)(v2 + 112) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStartMenuPinnedList>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
