/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C
 * Callers:
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1403DD110 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x14005EC08 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1401D3788 (ConvertGdiScalingToDMMScaling.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140259B08 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x140259E88 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1403418DC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14034741C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1403B93C8 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1403F38BC (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x14040B150 (DxgkGetGlobalRawmodeFlag.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x14040B7C8 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _DXGK_DISPLAYMODE_INFO *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v16; // r14
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // rbx
  struct _DXGK_DISPLAYMODE_INFO *v18; // r15
  __int64 v19; // r12
  __int64 (__fastcall *v20)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *); // rax
  int v21; // eax
  __int64 v22; // rsi
  unsigned __int16 v23; // ax
  __int64 v24; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int i; // eax
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned int j; // edi
  unsigned __int16 v30; // ax
  int v31; // ebx
  __int64 v32; // rcx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v34; // r14
  int v35; // edi
  __int64 v36; // r8
  int v37; // edi
  __int64 v38; // r8
  struct D3DKMDT_HVIDPN__ *v39; // rdx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2 AdditionalSignalInfo; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v43; // eax
  bool v44; // al
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // r14
  unsigned int k; // esi
  unsigned __int16 v55; // dx
  int v56; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v57; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v58; // rax
  unsigned int m; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v60; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  _BYTE v62[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v64[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v66; // [rsp+170h] [rbp+68h] BYREF
  struct D3DKMDT_HVIDPN__ *v67; // [rsp+178h] [rbp+70h]
  struct _DXGDMM_VIDPN_INTERFACE *v68; // [rsp+180h] [rbp+78h]

  v68 = a4;
  v67 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4108;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hAdapter != NULL", 4108LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4109;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPn != NULL", 4109LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4110;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDmmVidPnInterface != NULL", 4110LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4111;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 4111LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4112;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      4112LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4113;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4113LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = a7;
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4114;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4114LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4115;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phFunctionalizedVidPn != NULL", 4115LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))*((_QWORD *)v17 + 15);
  v66 = 0LL;
  v21 = v20(v16, &v66);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry3(2LL, v19, v16, v21);
    WdLogGlobalForLineNumber = 4124;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v19,
      (__int64)v16,
      v22,
      0LL,
      0LL);
  }
  else
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v62, v66, v66);
    if ( v63 )
      v23 = *(_WORD *)(v63 + 22);
    else
      v23 = 0;
    if ( v23 < (unsigned __int16)v66 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 4132;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate PathModality for 0x%I64x paths",
        v66,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v22) = -1073741801;
    }
    else
    {
      v24 = *(_QWORD *)(a2 + 412);
      a10 = D3DKMDT_VPPS_UNINITIALIZED;
      MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                  (DXGADAPTER *)a2,
                                                  a3,
                                                  v19,
                                                  (unsigned int *const)&a10);
      v22 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource < 0 )
      {
        WdLogSingleEntry3(2LL, v19, v16, MostImportantVidPnPathTargetsFromSource);
        WdLogGlobalForLineNumber = 4147;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find the most important paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
          v19,
          (__int64)v16,
          v22,
          0LL,
          0LL);
      }
      else
      {
        for ( i = 0; ; i = a7 + 1 )
        {
          v27 = i;
          a7 = i;
          if ( i >= v66 )
            break;
          a12 = 0;
          a11 = 0;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, i);
          v43 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v16,
                  v27,
                  &a12,
                  &a11);
          v22 = v43;
          if ( v43 < 0 )
          {
            WdLogSingleEntry2(2LL, v16, v43);
            WdLogGlobalForLineNumber = 4166;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to enumerate the all the paths topology 0x%I64x (status = 0x%I64x)",
              (__int64)v16,
              v22,
              0LL,
              0LL,
              0LL);
            goto LABEL_35;
          }
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v24;
          v44 = a12 != (_DWORD)v19 || *((_BYTE *)DXGGLOBAL::GetGlobal() + 304953);
          v45 = ConvertVidPnPathToPathDescription(a2, v67, v68, a6, v16, a12, a11, v44, PathDescriptor);
          v22 = v45;
          if ( v45 < 0 )
          {
            WdLogSingleEntry4(2LL, a12, a11, v16, v45);
            WdLogGlobalForLineNumber = 4194;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to convert paths from source 0x%I64x to target 0x%I64x in VidPn topology 0x%I64x to PathsM"
                        "odality (status = 0x%I64x)",
              a12,
              a11,
              (__int64)v16,
              v22,
              0LL);
            goto LABEL_35;
          }
          if ( a12 == (_DWORD)v19 )
          {
            *((_DWORD *)PathDescriptor + 24) = *(_DWORD *)v18;
            *((_DWORD *)PathDescriptor + 25) = *((_DWORD *)v18 + 1);
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = *((_DWORD *)v18 + 2);
            *((_BYTE *)PathDescriptor + 128) = (*((_DWORD *)v18 + 10) & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v46 = *((_QWORD *)v18 + 7);
            v47 = *((_QWORD *)PathDescriptor + 1);
            v48 = *(_QWORD *)PathDescriptor | 2LL;
            *(_QWORD *)PathDescriptor = v48;
            v47 |= 2uLL;
            *((_QWORD *)PathDescriptor + 1) = v47;
            *(_QWORD *)((char *)PathDescriptor + 52) = v46;
            *((_QWORD *)PathDescriptor + 28) = *((_QWORD *)v18 + 2);
            *((_DWORD *)PathDescriptor + 60) = *((_DWORD *)v18 + 18);
            *(_QWORD *)PathDescriptor = v48 | 0x1000000;
            *((_QWORD *)PathDescriptor + 1) = v47 | 0x1000000;
            if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304896)
              && (int)DmmGetClientVidPnTargetModeInfo(
                        (DXGADAPTER *)a2,
                        a11,
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                        0LL) >= 0 )
            {
              *(_QWORD *)PathDescriptor |= 1uLL;
              *((_QWORD *)PathDescriptor + 1) |= 1uLL;
            }
            if ( a11 == a10 )
            {
              v49 = ConvertD3DddiRotationToDmmRotation(*((enum _D3DDDI_ROTATION *)v18 + 7));
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v49 = D3DKMDT_VPPR_UNINITIALIZED;
            }
            v50 = *(_QWORD *)PathDescriptor;
            *((_DWORD *)PathDescriptor + 33) = v49;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) = *((_DWORD *)v18 + 6) ^ (*((_DWORD *)PathDescriptor + 20) ^ *((_DWORD *)v18 + 6)) & 0xFFFFFFF8;
            v51 = v50 | 4;
            *(_QWORD *)PathDescriptor = v51;
            v52 = *((_DWORD *)v18 + 8);
            if ( v52 == 2 || v52 == 1 )
            {
              ConvertGdiScalingToDMMScaling(v52, (_DWORD *)PathDescriptor + 34);
            }
            else if ( (v51 & 0x40000000000LL) == 0 )
            {
              DmmGetDefaultScaling((DXGADAPTER *)a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18001820B8FLL;
          }
        }
        v28 = v63;
        for ( j = 0; ; ++j )
        {
          v30 = v28 ? *(_WORD *)(v28 + 20) : 0;
          if ( j >= v30 )
            break;
          v53 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, j);
          if ( (*(_QWORD *)v53 & 0x4000000000000LL) != 0 )
          {
            v28 = v63;
          }
          else
          {
            for ( k = j; ; ++k )
            {
              v28 = v63;
              v55 = v63 ? *(_WORD *)(v63 + 20) : 0;
              if ( k >= v55 )
                break;
              v56 = *((_DWORD *)v53 + 6);
              v57 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(v57, (const struct _LUID *)v53 + 2, v56) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, k) + 46) = j | 0xFE540000;
                v58 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, k);
                *(_QWORD *)v58 |= 0x4000000000000uLL;
              }
            }
          }
        }
        v31 = (unsigned __int8)DxgkGetGlobalRawmodeFlag() != 0 ? 0x20000 : 0;
        Current = DXGPROCESS::GetCurrent(v32);
        v34 = a13;
        v35 = v31 | 0x8000000;
        LOBYTE(v36) = 1;
        if ( (*((_DWORD *)Current + 102) & 4) == 0 )
          v35 = v31;
        v37 = v35 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v63, a2, v36, 2LL, v37, a13) >= 0 )
          goto LABEL_31;
        for ( m = 0; m < v66; ++m )
        {
          v60 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v62, m);
          if ( *((_DWORD *)v60 + 6) == (_DWORD)v19 )
            *((_QWORD *)v60 + 1) &= 0xFFFFFFFFFEFFFFFDuLL;
        }
        LOBYTE(v38) = 1;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v63,
                                                     a2,
                                                     v38,
                                                     2LL,
                                                     v37,
                                                     v34);
        v22 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v19 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 412));
        if ( (int)v22 >= 0 )
        {
LABEL_31:
          memset(v64, 0, 0x50uLL);
          v39 = *v34;
          a6 = 0LL;
          a7 = 0;
          LODWORD(v22) = RetrievePinnedModeForTarget(v68, v39, a10, v64, (struct _D3DDDI_RATIONAL *)&a6, &a7);
          if ( (int)v22 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4430;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Failed to update refresh rate!",
              4430LL,
              0LL,
              0LL,
              0LL,
              0LL);
            a1[8](a2, *v34);
            *v34 = 0LL;
          }
          else
          {
            AdditionalSignalInfo = v64[0].VideoSignalInfo.AdditionalSignalInfo;
            *((_QWORD *)v18 + 7) = v64[0].VideoSignalInfo.VSyncFreq;
            *((_QWORD *)v18 + 2) = a6;
            if ( ((*(unsigned int *)&AdditionalSignalInfo >> 3) & 0x3F) != 0 )
              *((_DWORD *)v18 + 5) *= (*(unsigned int *)&AdditionalSignalInfo >> 3) & 0x3F;
            *((_DWORD *)v18 + 3) = DmmMapVSyncFromRationalToInteger(
                                     (const struct _D3DDDI_RATIONAL *)v18 + 2,
                                     (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&AdditionalSignalInfo << 29) >> 29),
                                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4391;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"After relaxing the refresh rate matching functionalize still failed (status = 0x%I64x)",
            v22,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
LABEL_35:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v62);
  }
  return (unsigned int)v22;
}
