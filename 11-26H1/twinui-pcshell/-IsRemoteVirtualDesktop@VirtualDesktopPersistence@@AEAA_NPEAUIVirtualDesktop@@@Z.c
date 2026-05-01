/*
 * XREFs of ?IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z @ 0x180568CDC
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180568B70 (-CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180568E80 (-VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180569040 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall VirtualDesktopPersistence::IsRemoteVirtualDesktop(
        VirtualDesktopPersistence *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  __int64 (__fastcall **v2)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = HIDWORD(this);
  v9 = 0;
  v2 = *a2;
  v11 = 0LL;
  v3 = (*v2)((struct IVirtualDesktop *)a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v11);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v4,
      v7);
  v5 = v9 != 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return v5;
}
