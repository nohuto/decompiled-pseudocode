/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180020C3C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x1800A1BF0 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x180098624 (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009BACC (IsGetMPCInputPostProcessorPresent.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800CE2E0 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  const char *v7; // r9
  const char *v8; // r9
  _DWORD *v9; // rbx
  int v11; // eax
  _DWORD *v12; // rbx
  int v13; // eax
  int v14[2]; // [rsp+20h] [rbp-A9h]
  __int64 v15; // [rsp+28h] [rbp-A1h]
  bool v16; // [rsp+30h] [rbp-99h]
  _DWORD v17[3]; // [rsp+34h] [rbp-95h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-89h] BYREF
  bool v19; // [rsp+50h] [rbp-79h]
  _DWORD v20[7]; // [rsp+54h] [rbp-75h] BYREF
  bool v21; // [rsp+70h] [rbp-59h]
  __int64 v22; // [rsp+74h] [rbp-55h]
  __int64 (__fastcall *v23)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+80h] [rbp-49h]
  __int64 v24; // [rsp+88h] [rbp-41h]
  bool v25; // [rsp+90h] [rbp-39h]
  int v26; // [rsp+94h] [rbp-35h]
  int RIMRawInputProviderSpecific; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v28)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  char v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B4h] [rbp-15h]
  __int64 (__fastcall *v32)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  char v34; // [rsp+D0h] [rbp+7h]
  __int64 v35; // [rsp+D4h] [rbp+Bh]
  __int128 v36; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *(_DWORD *)ISMScenarios::s_instance == 1 )
    {
      *(_QWORD *)v14 = RIMRawInputProvider::Create;
      v15 = 262123LL;
      if ( !ISMTestMode::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x21,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
          a4);
      v16 = *(_BYTE *)ISMTestMode::s_instance == 0;
      v17[0] = 0;
      v17[1] = GetRIMRawInputProviderSpecific(1LL);
      v12 = v17;
      do
      {
        if ( IsEdition(*(_QWORD *)(v12 - 3)) && *((_BYTE *)v12 - 4) && *v12 == a3 )
        {
          v37 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v12 - 5))(a2, (unsigned int)v12[1], &v37);
          if ( v13 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA3,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
              (const char *)(unsigned int)v13,
              v14[0]);
          v36 = *(_OWORD *)(v12 - 3);
          std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v36);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        }
        v12 += 8;
      }
      while ( v12 - 5 != (_DWORD *)v18 );
    }
  }
  else
  {
    v18[0] = GameControllerRawInputProvider::Create;
    v18[1] = 253419LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        a4);
    v19 = *(_BYTE *)ISMTestMode::s_instance == 0;
    *(_QWORD *)v20 = 0LL;
    *(_QWORD *)&v20[3] = MPCRawInputProvider::Create;
    *(_QWORD *)&v20[5] = 262123LL;
    v21 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
    v22 = 0LL;
    v23 = RIMRawInputProvider::Create;
    v24 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v7);
    v25 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v26 = 0;
    RIMRawInputProviderSpecific = GetRIMRawInputProviderSpecific(0LL);
    v28 = LampArrayRawInputProvider::Create;
    v29 = 262123LL;
    v30 = 1;
    v31 = 0LL;
    v32 = InjectionRawInputProvider::Create;
    v33 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v8);
    v34 = 0;
    v35 = 0LL;
    v9 = v20;
    do
    {
      if ( IsEdition(*(_QWORD *)(v9 - 3)) && *((_BYTE *)v9 - 4) && *v9 == a3 )
      {
        v37 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v9 - 5))(a2, (unsigned int)v9[1], &v37);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x88,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
            (const char *)(unsigned int)v11,
            v14[0]);
        v36 = *(_OWORD *)(v9 - 3);
        std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v36);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      }
      v9 += 8;
    }
    while ( v9 - 5 != (_DWORD *)&v36 );
  }
  return 0LL;
}
