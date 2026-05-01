/*
 * XREFs of ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180518C04
 * Callers:
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1801B7F00 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805159B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805165AC (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805179C4 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?InitLayoutOperation@TabletModePositioner@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180518BB0 (-InitLayoutOperation@TabletModePositioner@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x18051A3F4 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051D5D8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18051D864 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18051D930 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18051D9EC (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180522D50 (-AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180524BB0 (-WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180524DE8 (-AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805258F0 (-BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180527240 (-TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::InitLayoutOperationHelper(
        IUnknown *punkSite,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  const struct _GUID *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  const struct _GUID *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  const struct _GUID *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  const struct _GUID *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  const struct _GUID *v22; // rcx
  int Instance; // eax
  struct IUnknownVtbl *lpVtbl; // rdi
  __int64 (__fastcall *v25)(struct IUnknownVtbl *, GUID *, __int64 *); // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v29[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  IUnknown *punk; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  punk = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_AppSwitchOperation.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_AppSwitchOperation.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_AppSwitchOperation.Data4;
  if ( v7 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_WindowArrangementOperation.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_WindowArrangementOperation.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_WindowArrangementOperation.Data4;
    if ( v12 )
    {
      v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_AppResizeOperation.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_AppResizeOperation.Data1 )
        v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_AppResizeOperation.Data4;
      if ( v15 )
      {
        v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_BackOperation.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_BackOperation.Data1 )
          v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_BackOperation.Data4;
        if ( v18 )
        {
          v21 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_TabletModePositionerOperation.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_TabletModePositionerOperation.Data1 )
            v21 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_TabletModePositionerOperation.Data4;
          if ( v21 )
          {
            v10 = -2147024809;
            v14 = 2147942487LL;
            v11 = 2328LL;
            goto LABEL_34;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
          Instance = TabletModePositionerOperation_CreateInstance(v22, (void **)&punk);
          v10 = Instance;
          if ( Instance < 0 )
          {
            v14 = (unsigned int)Instance;
            v11 = 2323LL;
            goto LABEL_34;
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
          v20 = BackOperation_CreateInstance(v19, (void **)&punk);
          v10 = v20;
          if ( v20 < 0 )
          {
            v14 = (unsigned int)v20;
            v11 = 2319LL;
            goto LABEL_34;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        v17 = AppResizeOperation_CreateInstance(v16, (void **)&punk);
        v10 = v17;
        if ( v17 < 0 )
        {
          v14 = (unsigned int)v17;
          v11 = 2315LL;
          goto LABEL_34;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
      v9 = WindowArrangementOperation_CreateInstance(v13, (void **)&punk);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 2311LL;
        goto LABEL_11;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    v9 = AppSwitchOperation_CreateInstance(v8, (void **)&punk);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 2307LL;
LABEL_11:
      v14 = (unsigned int)v9;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v14);
      goto LABEL_35;
    }
  }
  v29[0] = 0LL;
  lpVtbl = punkSite[31].lpVtbl;
  v25 = (__int64 (__fastcall *)(struct IUnknownVtbl *, GUID *, __int64 *))*((_QWORD *)lpVtbl->QueryInterface + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
  v26 = v25(lpVtbl, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, v29);
  v10 = v26;
  if ( v26 >= 0 )
  {
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].QueryInterface)(punk, v29[0]);
    IUnknown_SetSite(punk, punkSite);
    v26 = ((__int64 (__fastcall *)(IUnknown *, const struct _GUID *, void **))punk->lpVtbl->QueryInterface)(
            punk,
            a3,
            a4);
    v10 = v26;
    if ( v26 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
      return 0LL;
    }
    v27 = 2342LL;
  }
  else
  {
    v27 = 2333LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  return v10;
}
