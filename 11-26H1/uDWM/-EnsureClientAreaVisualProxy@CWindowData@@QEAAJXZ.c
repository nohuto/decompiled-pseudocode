/*
 * XREFs of ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B080 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003C7BC (-SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180081B28 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowData::EnsureClientAreaVisualProxy(CWindowData *this)
{
  struct CVisualProxy **v1; // rdi
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int VisualProxyFromSharedHandle; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct CVisualProxy **)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
    return 0LL;
  hObject = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  hObject = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v3 + 304))(v2, &hObject);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 468LL;
  }
  else
  {
    VisualProxyFromSharedHandle = CCompositor::CreateVisualProxyFromSharedHandle(
                                    *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                    hObject,
                                    v1);
    v5 = VisualProxyFromSharedHandle;
    if ( VisualProxyFromSharedHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)VisualProxyFromSharedHandle,
        v9);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v5;
    }
    v4 = CVisualProxy::SetInterpolationMode(*v1, 0xFFFFFFFFLL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return 0LL;
    }
    v8 = 475LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
    (const char *)(unsigned int)v4,
    v9);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  return v5;
}
