/*
 * XREFs of ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805C0950
 * Callers:
 *     ??R_lambda_2b94c938c284b16eb776d16960094630_@@QEBA@XZ @ 0x1805BFC80 (--R_lambda_2b94c938c284b16eb776d16960094630_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18009D55C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016B1DC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180299964 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1802AFECC (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802B0A18 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z @ 0x1805BBC68 (--$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z.c)
 *     ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x1805BF590 (--1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805C2B4C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ @ 0x1805C5668 (-StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarPinHelper::CanPinToTaskbar(TaskbarPinHelper *this, struct IShellItem *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  void **v7; // rax
  char v8; // bl
  DWORD v9; // edx
  struct IShellItem **v10; // r8
  struct IShellItemVtbl *lpVtbl; // rbx
  __int64 (__fastcall *v12)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *); // rdi
  int v13; // eax
  HRESULT v14; // eax
  __int64 v15; // rdx
  char v17[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-98h] BYREF
  IShellItem v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v24[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  LOBYTE(a2->lpVtbl) = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar)
    && !(unsigned int)SHWindowsPolicy(&POLID_TaskbarNoPinnedList) )
  {
    memset_0(v24, 0, 0x148uLL);
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v24,
      (__int64)"CanPinToTaskbar");
    v24[0] = &TaskbarPinningTelemetry::CanPinToTaskbar::`vftable';
    TaskbarPinningTelemetry::CanPinToTaskbar::StartActivity((TaskbarPinningTelemetry::CanPinToTaskbar *)v24);
    v23 = 0LL;
    v5 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
           &v23,
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
           0,
           (__int64)&`TaskbarPinHelper::CanPinToTaskbar'::`2'::propKeys,
           3u);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
        (const char *)(unsigned int)v5);
LABEL_25:
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v23);
      TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar((TaskbarPinningTelemetry::CanPinToTaskbar *)v24);
      return v6;
    }
    v17[0] = 0;
    v20[0] = 0;
    v18 = PKEY_AppUserModel_HostEnvironment;
    v19 = 14;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>(&v23, &v18, v20) < 0
      || (unsigned int)(v20[0] - 1) > 1 )
    {
      goto LABEL_13;
    }
    ppv = 0LL;
    v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&ppv);
    v18 = PKEY_AppUserModel_PackageInstallPath;
    v19 = 15;
    v8 = 0;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
                &v23,
                &v18,
                (unsigned __int16 **)v7) >= 0 )
    {
      if ( !ppv || (v8 = 1, !*(_WORD *)ppv) )
        v8 = 0;
      v17[0] = v8;
    }
    TaskbarPinningTelemetry::CanPinToTaskbar::ImmersiveAppInstalled<bool &>((__int64)v24, v17);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&ppv);
    if ( v8 )
    {
LABEL_13:
      v22.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
      if ( TaskbarPinHelper::GetTaskbarPinnableItem(this, &v22, v10) >= 0 )
      {
        *(_QWORD *)v20 = 0LL;
        lpVtbl = v22.lpVtbl;
        v12 = (__int64 (__fastcall *)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *))*((_QWORD *)v22.lpVtbl->QueryInterface + 3);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
        v13 = v12(lpVtbl, 0LL, &BHID_DataObject, &GUID_0000010e_0000_0000_c000_000000000046, v20);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x88,
            (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v13);
LABEL_16:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
          goto LABEL_25;
        }
        ppv = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        v14 = CoCreateInstance(&CLSID_TaskbandPin, 0LL, 1u, &GUID_bdb5b98e_c3eb_4245_a7eb_ac74965f23ad, &ppv);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 139LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
          goto LABEL_16;
        }
        v14 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 40LL))(ppv, *(_QWORD *)v20, 10LL);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 142LL;
          goto LABEL_19;
        }
        LOBYTE(a2->lpVtbl) = v14 != 1;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
    }
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24, v9);
    v6 = 0;
    goto LABEL_25;
  }
  return 2147942405LL;
}
