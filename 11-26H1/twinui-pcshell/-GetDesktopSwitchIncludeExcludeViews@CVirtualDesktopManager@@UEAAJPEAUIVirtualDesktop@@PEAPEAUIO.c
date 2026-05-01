/*
 * XREFs of ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x180132C90
 * Callers:
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x180553170 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAPEA.c)
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x180553180 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$copy_to@UIVirtualDesktop@@@?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013331C (--$copy_to@UIVirtualDesktop@@@-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ??$CopyTo@UIObjectArray@@@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJPEAPEAUIObjectArray@@@Z @ 0x1801B366C (--$CopyTo@UIObjectArray@@@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJPEAPEAUIObjectArray@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IObjectArray **a3,
        struct IObjectArray **a4)
{
  struct IVirtualDesktop *v5; // rsi
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, struct IVirtualDesktop *, __int64 *, char *); // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64 *); // rbx
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdi
  char v25; // r12
  char v26; // si
  int v27; // eax
  unsigned int v28; // r15d
  int v29; // esi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // [rsp+38h] [rbp-69h] BYREF
  void *v37; // [rsp+40h] [rbp-61h] BYREF
  __int64 v38; // [rsp+48h] [rbp-59h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-51h] BYREF
  __int64 v40; // [rsp+58h] [rbp-49h] BYREF
  __int64 v41; // [rsp+60h] [rbp-41h] BYREF
  __int64 v42; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-31h] BYREF
  __int64 v44; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-21h] BYREF
  __int64 v46; // [rsp+88h] [rbp-19h] BYREF
  __int64 *v47; // [rsp+90h] [rbp-11h]
  unsigned int v48; // [rsp+98h] [rbp-9h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v50; // [rsp+A8h] [rbp+7h]
  ULONGLONG TickCount64; // [rsp+B0h] [rbp+Fh] BYREF
  ULONGLONG v52[8]; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  char v54; // [rsp+108h] [rbp+67h] BYREF
  struct IVirtualDesktop *v55; // [rsp+110h] [rbp+6Fh]
  struct IObjectArray **v56; // [rsp+118h] [rbp+77h]

  v56 = a3;
  v55 = a2;
  v5 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  if ( !*((_QWORD *)this + 13) )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147549448LL;
  }
  v36 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v36);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x350,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_67:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
LABEL_68:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v11;
  }
  v37 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
  v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v37);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_66:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
    goto LABEL_67;
  }
  v38 = 0LL;
  v54 = 0;
  v15 = *((_QWORD *)this + 16);
  v16 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, __int64 *, char *))(*(_QWORD *)v15 + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v11 = v16(v15, v5, &v38, &v54);
  if ( v11 < 0 )
  {
    v17 = 855LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_65:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    goto LABEL_66;
  }
  TickCount64 = GetTickCount64();
  if ( v54 )
  {
    if ( v38 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v38 + 184LL))(v38, &TickCount64);
      if ( v11 < 0 )
      {
        v17 = 860LL;
        goto LABEL_11;
      }
    }
  }
  v40 = 0LL;
  v18 = *((_QWORD *)this + 13);
  v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  v11 = v19(v18, &v40);
  if ( v11 < 0 )
  {
    v20 = 864LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_64:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    goto LABEL_65;
  }
  v21 = v40;
  v42 = v40;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v42);
  v43 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v43);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v22);
  v45 = 0;
  v46 = 0LL;
  v47 = &v42;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v45);
  v48 = v43;
  v49 = 0LL;
  v50 = &v42;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v48);
  while ( v45 != v48 || v47 != v50 )
  {
    v23 = v46;
    v44 = v46;
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
    v41 = 0LL;
    if ( !*((_QWORD *)this + 22) )
    {
      v11 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x365,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)0x8007139FLL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
      goto LABEL_64;
    }
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::copy_to<IVirtualDesktop>((char *)this + 176, &v41);
    v24 = v41;
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            v23,
            v41);
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            v23,
            v5);
    if ( v54 )
    {
      v52[0] = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v23 + 184LL))(v23, v52);
      v28 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36D,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v27);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        return v28;
      }
      if ( v52[0] > TickCount64 )
        v26 = 0;
    }
    if ( v25 != v26 )
    {
      if ( v26 )
      {
        v29 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 40LL))(v36, v23);
        if ( v29 < 0 )
        {
          v30 = 897LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v29);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
          if ( SRWLock )
            ReleaseSRWLockShared(SRWLock);
          return (unsigned int)v29;
        }
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v37 + 40LL))(v37, v23);
        if ( v29 < 0 )
        {
          v30 = 901LL;
          goto LABEL_35;
        }
      }
    }
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    ++v45;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v45);
    v5 = v55;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
  v31 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v36)(
          v36,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          v56);
  v11 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v31);
    v32 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
    }
    goto LABEL_68;
  }
  v11 = Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo<IObjectArray>(&v37, a4);
  if ( v11 < 0 )
  {
    v20 = 907LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
