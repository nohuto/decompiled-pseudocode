/*
 * XREFs of ?IsRemoteDesktopDisconnecting@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x1804816F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C1804 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopController::IsRemoteDesktopDisconnecting(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        unsigned __int8 *a3)
{
  __int64 (__fastcall **v6)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rax
  int v7; // eax
  int v8; // ebx
  __int64 *v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 *Ptr; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v21[4]; // [rsp+40h] [rbp-40h] BYREF
  GUID v22; // [rsp+50h] [rbp-30h] BYREF
  GUID v23; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 14);
  v6 = *a2;
  v18 = 0LL;
  v7 = (*v6)(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
LABEL_3:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v8;
  }
  v19 = 0LL;
  v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v18 + 24LL))(v18, &v23);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    (__int64 *)&v19,
    v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v17 = 0LL;
  v11 = (__int64)v19;
  v12 = (**v19)(v19, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v17);
  if ( v12 < 0 )
  {
    v13 = 530LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12);
    if ( v17 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v12;
  }
  v21[0] = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v17 + 56LL))(v17, v21);
  if ( v12 < 0 )
  {
    v13 = 532LL;
    goto LABEL_8;
  }
  if ( v21[0] )
  {
    v23 = GUID_NULL;
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 32LL))(v11, &v23);
    if ( v8 < 0 )
    {
      v14 = 537LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v8);
      if ( v17 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      goto LABEL_3;
    }
    Ptr = (__int64 *)this[15].Ptr;
    v16 = *Ptr;
    v22 = v23;
    v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, unsigned __int8 *))(v16 + 216))(Ptr, &v22, a3);
    if ( v8 < 0 )
    {
      v14 = 538LL;
      goto LABEL_18;
    }
  }
  else
  {
    *a3 = 0;
  }
  if ( v17 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
