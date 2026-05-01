/*
 * XREFs of ?SetDesktopWallpaper@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180493320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::SetDesktopWallpaper(
        VirtualDesktopController *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        HSTRING a3)
{
  __int64 (__fastcall **v5)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, HSTRING); // rbx
  _QWORD *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  v5 = *a2;
  v15 = 0LL;
  v6 = (*v5)(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = *((_QWORD *)this + 11);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v10 + 136LL);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v16);
    v7 = v11(v10, *v12, a3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    if ( v7 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 466LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 465LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)v8);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  return (unsigned int)v7;
}
