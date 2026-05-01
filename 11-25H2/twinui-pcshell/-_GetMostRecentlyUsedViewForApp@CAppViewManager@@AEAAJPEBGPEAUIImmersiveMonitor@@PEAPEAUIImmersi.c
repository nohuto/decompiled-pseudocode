/*
 * XREFs of ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180118504
 * Callers:
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180118318 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180139AE0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801C2138 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     WPP_SF_ @ 0x18022DA04 (WPP_SF_.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802F4CCC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802F76B0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UI.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802FB520 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForApp(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  HRESULT v7; // r14d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, const unsigned __int16 *, __int64 *); // rdi
  bool v10; // cc
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  void *v13; // rbx
  __int64 (__fastcall *v14)(void *, __int64 *); // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  struct IImmersiveApplicationInternal *v17; // rbx
  CAppViewManager *v18; // rcx
  PVOID Ptr; // r14
  __int64 (__fastcall *v20)(PVOID, __int64, __int64 *); // rbx
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+30h] [rbp-69h] BYREF
  struct IImmersiveApplicationInternal *v29; // [rsp+38h] [rbp-61h] BYREF
  __int64 v30; // [rsp+40h] [rbp-59h] BYREF
  __int64 v31; // [rsp+48h] [rbp-51h] BYREF
  __int64 v32; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h] BYREF
  __int64 v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h] BYREF
  void *ppvOut; // [rsp+70h] [rbp-29h] BYREF
  int v37; // [rsp+78h] [rbp-21h] BYREF
  struct IImmersiveApplicationInternal *v38[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v39; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-1h]
  int v41; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v42[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v43; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v44; // [rsp+110h] [rbp+77h] BYREF
  int v45; // [rsp+114h] [rbp+7Bh]
  __int64 (__fastcall ***v46)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+118h] [rbp+7Fh] BYREF

  v45 = HIDWORD(a3);
  *a4 = 0LL;
  v46 = 0LL;
  v28 = 0LL;
  v44 = 0;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
         &v31);
  if ( v7 < 0 )
    goto LABEL_38;
  v8 = v31;
  v9 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v31 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  v7 = v9(v8, a2, &v28);
  if ( v7 < 0 )
    goto LABEL_38;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 24LL))(v28, &v44);
  if ( v7 < 0 )
    goto LABEL_38;
  v10 = v44 <= 1;
  if ( v44 == 1 )
  {
    v11 = v28;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v28 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    v7 = v12(v11, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v46);
    if ( v7 < 0 )
      goto LABEL_38;
    v10 = v44 <= 1;
  }
  if ( v10 )
    goto LABEL_37;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         *((IUnknown **)this + 15),
         (const GUID *const)&SID_VirtualDesktopManager,
         &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
         &ppvOut);
  if ( v7 >= 0 )
  {
    v35 = 0LL;
    v13 = ppvOut;
    v14 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    v7 = v14(v13, &v35);
    if ( v7 < 0 )
    {
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      goto LABEL_31;
    }
    v15 = 0LL;
    v34 = 0LL;
    v16 = 0LL;
    v33 = 0LL;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      &v39,
      v28);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
      &v37,
      &v39,
      0LL);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
      &v41,
      &v39,
      v40);
    while ( v37 != v41 || v38[1] != (struct IImmersiveApplicationInternal *)v42[1] )
    {
      v17 = v38[0];
      v29 = v38[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      LOBYTE(v17) = CAppViewManager::_IsMultiViewOperationAllowed(v18, v17);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( (_BYTE)v17 )
      {
        if ( !v15 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v34, &v29);
          v15 = v34;
        }
        v32 = 0LL;
        v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v29, &v32);
        if ( v7 >= 0 )
        {
          v30 = 0LL;
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
          v20 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          v7 = v20(Ptr, v32, &v30);
          if ( v7 >= 0 )
          {
            v43 = 0;
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v35 + 24LL))(v35, v30, &v43);
            if ( v7 >= 0 )
            {
              if ( v43 )
              {
                Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v33, &v29);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
                v16 = v33;
                break;
              }
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      ++v37;
      details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::GetCurrentObject(&v37);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    if ( v16 )
    {
      v21 = &v33;
    }
    else
    {
      if ( !v15 )
      {
LABEL_29:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        goto LABEL_30;
      }
      v21 = &v34;
    }
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v21, &v46);
    goto LABEL_29;
  }
LABEL_31:
  if ( !v46 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        28LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
    }
    v22 = v28;
    v23 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v28 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    v7 = v23(v22, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v46);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( v7 >= 0 )
LABEL_37:
    v7 = (**v46)(v46, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
LABEL_38:
  v24 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (__int64)v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return (unsigned int)v7;
}
