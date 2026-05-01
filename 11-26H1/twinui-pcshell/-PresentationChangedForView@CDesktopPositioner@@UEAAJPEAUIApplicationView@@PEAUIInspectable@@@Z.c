/*
 * XREFs of ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180510FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18008C738 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800AF8BC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805109C8 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::PresentationChangedForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IPresentationRequestedArgs *v11; // [rsp+50h] [rbp-49h] BYREF
  int v12; // [rsp+58h] [rbp-41h] BYREF
  int v13; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+60h] [rbp-39h] BYREF
  int v15; // [rsp+64h] [rbp-35h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+68h] [rbp-31h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT v18; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v19; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v20; // [rsp+A0h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  lpVtbl = a3->lpVtbl;
  v11 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IPresentationRequestedArgs **))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v11) < 0 )
    goto LABEL_13;
  v15 = 0;
  v21 = 0LL;
  v14 = 0;
  v13 = 0;
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 72LL))(v11, &v13);
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 88LL))(v11, &v14);
  v12 = 0;
  (*(__int64 (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 80LL))(v11, &v12);
  v17[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
  v7 = v6(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v20 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v17[0] + 24LL))(v17[0], &v20);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 693LL;
      goto LABEL_6;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    v18 = v20;
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                (CDesktopPositioner *)((char *)this - 144),
                v11,
                &v18,
                &v21,
                (enum TRY_POSITION_VIEW_FLAGS *)&v15,
                &v16) >= 0 )
    {
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>((ApplicationViewOperation **)&v18);
      if ( !*(_QWORD *)&v18.left )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BD,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18.left);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        goto LABEL_10;
      }
      v19 = v21;
      CDesktopPositioner::PositionViewWithOptions(
        (__int64)this - 144,
        a2,
        &v19,
        v15,
        *(__int64 *)&v18.left,
        8,
        (__int64)v16);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18.left);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v9 = 690LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return v8;
}
