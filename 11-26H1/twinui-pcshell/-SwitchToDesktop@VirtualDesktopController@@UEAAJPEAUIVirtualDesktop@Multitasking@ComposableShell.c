/*
 * XREFs of ?SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1804933F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopController::SwitchToDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  int v4; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  PVOID v11; // rcx
  __int64 (__fastcall ***Ptr)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD); // rdi
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  GUID v24; // [rsp+50h] [rbp-30h] BYREF
  GUID v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 17);
  if ( !this[11].Ptr )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_3:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v4;
  }
  v18 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v7 = v6(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v18);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    goto LABEL_3;
  }
  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v18 + 24LL))(v18, &v25);
  v9 = *v8;
  *v8 = 0LL;
  v21 = v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  v19 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
         v9,
         &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
         &v19);
  if ( v4 < 0 )
  {
    v10 = 163LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v4);
LABEL_12:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    goto LABEL_8;
  }
  v23 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v23);
  if ( v4 < 0 )
  {
    v10 = 166LL;
    goto LABEL_11;
  }
  if ( !v23 )
  {
    v22 = 0LL;
    Ptr = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[11].Ptr;
    v13 = **Ptr;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v4 = v13(Ptr, &GUID_53f5ca0b_158f_4124_900c_057158060b27, &v22);
    if ( v4 >= 0 )
    {
      v15 = v22;
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 176LL);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v18 + 24LL))(v18, &v25);
      v4 = v16(v15, *v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      if ( v4 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        goto LABEL_26;
      }
      v14 = 178LL;
    }
    else
    {
      v14 = 177LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    goto LABEL_12;
  }
  v25 = GUID_NULL;
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v9 + 32LL))(v9, &v25);
  if ( v4 < 0 )
  {
    v10 = 171LL;
    goto LABEL_11;
  }
  v11 = this[18].Ptr;
  v24 = v25;
  v4 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, &v24, 0LL);
  if ( v4 < 0 )
  {
    v10 = 172LL;
    goto LABEL_11;
  }
LABEL_26:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
