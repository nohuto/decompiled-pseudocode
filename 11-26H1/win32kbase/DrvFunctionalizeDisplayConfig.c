/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x14002E708
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x14002D5F8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14002D748 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14002F138 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14016E6DC (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1401BC974 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401BEBC8 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int PathModalityForDisplayConfig; // r15d
  __int64 DxgkWin32kInterface; // rax
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r13d
  unsigned int CcdRawmodeFlag; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r13d
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // r8d
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r15d
  unsigned __int16 *v36; // r8
  __int64 v37; // rax
  int v38; // [rsp+40h] [rbp-31h] BYREF
  int v39; // [rsp+44h] [rbp-2Dh]
  __int64 v40; // [rsp+48h] [rbp-29h] BYREF
  void **v41; // [rsp+50h] [rbp-21h] BYREF
  int v42; // [rsp+58h] [rbp-19h]
  _QWORD v43[4]; // [rsp+60h] [rbp-11h] BYREF
  PVOID Object[8]; // [rsp+80h] [rbp+Fh] BYREF
  bool v46; // [rsp+E0h] [rbp+6Fh] BYREF

  v5 = a3;
  if ( (a3 & 0xFFFFFFF8) == 0 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v40);
    AUTO_TGO::AUTO_TGO((AUTO_TGO *)&v41);
    v9 = *a1;
    v41 = (void **)&off_14024F1F0;
    v10 = 0;
    *(_OWORD *)Object = 0LL;
    v39 = v5 & 1;
    if ( (v5 & 1) != 0 )
    {
      if ( (unsigned int)v9 < 2 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 16973;
        v41 = (void **)&off_14024F1F0;
        FreePathsModality(Object[0], v34);
        if ( Object[1] )
          ObfDereferenceObject(Object[1]);
        v41 = &AUTO_TGO::`vftable';
        if ( v42 )
          PopThreadGuardedObject(v43);
        goto LABEL_31;
      }
      a2 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 216);
      LODWORD(v9) = v9 - 1;
    }
    else
    {
      if ( !(_DWORD)v9 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 16985;
        DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO((PVOID *)&v41);
        goto LABEL_18;
      }
      if ( (v5 & 2) != 0 )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 16991;
LABEL_46:
        DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO((PVOID *)&v41);
LABEL_31:
        v10 = -1073741811;
        goto LABEL_18;
      }
    }
    PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams(v9, (_DWORD)a2, a4 != 0 ? 98400 : 32864, 0, 1);
    if ( PathModalityForDisplayConfig >= 0 )
    {
      if ( a4 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v12, v11);
        PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(__int64, __int64, PVOID *))(DxgkWin32kInterface + 728))(
                                         a4,
                                         0x20000LL,
                                         &Object[1]);
        if ( PathModalityForDisplayConfig >= 0 )
        {
          v38 = 0;
          v16 = v5 & 4;
          v19 = SetDisplayConfigHandleBrokerProvidedPaths(
                  (__int64)Object[1],
                  v16 != 0,
                  v9,
                  a2,
                  (struct D3DKMT_GETPATHSMODALITY **)Object,
                  &v46,
                  (enum _DXGK_DIAG_SDC_STAGE *)&v38);
          if ( v19 < 0 )
          {
            v41 = (void **)&off_14024F1F0;
            FreePathsModality(Object[0], v17);
            if ( Object[1] )
              ObfDereferenceObject(Object[1]);
            v41 = &AUTO_TGO::`vftable';
            if ( v42 )
              PopThreadGuardedObject(v43);
            v10 = v19;
            goto LABEL_18;
          }
          goto LABEL_9;
        }
        v41 = (void **)&off_14024F1F0;
        FreePathsModality(Object[0], v15);
        if ( Object[1] )
          ObfDereferenceObject(Object[1]);
        v41 = &AUTO_TGO::`vftable';
        if ( v42 )
          PopThreadGuardedObject(v43);
LABEL_39:
        v10 = PathModalityForDisplayConfig;
        goto LABEL_18;
      }
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(
                                       v9,
                                       a2,
                                       (struct D3DKMT_GETPATHSMODALITY **)Object);
      if ( PathModalityForDisplayConfig >= 0 )
      {
        PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality(
                                         v9,
                                         a2,
                                         (struct D3DKMT_GETPATHSMODALITY *)Object[0],
                                         0LL);
        if ( PathModalityForDisplayConfig >= 0 )
        {
          v16 = v5 & 4;
LABEL_9:
          CcdRawmodeFlag = GetCcdRawmodeFlag(v18, v17);
          v23 = CcdRawmodeFlag | 0x1000000;
          if ( !a4 )
            v23 = CcdRawmodeFlag;
          if ( !v39 )
          {
            v24 = v23 | GetCcdRawmodeFlag(v22, v21) | 0x8000;
            v27 = DxDdGetDxgkWin32kInterface(v26, v25);
            v30 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(v27 + 152))(v24, Object[0]);
            if ( v30 < 0 )
              goto LABEL_13;
            if ( a4 && !v16 )
              FunctionalizeDisplayConfigRemoveUnownedPaths(Object[1], (struct D3DKMT_GETPATHSMODALITY *)Object[0]);
            v33 = DxDdGetDxgkWin32kInterface(v29, v28);
            v30 = (*(__int64 (__fastcall **)(PVOID, unsigned int *, const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))(v33 + 680))(
                    Object[0],
                    a1,
                    a2,
                    a5);
            if ( v30 < 0 )
            {
LABEL_13:
              v41 = (void **)&off_14024F1F0;
              FreePathsModality(Object[0], v28);
              if ( Object[1] )
                ObfDereferenceObject(Object[1]);
              v41 = &AUTO_TGO::`vftable';
              if ( v42 )
                PopThreadGuardedObject(v43);
              goto LABEL_17;
            }
LABEL_21:
            DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO((PVOID *)&v41);
LABEL_17:
            v10 = v30;
LABEL_18:
            GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              v40,
              v31);
            return v10;
          }
          v35 = *((_DWORD *)a2 - 50);
          if ( v35 < (unsigned int)v9 )
          {
            v36 = (unsigned __int16 *)Object[0];
            if ( a4 )
            {
              if ( *((unsigned __int16 *)Object[0] + 10) < (unsigned int)v9 )
              {
                WdLogSingleEntry0(1LL);
                v36 = (unsigned __int16 *)Object[0];
                WdLogGlobalForLineNumber = 17066;
              }
              v35 += v36[10] - (_DWORD)v9;
            }
            if ( (v5 & 2) != 0 )
            {
              v21 = 296LL * v35;
              *(_QWORD *)&v36[(unsigned __int64)v21 / 2 + 28] |= 0x4000000000uLL;
            }
            v37 = DxDdGetDxgkWin32kInterface(v22, v21);
            v30 = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD, __int64, __int64))(v37 + 712))(
                    v23,
                    Object[0],
                    v35,
                    (__int64)a2 - 192,
                    (__int64)a2 - 196);
            goto LABEL_21;
          }
          WdLogSingleEntry1(2LL, *((unsigned int *)a2 - 50));
          WdLogGlobalForLineNumber = 17058;
          goto LABEL_46;
        }
      }
    }
    DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO((PVOID *)&v41);
    goto LABEL_39;
  }
  WdLogSingleEntry1(2LL, a3);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 16945;
  return result;
}
