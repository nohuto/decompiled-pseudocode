/*
 * XREFs of ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012C830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180026020 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18012CFF0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ShellPositionerManager::GetViewsForPositioner(
        __int64 a1,
        int a2,
        struct IApplicationView *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v14; // eax
  const struct _GUID *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int i; // esi
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  struct IImmersiveMonitor *v22; // r8
  struct IShellPositionerPriority *v23; // rcx
  ApplicationViewHelpers *v24; // rcx
  int v25; // eax
  void *v26; // rcx
  __int64 v27; // rcx
  void *v28; // [rsp+30h] [rbp-20h] BYREF
  ApplicationViewHelpers *v29; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v30[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v33 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v10 = v9(v8, &v33);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10);
    v12 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v11;
  }
  v32 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v32);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    return v11;
  }
  v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  v17 = CEnumerableObjectCollection::CreateInstance(v16, v15, &v28);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    goto LABEL_29;
  }
  for ( i = 0; i < v32; ++i )
  {
    v29 = 0LL;
    v19 = v33;
    v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v33 + 32LL);
    v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v29);
    if ( v20(v19, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v21) >= 0
      && (!a3 || ApplicationViewHelpers::IsViewOnMonitor(v29, a3, v22)) )
    {
      v30[0] = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
      if ( ShellPositionerManager::GetPositionerPriorityForView((ShellPositionerManager *)(a1 - 88), v29, v30) >= 0
        && (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30[0] + 24LL))(v30[0]) == a2 )
      {
        (*(void (__fastcall **)(void *, ApplicationViewHelpers *))(*(_QWORD *)v28 + 40LL))(v28, v29);
      }
      v23 = v30[0];
      if ( v30[0] )
      {
        v30[0] = 0LL;
        (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v24 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  v25 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v28)(v28, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, a4);
  v11 = v25;
  if ( v25 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v11;
}
