/*
 * XREFs of ?GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180506C50
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1804F3980 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::GetAppViewCloseOverrideOperation(
        WindowArrangementView *this,
        __int64 (__fastcall ***a2)(struct ITabletModePositioner *, GUID *, __int64 *),
        struct IApplicationView *a3,
        struct IAppLayoutOperation **a4)
{
  __int64 (__fastcall *v8)(struct ITabletModePositioner *, GUID *, __int64 *); // rbx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v17; // [rsp+78h] [rbp+38h] BYREF
  struct IApplicationView *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v18 = a3;
  *a4 = 0LL;
  v14 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v9 = v8((struct ITabletModePositioner *)a2, &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v19 = 0LL;
    v11 = v14;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    v10 = v12(v11, &v19);
    if ( v10 < 0
      || (v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView *, _QWORD, struct IAppLayoutOperation **))(*(_QWORD *)v19 + 24LL))(
                  v19,
                  *((_QWORD *)this + 14),
                  a3,
                  0LL,
                  a4),
          v10 < 0) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    else
    {
      v17 = 1;
      v15 = *((_QWORD *)this + 14);
      TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        &v15,
        &v18,
        &v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      v10 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x607,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return (unsigned int)v10;
}
