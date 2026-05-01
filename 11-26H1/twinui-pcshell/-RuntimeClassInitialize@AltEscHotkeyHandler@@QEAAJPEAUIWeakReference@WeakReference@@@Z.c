/*
 * XREFs of ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804B756C
 * Callers:
 *     ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x1804B6D14 (--$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800267A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B7164 (-CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall AltEscHotkeyHandler::RuntimeClassInitialize(AltEscHotkeyHandler *this, struct IWeakReference *a2)
{
  HWND v3; // rdx
  HWND WorkerWindow; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, (__int64)a2);
  WorkerWindow = CImpWorkerWndProc::CreateWorkerWindow((AltEscHotkeyHandler *)((char *)this + 48), v3);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 11,
    WorkerWindow);
  if ( !*((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  if ( !RegisterHotKey(*((HWND *)this + 11), 57, 1u, 0x1Bu) )
  {
    v7 = 61LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
             v6);
  }
  if ( !RegisterHotKey(*((HWND *)this + 11), 58, 5u, 0x1Bu) )
  {
    v7 = 62LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
             v6);
  }
  return 0LL;
}
