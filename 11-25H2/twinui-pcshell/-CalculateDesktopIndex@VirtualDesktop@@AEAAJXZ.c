/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1800BBA04
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1800BBD94 (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180485320 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1800A2E44 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800A2ED0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B4014 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802CA968 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(VirtualDesktop *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r15
  __int64 v7; // rdi
  struct IUnknown *v8; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // esi
  _BYTE v15[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  int v22; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+40h] BYREF
  struct IUnknown *v24; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+50h] BYREF

  wil::AcquireSRWLockExclusive(v15, (char *)this + 280);
  v25 = 0LL;
  v2 = *((_QWORD *)this + 15);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v4 = v3(v2, &v25);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0;
    v7 = 0LL;
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
      v16,
      v25);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
      (__int64)v16,
      (__int64)&v17);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(v16, &v19);
    while ( v17 != v19 || v18[1] != v20[1] )
    {
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
        &v17,
        &v24);
      v22 = 0;
      v23 = 0LL;
      v8 = v24;
      lpVtbl = v24->lpVtbl;
      v23 = 0LL;
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
              v24,
              &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
              &v23);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x140,
          (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v15);
        return v11;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 56LL))(v23, &v22);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x141,
          (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
        v5 = v13;
        goto LABEL_17;
      }
      if ( !v22 )
      {
        if ( SHIsSameObject(v8, *((struct IUnknown **)this + 14)) )
        {
          v6 = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          break;
        }
        ++v7;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      ++v17;
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
    if ( !v6 )
    {
      v5 = -2147319765;
      goto LABEL_17;
    }
    *((_QWORD *)this + 18) = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v15);
    return v5;
  }
}
