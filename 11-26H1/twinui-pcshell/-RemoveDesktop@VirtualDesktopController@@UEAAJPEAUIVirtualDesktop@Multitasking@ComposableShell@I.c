/*
 * XREFs of ?RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180492EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopController::RemoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rdx
  PVOID v16; // rcx
  __int64 (__fastcall *v17)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  __int64 v18; // rdx
  PVOID Ptr; // rsi
  __int64 (__fastcall *v20)(PVOID, _QWORD, __int64); // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-48h] BYREF
  int v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  GUID v29; // [rsp+50h] [rbp-30h] BYREF
  GUID v30; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 17);
  if ( !this[11].Ptr )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_29:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v6;
  }
  v23 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v8 = v7(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v23);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v8);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    goto LABEL_29;
  }
  v25 = 0LL;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v23 + 24LL))(v23, &v29);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    (__int64 *)&v25,
    v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  v24 = 0LL;
  v10 = (__int64)v25;
  v11 = *v25;
  v24 = 0LL;
  v12 = (*v11)(v25, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v24);
  if ( v12 < 0 )
  {
    v13 = 224LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v12;
  }
  v27 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 56LL))(v24, &v27);
  if ( v12 < 0 )
  {
    v13 = 227LL;
    goto LABEL_7;
  }
  if ( !v27 )
  {
    v28 = 0LL;
    v17 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v6 = v17(
           (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v28);
    if ( v6 >= 0 )
    {
      Ptr = this[11].Ptr;
      v20 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 104LL);
      v21 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v28 + 24LL))(v28, &v30);
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v23 + 24LL))(v23, &v29);
      v6 = v20(Ptr, *v22, v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      if ( v6 >= 0 )
      {
LABEL_26:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        goto LABEL_27;
      }
      v18 = 240LL;
    }
    else
    {
      v18 = 238LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_26;
  }
  v30 = GUID_NULL;
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v10 + 32LL))(v10, &v30);
  if ( v6 < 0 )
  {
    v15 = 232LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v6);
LABEL_27:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    goto LABEL_28;
  }
  v16 = this[18].Ptr;
  v29 = v30;
  v6 = (*(__int64 (__fastcall **)(PVOID, GUID *))(*(_QWORD *)v16 + 80LL))(v16, &v29);
  if ( v6 < 0 )
  {
    v15 = 233LL;
    goto LABEL_15;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
