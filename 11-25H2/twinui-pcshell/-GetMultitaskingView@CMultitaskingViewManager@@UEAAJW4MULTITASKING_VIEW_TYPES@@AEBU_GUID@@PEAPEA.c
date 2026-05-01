/*
 * XREFs of ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180022320
 * Callers:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA30 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18048F740 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18048FA40 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18002084C (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewManager::GetMultitaskingView(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r13d
  __int64 v8; // rcx
  char v9; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int MTVHostType; // eax
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19[2]; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  int v22; // [rsp+90h] [rbp+48h] BYREF
  int v23; // [rsp+98h] [rbp+50h]
  __int64 v24; // [rsp+A0h] [rbp+58h]
  _QWORD *v25; // [rsp+A8h] [rbp+60h]

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v19[1] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v20 = v7;
  *a4 = 0LL;
  v19[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  v8 = 0LL;
  v19[0] = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  while ( v10 < *(_QWORD *)(a1 + 296) )
  {
    if ( v9 )
      goto LABEL_4;
    MTVHostType = CMultitaskingViewManager::s_GetMTVHostType(*(__int64 **)(v11 + *(_QWORD *)(a1 + 288)));
    if ( (v23 & MTVHostType) != 0
      && (v17 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 288)),
          v22 = 0,
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 32LL))(v17, &v22),
          v22) )
    {
      v9 = 1;
      v18 = (__int64 *)(v11 + *(_QWORD *)(a1 + 288));
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
      v8 = *v18;
      v19[0] = *v18;
    }
    else
    {
      v8 = v19[0];
    }
    ++v10;
    v11 += 16LL;
  }
  if ( v9 )
  {
LABEL_4:
    v12 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, v24, v25);
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v12,
        v19[0]);
    v14 = v19[0];
    if ( v19[0] )
    {
      v19[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return v13;
  }
  if ( v8 )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 2147647531LL;
}
