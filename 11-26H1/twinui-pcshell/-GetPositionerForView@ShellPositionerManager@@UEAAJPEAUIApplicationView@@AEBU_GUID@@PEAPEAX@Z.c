/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180061130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v8; // ebx
  int PositionerPriorityForView; // eax
  __int64 v10; // rsi
  void *v11; // rcx
  IUnknown *v12; // rbx
  int v13; // eax
  void *v14; // rcx
  IUnknown *v15; // rcx
  IUnknown *v17; // rcx
  IUnknown *v18; // rcx
  IUnknown *v19; // rcx
  HRESULT Service; // eax
  HRESULT v21; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  IUnknown *punk; // [rsp+68h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  punk = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, &punk);
  if ( (v8 & 0x80000000) != 0 )
  {
    v17 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v17->lpVtbl->Release)(v17);
    }
    return v8;
  }
  ppvOut = 0LL;
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 88),
                                a2,
                                (struct IShellPositionerPriority **)&ppvOut);
  v8 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v8);
    v19 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
    }
    return v8;
  }
  v10 = (*(int (__fastcall **)(void *))(*(_QWORD *)ppvOut + 24LL))(ppvOut);
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = punk;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         v12,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut) < 0 )
  {
    Service = IUnknown_QueryService(v12, &c_positionersSIDs + v10, a3, a4);
    v21 = Service;
    if ( Service >= 0 )
      goto LABEL_7;
    v8 = -2147467262;
    if ( Service != -2147467262 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Service);
      v8 = v21;
    }
    goto LABEL_15;
  }
  v13 = (*(__int64 (__fastcall **)(void *, _QWORD, const struct _GUID *, void **))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          (unsigned int)v10,
          a3,
          a4);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_15:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v8);
    v18 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v18->lpVtbl->Release)(v18);
    }
    return v8;
  }
LABEL_7:
  v14 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  return 0LL;
}
