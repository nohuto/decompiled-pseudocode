/*
 * XREFs of _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x18030C544
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::Invoke @ 0x18030CB70 (CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003AFF0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180149F50 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x180240E20 (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator()(__int64 a1)
{
  int ViewForApplication; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(
                         (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 136LL),
                         *(struct IImmersiveApplication **)a1,
                         &v8);
  if ( ViewForApplication >= 0 )
  {
    v9 = 0LL;
    v3 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v8,
           &v9);
    ViewForApplication = v3;
    if ( v3 >= 0 )
    {
      LOBYTE(v4) = *(_DWORD *)(a1 + 16) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v4);
      v3 = CApplicationViewManager::RaiseApplicationViewChanged(
             *(_QWORD *)(a1 + 32) + 136LL,
             (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))v8,
             6u,
             0LL);
      ViewForApplication = v3;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
        goto LABEL_8;
      }
      v5 = 746LL;
    }
    else
    {
      v5 = 743LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ViewForApplication;
}
