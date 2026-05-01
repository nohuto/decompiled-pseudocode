/*
 * XREFs of ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x1804AB340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AAE2C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPPIAllUpViewController::IsDraggable(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned int v3; // esi
  char v4; // bp
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 (__fastcall ****v7)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v8; // rdx
  char v9; // bl
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v13 = 0LL;
  v11[0] = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v6 = v5(a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v13);
  if ( v6 >= 0 )
  {
    v7 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(
                                                                                   v13,
                                                                                   &v14);
    v4 = 1;
    v9 = 1;
    if ( TabletModePositionerHelpers::IsOperableView(*v7, v8) )
      goto LABEL_5;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  v9 = 0;
LABEL_5:
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  if ( v9 )
    v3 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v3;
}
