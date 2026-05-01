/*
 * XREFs of ?get_CurrentVirtualDesktop@VirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007BA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007BBA4 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopCollection::get_CurrentVirtualDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 Ptr; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int WinRTDesktopForInternalDesktopInternal; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktop *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = this + 41;
  AcquireSRWLockShared(this + 41);
  Ptr = (__int64)this[14].Ptr;
  v13 = Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( !Ptr )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v6 = *(_QWORD *)Ptr;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(v6 + 48))(Ptr, &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v7);
    if ( v12 )
      (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v12 + 16LL))(v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 16LL))(Ptr);
    return v8;
  }
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopCollection::GetWinRTDesktopForInternalDesktopInternal(
                                             (VirtualDesktopCollection *)this,
                                             v12,
                                             a2);
  v8 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    return v8;
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v12 + 16LL))(v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return 0LL;
}
