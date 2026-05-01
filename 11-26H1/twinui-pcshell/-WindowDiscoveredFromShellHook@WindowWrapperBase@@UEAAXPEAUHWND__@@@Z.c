/*
 * XREFs of ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18043F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::WindowDiscoveredFromShellHook(WindowWrapperBase *this, HWND a2)
{
  int v2; // ebx
  char *v3; // rdi
  __int64 v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (int)a2;
  v3 = (char *)this - 16;
  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
    WindowWrapperBase::SetWindowId((__int64)v3, v2, 0);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x600,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v5);
  }
}
