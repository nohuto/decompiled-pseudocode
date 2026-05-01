/*
 * XREFs of ??0CTaskbandPin@@QEAA@XZ @ 0x1806627A4
 * Callers:
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@WRL@Microsoft@@QEAA@XZ @ 0x1806626A4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@.c)
 */

CTaskbandPin *__fastcall CTaskbandPin::CTaskbandPin(CTaskbandPin *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>(this);
  *(_QWORD *)this = &CTaskbandPin::`vftable'{for `Microsoft::WRL::Details::Selector<CPinnedList,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  *((_QWORD *)this + 1) = &CTaskbandPin::`vftable'{for `IContextMenu'};
  *((_QWORD *)this + 2) = &CTaskbandPin::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `IPinnedList3'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 5) = &CTaskbandPin::`vftable'{for `IExplorerCommand'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 14) = &CTaskbandPin::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStartMenuPinnedList>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  return this;
}
