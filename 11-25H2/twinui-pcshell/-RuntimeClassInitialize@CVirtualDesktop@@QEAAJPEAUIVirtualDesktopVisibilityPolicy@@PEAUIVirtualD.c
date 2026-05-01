/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1800E3D00
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E235C (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x1800E3B04 (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::RuntimeClassInitialize(
        CVirtualDesktop *this,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct IVirtualDesktopVisibilityPolicy **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((struct IVirtualDesktopLock **)this + 11) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVirtualDesktopLock *))(*(_QWORD *)a3 + 8LL))(a3);
    v7 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 12) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v8 )
    v8 = *((_QWORD *)this + 13) - *(_QWORD *)GUID_NULL.Data4;
  if ( v8 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
