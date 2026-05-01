/*
 * XREFs of ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C2288
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1801C2810 (-IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAA?AW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_N@Z @ 0x1801C28C8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FDCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x18031528C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetGameModeRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  BOOL v8; // edi
  int ValueW; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  LSTATUS v15; // eax
  bool v16; // sf
  unsigned int v17; // r15d
  char v18; // r12
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rdx
  int v22; // eax
  const struct _GUID *v23; // rdx
  BroadcastDVRComponent *v24; // rcx
  char Variant; // di
  bool IsUsingPowerProfile; // al
  __int64 v27; // rax
  DWORD ActiveProcessorCount; // edi
  __int64 v29; // rdx
  char v30; // al
  unsigned int v31; // r8d
  char *v32; // rdx
  unsigned int v33; // r9d
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  char v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  __int64 result; // rax
  int pvData; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v45; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-14h] BYREF
  int v47; // [rsp+50h] [rbp-10h]
  int v48; // [rsp+54h] [rbp-Ch]
  __int64 v49; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  DWORD pcbData; // [rsp+B0h] [rbp+50h] BYREF
  int v53; // [rsp+B8h] [rbp+58h] BYREF

  pcbData = 4;
  v4 = *(_BYTE *)(a3 + 5) == 0;
  pvData = 0;
  v8 = v4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"GpuGameMemoryBudgetPercentage",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  pcbData = 4;
  v10 = 50;
  if ( ValueW >= 0 )
    v10 = pvData;
  v47 = v10;
  v11 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"GpuDwmMemoryBudgetPercentage",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0x80070000;
  pcbData = 4;
  v12 = 30;
  if ( v11 >= 0 )
    v12 = pvData;
  v48 = v12;
  v13 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"GpuYieldPercentage",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0x80070000;
  pcbData = 4;
  v14 = 2;
  if ( v13 >= 0 )
    v14 = pvData;
  v15 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"DisallowSystemAllowedCpuSets",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v16 = v15 < 0;
  if ( v15 > 0 )
    v16 = 1;
  if ( !v16 )
    v8 = pvData != 0;
  v17 = *(_DWORD *)(a3 + 24);
  v18 = 1;
  v19 = a2;
  v20 = *(_DWORD *)(a4 + 28);
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_BYTE *)(a4 + 36) = 2;
  if ( a2 == 5 )
  {
    v21 = v20 & 0xFFFFFFE0 | 0x10;
  }
  else
  {
    v19 = a2;
    v21 = (16 * v8) | v20 & 0xFFFFFFE7 | (8 * !v8) & 0xFFFFFFEF | 7;
  }
  *(_DWORD *)(a4 + 28) = v21;
  if ( *(_QWORD *)(a3 + 16) == -1LL )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( !*(_BYTE *)(a3 + 6) )
    {
      *(_DWORD *)(a4 + 32) &= ~8u;
      v22 = 0;
      if ( v19 == 4 )
        v22 = 8;
      *(_DWORD *)(a4 + 32) |= v22;
    }
    goto LABEL_83;
  }
  if ( *(_BYTE *)(a3 + 6) )
    goto LABEL_35;
  LOBYTE(v21) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl,
    v21,
    4294967287LL);
  Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl);
  if ( !Variant && a2 == 4 )
    Variant = 2;
  IsUsingPowerProfile = BroadcastDVRComponent::IsUsingPowerProfile(v24, v23);
  switch ( Variant )
  {
    case 0:
LABEL_34:
      *(_DWORD *)(a4 + 32) &= ~8u;
      *(_DWORD *)(a4 + 32) |= 8 * !IsUsingPowerProfile;
      goto LABEL_35;
    case 1:
      *(_DWORD *)(a4 + 32) |= 8u;
      goto LABEL_35;
    case 2:
      *(_DWORD *)(a4 + 32) |= 8u;
      *(_DWORD *)(a4 + 4) = 0;
LABEL_49:
      v35 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 16) = v14;
      goto LABEL_50;
  }
  if ( Variant != 3 )
  {
    if ( Variant != 4 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( IsUsingPowerProfile )
  {
LABEL_35:
    if ( a2 == 4 )
      goto LABEL_83;
    v27 = *(_QWORD *)(a3 + 16);
    if ( v27 || *(_DWORD *)(a3 + 28) || *(_BYTE *)(a3 + 5) )
    {
      *(_QWORD *)(a4 + 8) = v27;
      v42 = *(_DWORD *)(a3 + 28);
      if ( v42 )
      {
        if ( v42 > *(_DWORD *)(a4 + 4) )
          *(_DWORD *)(a4 + 28) |= 0x40u;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a3 + 28);
      }
      goto LABEL_83;
    }
    ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
    LOBYTE(v29) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl,
      v29);
    v30 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl);
    v31 = 0;
    v32 = (char *)word_180796AD0;
    while ( v31 < 0x23 )
    {
      if ( v32[4] == v30 )
      {
        v33 = *(_DWORD *)v32;
        v34 = *(_DWORD *)v32 >> 28;
        if ( v34 != 12 && ((v33 >> 21) & 0x3F) == ActiveProcessorCount )
        {
          *(_QWORD *)(a4 + 8) = (unsigned __int16)v33;
          if ( (word_180796AD0[4 * v31 + 1] & 0x1F) != 0 )
          {
            if ( (word_180796AD0[4 * v31 + 1] & 0x1Fu) > *(_DWORD *)(a4 + 4) )
              *(_DWORD *)(a4 + 28) |= 0x40u;
            *(_DWORD *)(a4 + 4) = word_180796AD0[4 * v31 + 1] & 0x1F;
          }
          if ( ((v34 - 2) & 0xFFFFFFFB) == 0 )
            goto LABEL_59;
          goto LABEL_83;
        }
      }
      ++v31;
      v32 += 8;
    }
    v38 = *(_QWORD *)(a1 + 256);
    v45 = 0;
    LOBYTE(v53) = 1;
    v49 = 0LL;
    v46 = 0;
    LOBYTE(pcbData) = 0;
    v39 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *, unsigned int *, int *, DWORD *))(*(_QWORD *)v38 + 88LL))(
            v38,
            &v45,
            &v49,
            &v46,
            &v53,
            &pcbData);
    if ( v39 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA40,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v39);
LABEL_62:
      if ( ActiveProcessorCount == 2 )
        goto LABEL_47;
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
      if ( ActiveProcessorCount == 4 )
        *(_DWORD *)(a4 + 4) = 2;
      goto LABEL_83;
    }
    if ( !(_BYTE)pcbData )
      goto LABEL_62;
    v40 = v49;
    if ( !v17 )
      v17 = v45;
    if ( v49 )
    {
      if ( v49 == -1 )
        goto LABEL_72;
      *(_QWORD *)(a4 + 8) = v49;
    }
    if ( v40 != -1 )
    {
      v41 = v46;
      if ( v46 )
      {
        if ( v46 > *(_DWORD *)(a4 + 4) )
          *(_DWORD *)(a4 + 28) |= 0x40u;
        *(_DWORD *)(a4 + 4) = v41;
      }
LABEL_77:
      if ( (_BYTE)v53 )
      {
LABEL_59:
        *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
        goto LABEL_83;
      }
      goto LABEL_83;
    }
LABEL_72:
    *(_DWORD *)(a4 + 4) = 0;
    goto LABEL_77;
  }
  *(_DWORD *)(a4 + 32) |= 8u;
LABEL_47:
  *(_DWORD *)(a4 + 4) = 0;
LABEL_83:
  if ( !v17 )
    goto LABEL_49;
  *(_DWORD *)(a4 + 16) = HIBYTE(v17);
  if ( HIBYTE(v17) > 0xAu )
    *(_DWORD *)(a4 + 16) = 100 - HIBYTE(v17);
  *(_DWORD *)(a4 + 20) = BYTE2(v17);
  v35 = BYTE1(v17);
  *(_DWORD *)(a4 + 24) = BYTE1(v17);
LABEL_50:
  v36 = *(_DWORD *)(a4 + 20);
  if ( !v36 && !v35 )
  {
    v37 = 1;
LABEL_89:
    v18 = 0;
    goto LABEL_90;
  }
  v37 = 0;
  if ( v36 < 0x64 && v35 < 0x64 )
    goto LABEL_89;
LABEL_90:
  if ( v37 || v18 || v36 + v35 >= 0x64 )
  {
    *(_DWORD *)(a4 + 20) = v47;
    *(_DWORD *)(a4 + 24) = v48;
  }
  result = 2LL;
  if ( *(_DWORD *)(a4 + 16) < 2u || *(_DWORD *)(a4 + 16) > 0xAu )
    *(_DWORD *)(a4 + 16) = v14;
  if ( a2 != 3 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 16) = 10;
    *(_DWORD *)(a4 + 20) = 50;
    *(_DWORD *)(a4 + 24) = 30;
  }
  return result;
}
