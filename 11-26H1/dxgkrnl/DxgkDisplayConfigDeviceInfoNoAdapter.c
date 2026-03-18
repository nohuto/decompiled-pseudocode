/*
 * XREFs of DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1402C9210 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C444 (-GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C890 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000D0FC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiGetMdmStatus @ 0x1400151E4 (DpiGetMdmStatus.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck @ 0x1400606B0 (Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140191CCC (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x140198DDC (-GetCabcOptionFromRegistry@@YAJPEAK@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401B5348 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z @ 0x1401CF8D4 (-TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1402AC50C (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140317F38 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x14031FD8C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x14032078C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x14034038C (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfoNoAdapter(__int64 a1, __int64 a2, struct _LUID *a3)
{
  DWORD LowPart; // eax
  int v4; // edi
  __int64 v6; // rsi
  DXGADAPTERSOURCEHASH *v7; // r12
  LONG HashBitShift; // eax
  LONG HighPart; // ecx
  __int64 result; // rax
  unsigned int *p_HighPart; // r15
  struct _LUID *v12; // r13
  __int64 v13; // rcx
  const wchar_t *v14; // r9
  unsigned int v15; // r15d
  unsigned int v16; // edx
  struct _LUID v17; // rcx
  struct DXGGLOBAL *v18; // rax
  LONG v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  int LightweightDeviceAndContext; // eax
  unsigned int v23; // edx
  struct _LUID v24; // rcx
  unsigned int v25; // edx
  int v26; // ecx
  LONG v27; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // [rsp+28h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  LONG v32; // [rsp+68h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v33[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _LUID v34; // [rsp+78h] [rbp-90h] BYREF
  LONG v35; // [rsp+80h] [rbp-88h]
  int v36; // [rsp+84h] [rbp-84h]
  _QWORD v37[44]; // [rsp+88h] [rbp-80h] BYREF

  LowPart = a3->LowPart;
  v4 = 0;
  LODWORD(v6) = 0;
  if ( a3->LowPart > 0xFFFFFFEA )
  {
    if ( LowPart == -14 )
    {
      v7 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1400);
      a3[3].LowPart = DXGADAPTERSOURCEHASH::GetHashBitCount(v7);
      a3[4].LowPart = DXGADAPTERSOURCEHASH::GetHashBitMask(v7);
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v7);
      HighPart = a3[4].HighPart;
      a3[3].HighPart = HashBitShift;
      if ( (HighPart & 2) != 0 )
        return (unsigned int)v6;
      p_HighPart = (unsigned int *)&a3[2].HighPart;
      v12 = a3 + 1;
      if ( (HighPart & 1) != 0 )
      {
        LODWORD(v6) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v7, *p_HighPart, a3 + 1, (unsigned int *)&a3[2]);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry1(2LL);
          v29 = *p_HighPart;
          WdLogGlobalForLineNumber = 6835;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find source/adapter from hash 0x%I64x",
            v29,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        return (unsigned int)v6;
      }
      LODWORD(v6) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                      v7,
                      a3 + 1,
                      a3[2].LowPart,
                      (unsigned int *)&a3[2].HighPart);
      if ( (int)v6 >= 0 )
        return (unsigned int)v6;
      WdLogSingleEntry3(2LL, a3[1].HighPart, v12->LowPart, a3[2].LowPart);
      v13 = v12->LowPart;
      v14 = L"Failed to find has for adapter <0x%I64x, 0x%I64x>, source:0x%I64x";
      WdLogGlobalForLineNumber = 6846;
LABEL_11:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, a3[1].HighPart, v13, a3[2].LowPart, 0LL, 0LL);
      return (unsigned int)v6;
    }
    if ( LowPart == -5 )
    {
      Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck();
      return 3221225659LL;
    }
    if ( LowPart != -19 )
    {
      if ( LowPart == -13 )
      {
        v23 = a3[2].LowPart;
        v24 = a3[1];
        *(_WORD *)((char *)v30 + 1) = 0;
        LOBYTE(v30[0]) = 0;
        v30[1] = D3DKMDT_VOT_HD15;
        v33[0] = D3DKMDT_VOT_HD15;
        LODWORD(v31) = 0;
        LODWORD(v6) = DxgkIsVirtualizationDisabledForTarget(v24, v23, (__int64)v30, &v30[1], v33, (__int64)&v31);
        if ( (int)v6 >= 0 )
        {
          LOBYTE(v4) = BYTE2(v30[0]) != 0;
          v25 = (BYTE1(v30[0]) != 0 ? 2 : 0) | v4 & 0xFFFFFFFD | a3[4].LowPart & 0xFFFFFFFC;
          v26 = -(LOBYTE(v30[0]) != 0);
          a3[2].HighPart = v30[1];
          a3[3].LowPart = v33[0];
          v27 = v31;
          a3[4].LowPart = v26 & 4 | v25 & 0xFFFFFFFB;
          a3[3].HighPart = v27;
          return (unsigned int)v6;
        }
        WdLogSingleEntry3(2LL, a3[1].HighPart, a3[1].LowPart, a3[2].LowPart);
        v13 = a3[1].LowPart;
        v14 = L"Failed DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_INFO_INTERNAL for adapter <0x%I64x, 0x%I64x>, target:0x%I64x";
        WdLogGlobalForLineNumber = 6812;
        goto LABEL_11;
      }
      if ( LowPart == -6 )
      {
        v31 = (unsigned int)Feature_BrokeredDisplays_RotMgr__private_featureState;
        if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
        {
          LODWORD(v31) = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor,
            v31,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v31,
            3,
            (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor);
        }
        return 3221225659LL;
      }
LABEL_48:
      LODWORD(v6) = -1073741811;
      return (unsigned int)v6;
    }
    Global = DXGGLOBAL::GetGlobal();
    LightweightDeviceAndContext = DXGGLOBAL::IterateAdaptersWithCallback(
                                    Global,
                                    SendColorimetricControlToDriverCallback,
                                    a3,
                                    4LL);
LABEL_55:
    LODWORD(v6) = LightweightDeviceAndContext;
    return (unsigned int)v6;
  }
  switch ( LowPart )
  {
    case 0xFFFFFFEA:
      LightweightDeviceAndContext = DxgkCreateLightweightDeviceAndContext(a3 + 1, &a3[2].HighPart, &a3[3]);
      goto LABEL_55;
    case 0xFFFFFFDE:
      DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)&a3[2].HighPart);
      return (unsigned int)v6;
    case 3u:
      if ( !(_BYTE)a1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6653;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6653LL, 0LL, 0LL, 0LL, 0LL);
      }
      memset(v37, 0, sizeof(v37));
      v15 = 0;
      LODWORD(v6) = -1071774970;
      do
      {
        if ( v15 >= 0x10 )
          break;
        if ( v37[38] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6665;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PathForTarget.Descriptors[0].pDevMode == NULL",
            6665LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        memset(v37, 0, sizeof(v37));
        v16 = a3[2].LowPart;
        v17 = a3[1];
        *(_WORD *)((char *)v30 + 1) = 0;
        LOBYTE(v30[0]) = 0;
        LODWORD(v6) = DxgkIsVirtualizationDisabledForTarget(
                        v17,
                        v16,
                        (__int64)v30,
                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v37[18],
                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v37[18] + 1,
                        (__int64)&v37[33] + 4);
        if ( (int)v6 >= 0 )
        {
          v37[9] = a3[1];
          HIDWORD(v37[10]) = a3[2].LowPart;
          HIDWORD(v37[2]) = 65537;
          LODWORD(v37[10]) = v15;
          LODWORD(v37[30]) = -13434880;
          BYTE1(v37[23]) = (LOBYTE(v30[0]) == 0 ? 4 : 0) | (BYTE1(v30[0]) == 0 ? 2 : 0) | (BYTE2(v30[0]) == 0);
          v37[7] = 0xCF00000000000LL;
          LODWORD(v6) = BmlGetPathModalityForAdapter(v37, &a3[1], 0LL, 1LL, 0);
          if ( (int)v6 >= 0 )
          {
            DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v37[11], &a3[4]);
            *(struct _LUID *)((char *)a3 + 20) = a3[7];
          }
          BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v37);
          ++v15;
        }
      }
      while ( (_DWORD)v6 == -1071774970 );
      return (unsigned int)v6;
  }
  if ( LowPart != -36 && LowPart != -35 )
  {
    if ( LowPart == -24 )
    {
      v18 = DXGGLOBAL::GetGlobal();
      v19 = a3[2].LowPart;
      if ( *((_BYTE *)v18 + 305320) )
      {
        v34 = a3[1];
        v35 = v19;
        v31 = 0LL;
        v32 = 0;
        v36 = 0;
        LODWORD(v6) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                        (struct _KTHREAD **)v18 + 38159,
                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v34,
                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v31);
        if ( (int)v6 < 0 )
          return (unsigned int)v6;
        *(_QWORD *)&a3[2].HighPart = v31;
        v19 = v32;
      }
      else
      {
        *(struct _LUID *)((char *)a3 + 20) = a3[1];
      }
      a3[3].HighPart = v19;
      return (unsigned int)v6;
    }
    goto LABEL_48;
  }
  if ( a3->HighPart >= 0x18u )
  {
    if ( LowPart == -35 )
    {
      v21 = TriggerCabcV2Wnf(a3[2].HighPart);
      v6 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6931;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"TriggerCabcV2Wnf failed 0x%I64x",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v30[1] = D3DKMDT_VOT_HD15;
      GetCabcOptionFromRegistry((unsigned int *)&v30[1]);
      a3[2].HighPart = v30[1];
    }
    return (unsigned int)v6;
  }
  v20 = WdLogNewEntry5_WdTrace(a1, 4294967274LL);
  *(_QWORD *)(v20 + 24) = (unsigned int)a3->HighPart;
  *(_QWORD *)(v20 + 32) = -1073741789LL;
  result = 3221225507LL;
  WdLogGlobalForLineNumber = 6917;
  return result;
}
