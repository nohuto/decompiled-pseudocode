/*
 * XREFs of CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18030B810
 * Callers:
 *     ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x18030CAD0 (-HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C0D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18007C0D0.c)
 *     ??$As@UIApplicationViewSerialization@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewSerialization@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B9F98 (--$As@UIApplicationViewSerialization@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microso.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E19F0 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CreateAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___ @ 0x18030B378 (CreateAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___.c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::_lambda_90c64e6b4e677faa5e1350e6dea894c9_ @ 0x18030BA04 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--_lambda_90c64e6b4e677faa5e1350e6dea894c9_.c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::__lambda_90c64e6b4e677faa5e1350e6dea894c9_ @ 0x18030BBB8 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--__lambda_90c64e6b4e677faa5e1350e6dea894c9_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___(
        __int64 a1,
        __int64 *a2,
        int a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v6; // ebx
  int v7; // eax
  volatile int *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-40h] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v16; // [rsp+A0h] [rbp+28h] BYREF
  __int64 *v17; // [rsp+A8h] [rbp+30h]
  int v18; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+40h] BYREF

  v18 = a3;
  v17 = a2;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 600);
  v13 = v5;
  if ( v5 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
    v16 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationViewSerialization>(&v13, &v16);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v19 = a1;
      Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(&v19, v8);
      v9 = lambda_90c64e6b4e677faa5e1350e6dea894c9_::_lambda_90c64e6b4e677faa5e1350e6dea894c9_(
             (unsigned int)v14,
             (_DWORD)a2,
             (unsigned int)&v18,
             (unsigned int)&v19,
             a1);
      CreateAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9_(&v12, v9);
      lambda_90c64e6b4e677faa5e1350e6dea894c9_::__lambda_90c64e6b4e677faa5e1350e6dea894c9_(v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v12);
      v6 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EC,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(a1);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DD,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  else
  {
    v6 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000CLL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v6;
}
