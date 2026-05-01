/*
 * XREFs of ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1802356F0
 * Callers:
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x1803486C0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x180353BE0 (-SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801B9CC0 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x18021AB60 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@1234@@Z @ 0x1802347E0 (--$CreateExternalVector@PEAUHSTRING__@@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C00B0 (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDisplayMonitors(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  HWND v7; // rdx
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID); // r14
  HSTRING_HEADER *v21; // rax
  int v22[2]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+3Ch] [rbp-34h] BYREF
  int v25[2]; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v26; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a2 )
    *(_QWORD *)(a1 + 1408) = a2;
  v7 = *(HWND *)(a1 + 1408);
  if ( v7 )
  {
    v24 = 0;
    v22[0] = 0;
    v23 = 0;
    v25[0] = 0;
    if ( (int)GamingOverlayExperienceManager::GetTargetWindowRect(
                (GamingOverlayExperienceManager *)a1,
                v7,
                &v24,
                v22,
                &v23,
                v25) < 0 )
    {
      *(_QWORD *)(a1 + 1396) = 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 1396) = (v23 + v24) / 2;
      *(_DWORD *)(a1 + 1400) = (v25[0] + v22[0]) / 2;
    }
  }
  v8 = a1 + 1352;
  v9 = *(_QWORD **)(a1 + 1360);
  if ( *(_QWORD **)(a1 + 1352) != v9 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(*(_QWORD **)v8, v9);
    *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 1352);
  }
  std::wstring::wstring((__int64)&v26, (__int64)L"game");
  std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>(a1 + 1352, &v26);
  std::wstring::_Tidy_deallocate(&v26);
  if ( !EnumDisplayMonitors(0LL, 0LL, (MONITORENUMPROC)GamingOverlayExperienceManager::MonitorEnumProc, a1 - 136) )
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB02,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004005LL);
    return v10;
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 1376);
  if ( a3 )
  {
    *(_QWORD *)v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
    v13 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>(
            v12,
            (__int64 *)v22);
    v10 = v13;
    if ( v13 < 0 )
    {
      v15 = 2829LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      return v10;
    }
    v16 = *(_QWORD **)v8;
    v17 = *(_QWORD **)(v8 + 8);
    while ( v16 != v17 )
    {
      v18 = v16;
      v19 = *(_QWORD *)v22;
      v20 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v22 + 104LL);
      if ( v16[3] > 7uLL )
        v18 = (_QWORD *)*v16;
      *(_QWORD *)v25 = v18;
      v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)v25, v14);
      v13 = v20(v19, v21[1].Reserved.Reserved1);
      v10 = v13;
      if ( v13 < 0 )
      {
        v15 = 2833LL;
        goto LABEL_25;
      }
      v16 += 4;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v22 + 64LL))(*(_QWORD *)v22, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v15 = 2836LL;
      goto LABEL_25;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
  }
  return 0LL;
}
