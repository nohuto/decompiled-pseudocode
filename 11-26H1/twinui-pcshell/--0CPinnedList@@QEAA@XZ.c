/*
 * XREFs of ??0CPinnedList@@QEAA@XZ @ 0x180688858
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@WRL@Microsoft@@QEAA@XZ @ 0x1806887C4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@.c)
 * Callees:
 *     <none>
 */

CPinnedList *__fastcall CPinnedList::CPinnedList(CPinnedList *this)
{
  CPinnedList *result; // rax

  *(_QWORD *)this = &CPinnedList::`vftable';
  *((_QWORD *)this + 1) = &CPinnedList::`vftable'{for `IContextMenu'};
  *((_QWORD *)this + 2) = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 3) = &CPinnedList::`vftable'{for `IPinnedList3'};
  *((_QWORD *)this + 4) = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 5) = &CPinnedList::`vftable'{for `IExplorerCommand'};
  *((_QWORD *)this + 6) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
