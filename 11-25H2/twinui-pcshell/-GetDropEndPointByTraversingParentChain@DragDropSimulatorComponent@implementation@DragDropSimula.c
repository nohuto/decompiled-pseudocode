/*
 * XREFs of ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x180555C00
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801E81FC (--0-$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$FailureTrace@AEAY0CA@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CA@$$CBD$$QEAJ@Z @ 0x180554230 (--$FailureTrace@AEAY0CA@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CA@$$CBD$$QEAJ@Z.c)
 *     ??1?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@$$T@std@@QEAA@XZ @ 0x180554BAC (--1-$tuple@V-$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@UIDropTarg.c)
 *     ?GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$com_ptr_t@UIDragDropExtensionForOLE@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180555B68 (-GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x180557BE0 (-TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
HWND *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDropEndPointByTraversingParentChain(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *a1,
        HWND *a2,
        HWND a3)
{
  DWORD v6; // ebx
  ATOM v7; // ax
  HANDLE PropW; // rax
  __int64 v9; // rax
  HWND Parent; // rax
  __int64 *v11; // rcx
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionPoint(
    a1,
    (LPVOID *)&v15);
  dwProcessId = 0;
  GetWindowThreadProcessId(a3, &dwProcessId);
  v6 = dwProcessId;
  while ( a3 )
  {
    DragDropSimulatorTelemetryProvider::TraceWindowInfo(a3);
    v7 = *((_WORD *)a1 + 52);
    if ( !v7 )
    {
      v7 = GlobalAddAtomW(L"OleEndPointID");
      *((_WORD *)a1 + 52) = v7;
    }
    PropW = GetPropW(a3, (LPCWSTR)v7);
    if ( PropW )
    {
      LODWORD(v19) = 0;
      v14 = 0LL;
      if ( (int)InternalGetWindowPropInterface2(a3, PropW, 0LL, &GUID_00000160_0000_0000_c000_000000000046, &v14, &v19) >= 0
        && v14 )
      {
        *a2 = a3;
        v16 = 0LL;
        a2[1] = 0LL;
        wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
          (__int64 *)a2 + 2,
          &v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
        goto LABEL_18;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    }
    v13 = 0LL;
    v9 = *v15;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, HWND, _QWORD, __int64 *))(v9 + 40))(v15, a3, 0LL, &v13) >= 0 && v13 )
    {
      *a2 = a3;
      wil::com_ptr_t<IDropTarget,wil::err_exception_policy>::com_ptr_t<IDropTarget,wil::err_exception_policy>(
        (__int64 *)a2 + 1,
        &v13);
      v19 = 0LL;
      a2[2] = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      v11 = &v13;
      goto LABEL_17;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    Parent = GetParent(a3);
    a3 = Parent;
    if ( Parent )
    {
      LODWORD(v19) = 0;
      GetWindowThreadProcessId(Parent, (LPDWORD)&v19);
      if ( (_DWORD)v19 == v6 )
        continue;
    }
    a3 = 0LL;
  }
  LODWORD(v19) = -2147467259;
  DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[32],long>();
  v17[0] = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  *a2 = 0LL;
  v17[1] = 0LL;
  a2[1] = 0LL;
  v17[2] = 0LL;
  a2[2] = 0LL;
  std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,std::nullptr_t>::~tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,std::nullptr_t>((__int64)v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  v11 = &v16;
LABEL_17:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
LABEL_18:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  return a2;
}
