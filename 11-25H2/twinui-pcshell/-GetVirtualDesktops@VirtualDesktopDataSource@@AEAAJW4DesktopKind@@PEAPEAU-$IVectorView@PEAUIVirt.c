/*
 * XREFs of ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18047F244
 * Callers:
 *     ?GetRemoteDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18047F190 (-GetRemoteDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Multi.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1804802B0 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1800A2E44 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800A2ED0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B4014 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ??$CreateExternalObjectVector@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@1234@@Z @ 0x1802014FC (--$CreateExternalObjectVector@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V-.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802CA968 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18047F8C8 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall VirtualDesktopDataSource::GetVirtualDesktops(RTL_SRWLOCK *this, int a2, _QWORD *a3)
{
  __int64 *Ptr; // rcx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  const char *v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  struct IVirtualDesktop *v20; // rdi
  __int64 (__fastcall **v21)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  unsigned int v25; // esi
  int WinRTDesktopForInternalDesktopInternal; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-88h] BYREF
  __int64 v31; // [rsp+28h] [rbp-80h] BYREF
  struct IVirtualDesktop *v32; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v33; // [rsp+38h] [rbp-70h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 v36[2]; // [rsp+58h] [rbp-50h] BYREF
  int v37; // [rsp+68h] [rbp-40h] BYREF
  __int64 v38[7]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v40; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+20h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 35);
  Ptr = (__int64 *)this[15].Ptr;
  if ( !Ptr )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147947423LL;
  }
  v41 = 0LL;
  v8 = *Ptr;
  v41 = 0LL;
  v9 = *(__int64 (**)(void))(v8 + 56);
  try
  {
    v10 = v9();
    v13 = v10;
    if ( v10 >= 0 )
    {
      v42 = 0LL;
      v15 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>>(
              v11,
              &v42,
              v12);
      v16 = v15;
      if ( v15 >= 0 )
      {
        details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
          (__int64)v34,
          v41);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
          (__int64)v34,
          (__int64)&v35);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
          (__int64)v34,
          (__int64)&v37);
        v17 = v42;
        while ( 1 )
        {
          if ( v35 == v37 && v36[1] == v38[1] )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
            v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 64LL))(v17, a3);
            v19 = v18;
            if ( v18 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( SRWLock )
                ReleaseSRWLockShared(SRWLock);
              return 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE0,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)v18);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( SRWLock )
                ReleaseSRWLockShared(SRWLock);
              return v19;
            }
          }
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
            (__int64)&v35,
            (__int64 *)&v32);
          v40 = 0;
          v31 = 0LL;
          v20 = v32;
          v21 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v32;
          v31 = 0LL;
          v22 = (*v21)(v32, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v31);
          v23 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD2,
              (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)v22);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            if ( SRWLock )
              ReleaseSRWLockShared(SRWLock);
            return v23;
          }
          v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 56LL))(v31, &v40);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD3,
              (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
              (const char *)(unsigned int)v24);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
            if ( SRWLock )
              ReleaseSRWLockShared(SRWLock);
            return v25;
          }
          if ( (a2 != 1 || v40) && (a2 || !v40) )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
            v33 = 0LL;
            WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                                       (VirtualDesktopDataSource *)this,
                                                       v20,
                                                       &v33);
            v27 = WinRTDesktopForInternalDesktopInternal;
            if ( WinRTDesktopForInternalDesktopInternal < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDC,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( SRWLock )
                ReleaseSRWLockShared(SRWLock);
              return v27;
            }
            v28 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v17 + 104LL))(
                    v17,
                    v33);
            v29 = v28;
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDD,
                (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                (const char *)(unsigned int)v28);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v38);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
              if ( SRWLock )
                ReleaseSRWLockShared(SRWLock);
              return v29;
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
          }
          else
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
          ++v35;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v35);
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = v13;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE3,
                           (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                           v14);
  }
  return result;
}
