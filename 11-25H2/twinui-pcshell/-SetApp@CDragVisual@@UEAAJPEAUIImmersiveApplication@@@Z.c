/*
 * XREFs of ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18051ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800399F8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x180506484 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::SetApp(CDragVisual *this, struct IUnknown *a2)
{
  IUnknown *v4; // rbx
  struct IApplicationView **v5; // r9
  int ViewForApplication; // ebx
  struct IAppLayout **v7; // r8
  AppLayoutHelpers *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v4 = (IUnknown *)*((_QWORD *)this - 1);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(v4, a2, (struct IImmersiveApplication *)&v9, v5);
  if ( ViewForApplication >= 0 )
    ViewForApplication = AppLayoutHelpers::BuildSingleViewLayout(v9, (struct IApplicationView *)&v10, v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  if ( ViewForApplication >= 0 )
    ViewForApplication = (*(__int64 (__fastcall **)(CDragVisual *, __int64, _QWORD))(*(_QWORD *)this + 72LL))(
                           this,
                           v10,
                           0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return (unsigned int)ViewForApplication;
}
