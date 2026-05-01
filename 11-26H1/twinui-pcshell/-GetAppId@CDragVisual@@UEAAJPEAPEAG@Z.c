/*
 * XREFs of ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x180540E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180541160 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::GetAppId(AppLayoutHelpers **this, unsigned __int16 **a2)
{
  struct IApplicationView **v4; // r8
  int SingleViewFromLayout; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(this[8], (struct IAppLayout *)&v10, v4);
  v6 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v7 = 907LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)SingleViewFromLayout);
    goto LABEL_6;
  }
  SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 136LL))(v10, a2);
  v6 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v7 = 908LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v6;
}
