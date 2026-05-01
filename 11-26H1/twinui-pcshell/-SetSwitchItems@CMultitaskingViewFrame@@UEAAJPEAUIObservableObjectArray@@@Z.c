/*
 * XREFs of ?SetSwitchItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804BB8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetSwitchItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 305, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 304, (__int64)a2);
  v4 = *((_QWORD *)this + 317);
  if ( !v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct IObservableObjectArray *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
