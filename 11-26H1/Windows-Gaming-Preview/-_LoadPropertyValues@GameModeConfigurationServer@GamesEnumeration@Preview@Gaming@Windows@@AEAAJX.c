/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800376F0
 * Callers:
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002430C (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180027730 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800143E8 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180014798 (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014B68 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?Make@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016278 (-Make@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036CB4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180037134 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037D5C (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180038C1C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rbx
  int v3; // r8d
  __int64 v4; // rcx
  HSTRING v5; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r12
  struct _GUID v12; // xmm6
  int v13; // eax
  unsigned int v14; // esi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v16; // rdx
  WCHAR *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  const struct std::nothrow_t *v21; // rdx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v25)(_QWORD, GUID *, char *); // rsi
  __int64 v26; // rcx
  int v27; // eax
  int NullableInt; // ebx
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // esi
  unsigned int v46; // r14d
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct _GUID v50; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  unsigned int v52; // [rsp+A0h] [rbp+48h] BYREF
  __int64 (__fastcall ***length)(_QWORD, GUID *, char *); // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v54; // [rsp+B0h] [rbp+58h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+60h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      (__int64)this,
                      0);
  v3 = *(_DWORD *)(*(_QWORD *)(FirstGameConfig + 16) + 32LL);
  *((_BYTE *)this + 96) = (v3 & 0x80) != 0;
  if ( (v3 & 0x80) == 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
      1u,
      v3);
    v52 = 0;
    v4 = *((_QWORD *)this + 8);
    v50 = *(struct _GUID *)FirstGameConfig;
    if ( (*(int (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *))(*(_QWORD *)v4 + 112LL))(
           v4,
           &v50,
           17LL,
           &v52) >= 0
      && !v52 )
    {
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v50 = *(struct _GUID *)FirstGameConfig;
      if ( (int)GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v50, 15LL, &string) >= 0 )
      {
        v5 = string;
        if ( !string )
        {
LABEL_13:
          WindowsDeleteString(v5);
          goto LABEL_14;
        }
        LODWORD(length) = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
        if ( StringRawBuffer )
        {
          if ( (_DWORD)length )
          {
            v7 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v7 - 1 <= 0xFFFFFFFD )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                (wil::details *)`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                (__int64)&v50);
              if ( v7 == *(_DWORD *)&v50.Data2
                && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v5 = string;
      goto LABEL_13;
    }
  }
LABEL_14:
  v8 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig((__int64)this, 0);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 32LL) & 0x100) == 0;
  v9 = (__int64 *)((char *)this + 104);
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  length = 0LL;
  v11 = *((_QWORD *)this + 8);
  v12 = *(struct _GUID *)v8;
  v52 = 0;
  v50 = v12;
  v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64))(*(_QWORD *)v11 + 64LL))(v11, &v50, 22LL);
  v14 = v13;
  if ( (_WORD)v13 != 2 )
  {
    if ( v13 < 0 )
    {
      v16 = 504LL;
      goto LABEL_21;
    }
    v17 = (WCHAR *)operator new[](v52 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    string = (HSTRING)v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_31;
    }
    v50 = v12;
    v18 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, WCHAR *, unsigned int *))(*(_QWORD *)v11 + 64LL))(
            v11,
            &v50,
            22LL,
            v17,
            &v52);
    v14 = v18;
    if ( v18 >= 0 )
    {
      v18 = DeserializeRelatedProcessArray(v17, v52, &length);
      v14 = v18;
      if ( v18 >= 0 )
      {
        operator delete(v17, v20);
        goto LABEL_35;
      }
      v19 = 512LL;
    }
    else
    {
      v19 = 511LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v18);
    operator delete(v17, v21);
    goto LABEL_31;
  }
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
  if ( length )
  {
    length = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
  }
  v13 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Make(&length);
  v14 = v13;
  if ( v13 >= 0 )
  {
LABEL_35:
    v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
    v25 = **length;
    v26 = *v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v25(v24, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, (char *)this + 104);
    NullableInt = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v27);
      v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
      if ( length )
      {
        length = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v29)[2])(v29);
      }
      return (unsigned int)NullableInt;
    }
    v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
    if ( length )
    {
      length = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v30)[2])(v30);
    }
    v31 = *((_QWORD *)this + 8);
    v52 = 0;
    LODWORD(length) = 4;
    v50 = *(struct _GUID *)v8;
    v32 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v31 + 64LL))(
            v31,
            &v50,
            19LL,
            &v52,
            &length);
    NullableInt = v32;
    if ( v32 >= 0 )
    {
      v45 = HIWORD(v52);
      v46 = v52 >> 8;
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v33,
                      (char *)this + 112,
                      HIBYTE(v52));
      if ( NullableInt < 0 )
      {
        v44 = 387LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v47,
                      (char *)this + 120,
                      (unsigned __int8)v45);
      if ( NullableInt < 0 )
      {
        v44 = 388LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v48,
                      (char *)this + 128,
                      (unsigned __int8)v46);
      if ( NullableInt < 0 )
      {
        v44 = 389LL;
        goto LABEL_63;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v32);
      if ( (_WORD)NullableInt != 2 )
      {
        v44 = 386LL;
        goto LABEL_63;
      }
      v34 = *((_QWORD *)this + 14);
      if ( v34 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v35 = *((_QWORD *)this + 15);
      if ( v35 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = *((_QWORD *)this + 16);
      if ( v36 )
      {
        *((_QWORD *)this + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
    v54 = 0;
    v37 = *((_QWORD *)this + 8);
    v52 = 4;
    v50 = *(struct _GUID *)v8;
    v38 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *, unsigned int *))(*(_QWORD *)v37 + 64LL))(
            v37,
            &v50,
            20LL,
            &v54,
            &v52);
    NullableInt = v38;
    if ( v38 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v38);
    if ( (_WORD)NullableInt == 2 )
    {
      v40 = *((_QWORD *)this + 17);
      if ( v40 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v44 = 400LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v39,
                      (char *)this + 136,
                      v54);
      if ( NullableInt < 0 )
      {
        v44 = 401LL;
        goto LABEL_63;
      }
    }
    v52 = 0;
    LODWORD(length) = 0;
    v50 = *(struct _GUID *)v8;
    NullableInt = GetGameCpuMask(
                    *((struct ExecutionModel::IGameConfigStore **)this + 8),
                    &v50,
                    &v52,
                    (unsigned int *)&length);
    if ( (_WORD)NullableInt == 2 )
    {
      v42 = *((_QWORD *)this + 18);
      if ( v42 )
      {
        *((_QWORD *)this + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v43 = *((_QWORD *)this + 19);
      if ( v43 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      return 0LL;
    }
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v41,
                      (char *)this + 144,
                      v52);
      if ( NullableInt >= 0 )
      {
        NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                        v49,
                        (char *)this + 152,
                        (unsigned int)length);
        if ( NullableInt >= 0 )
          return 0LL;
        v44 = 416LL;
      }
      else
      {
        v44 = 415LL;
      }
    }
    else
    {
      v44 = 414LL;
    }
LABEL_63:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v16 = 499LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v13);
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x170,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v14);
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
  if ( length )
  {
    length = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  return v14;
}
