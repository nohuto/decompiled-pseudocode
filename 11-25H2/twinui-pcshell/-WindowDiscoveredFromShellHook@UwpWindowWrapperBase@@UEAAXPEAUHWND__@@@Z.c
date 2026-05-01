/*
 * XREFs of ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180110A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??$WindowEventDispatcher_WindowDiscoveredFromShellHook@AEBIAEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEBIAEAI1@Z @ 0x1801115B4 (--$WindowEventDispatcher_WindowDiscoveredFromShellHook@AEBIAEAIAEAI@ViewManagerInteropTraceLoggi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::WindowDiscoveredFromShellHook(UwpWindowWrapperBase *this, HWND a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v7 = v2;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowDiscoveredFromShellHook<unsigned int const &,unsigned int &,unsigned int &>(
      &v7,
      (char *)this + 280,
      (char *)this + 336);
    UwpWindowWrapperBase::SetWindowId((char *)this - 16, v2, 0LL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x618,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v5);
  }
}
