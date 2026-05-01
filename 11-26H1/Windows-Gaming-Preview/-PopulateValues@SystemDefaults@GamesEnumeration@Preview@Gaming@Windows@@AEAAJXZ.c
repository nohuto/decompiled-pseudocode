/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BD14
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C150 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180002250 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180014D04 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003B79C (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  void *v6; // rdi
  DWORD ActiveProcessorCount; // r14d
  bool *v8; // r12
  int *v9; // rbx
  int DefaultGameModeProfile; // eax
  int LargestValidResourceRequest; // r14d
  int v12; // eax
  unsigned int v13; // r14d
  bool v14; // zf
  HRESULT StringReference; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ActivationFactory; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD *); // r12
  _QWORD *v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h] BYREF
  __int64 v29; // [rsp+60h] [rbp-19h] BYREF
  __int128 v30; // [rsp+68h] [rbp-11h]
  __int128 hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  __int128 hstringHeader_16; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v29 = 0LL;
  v30 = 0LL;
  v2 = CreateGameConfigStoreClient(&v29);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v27[0] = 0;
  v5 = v29;
  *(_QWORD *)&hstringHeader = v29;
  *((_QWORD *)&hstringHeader + 1) = v27;
  LOBYTE(hstringHeader_16) = 1;
  v6 = operator new(0x18uLL);
  *(_QWORD *)&hstringHeader = v6;
  *(_OWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = off_18004A1C8;
  *((_QWORD *)v6 + 2) = v5;
  *(_QWORD *)&v30 = v5;
  *((_QWORD *)&v30 + 1) = v6;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v27[0] = 0;
  hstringHeader = 0LL;
  _InterlockedAdd((volatile signed __int32 *)v6 + 2, 1u);
  *(_QWORD *)&hstringHeader = v5;
  *((_QWORD *)&hstringHeader + 1) = v6;
  v8 = (bool *)this + 28;
  v9 = (int *)((char *)this + 24);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             (__int64)v27,
                             &hstringHeader,
                             (int)this + 8,
                             (unsigned int *)this + 4,
                             (unsigned __int64 *)this + 3,
                             (unsigned int *)this + 7,
                             v27);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( v27[0] )
      goto LABEL_13;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)DefaultGameModeProfile);
  }
  *((_DWORD *)this + 2) = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *v8 = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v9 = 2;
    }
    else
    {
      hstringHeader = 0LL;
      hstringHeader_16 = 0LL;
      v33 = 0LL;
      RmGameModeInitializeResourceRequest(&hstringHeader);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&hstringHeader);
      if ( LargestValidResourceRequest >= 0 )
        *v9 = DWORD1(hstringHeader);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
    }
  }
LABEL_13:
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  v12 = JsonDocumentFromGameConfigValues(
          *((_DWORD *)this + 2),
          *((HSTRING *)this + 2),
          *v9,
          1,
          *v8,
          0,
          0,
          0LL,
          (HSTRING *)this + 4);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v12);
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1;
LABEL_15:
    if ( v14 )
    {
      (**(void (__fastcall ***)(void *))v6)(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    return v13;
  }
  v28 = 0LL;
  *((_QWORD *)&hstringHeader_16 + 1) = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Windows.Foundation.PropertyValue",
                      0x20u,
                      (HSTRING_HEADER *)&hstringHeader,
                      (HSTRING *)&hstringHeader_16 + 1);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    JUMPOUT(0x18003C13ELL);
  }
  v16 = *((_QWORD *)&hstringHeader_16 + 1);
  v17 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  ActivationFactory = RoGetActivationFactory(v16, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v28);
  v13 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v19 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
LABEL_25:
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1;
    goto LABEL_15;
  }
  v20 = v28;
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v28 + 144LL);
  v22 = (_QWORD *)((char *)this + 40);
  v23 = *((_QWORD *)this + 5);
  if ( v23 )
  {
    *v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v21(v20, *((_QWORD *)this + 4), v22);
  v13 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v24);
    v25 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_25;
  }
  v26 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(void *))v6)(v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return 0LL;
}
