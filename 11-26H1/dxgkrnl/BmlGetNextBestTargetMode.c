/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1402DBD7C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1402D9F44 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400423CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14004D590 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     BmlDetermineBoostMultiplier @ 0x14026A158 (BmlDetermineBoostMultiplier.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1402DDBA4 (BmlCompareTargetModes.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        DMMVIDPNTARGETMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        D3DDDI_RATIONAL *a8,
        _DWORD *a9)
{
  __int64 v10; // rbp
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r14
  _QWORD *v20; // rbp
  struct DMMVIDPNTARGETMODE *NextMode; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  char v31; // r8
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  unsigned int v34; // ebp
  D3DDDI_RATIONAL v35; // rcx
  bool refreshed; // al
  const struct _D3DDDI_RATIONAL *v37; // rdx
  D3DDDI_RATIONAL PresentationVSync; // rax
  unsigned int v39; // r9d
  __int64 v40; // rcx
  UINT v41; // edx
  D3DDDI_RATIONAL v44; // [rsp+90h] [rbp+28h]
  char v45; // [rsp+98h] [rbp+30h]

  v10 = a3;
  v13 = WdLogNewEntry5_WdTrace(a1, a2);
  v14 = 1;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a6;
  WdLogGlobalForLineNumber = 2737;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2740;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2741;
  }
  v15 = a5;
  if ( !*(_QWORD *)(a5 + 144) )
  {
    WdLogSingleEntry2(1LL, a5, v10);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 2746;
    return result;
  }
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  *a7 = -1;
  if ( a6 == -1 || (v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6)) != 0 )
  {
    v18 = 0LL;
    v19 = 120 * v10;
    v45 = 0;
    *(_QWORD *)(120 * v10 + a1 + 100) = 0LL;
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v16, v15);
      WdLogGlobalForLineNumber = 2784;
      v45 = 1;
    }
    v20 = (_QWORD *)*((_QWORD *)a4 + 6);
    if ( v20 == (_QWORD *)((char *)a4 + 48) )
      goto LABEL_22;
    NextMode = (struct DMMVIDPNTARGETMODE *)(v20 - 1);
    if ( !NextMode )
      goto LABEL_22;
    do
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v22[4] = *((unsigned int *)NextMode + 21);
      v22[5] = *((unsigned int *)NextMode + 22);
      v23 = *((unsigned int *)NextMode + 23);
      v22[6] = v23;
      v22[7] = *((unsigned int *)NextMode + 24);
      WdLogGlobalForLineNumber = 2797;
      v24 = WdLogNewEntry5_WdTrace(v23, v22);
      v27 = *((unsigned int *)NextMode + 32);
      *(_QWORD *)(v24 + 24) = v27;
      ++*(_DWORD *)(v19 + a1 + 100);
      WdLogGlobalForLineNumber = 2799;
      if ( NextMode == (struct DMMVIDPNTARGETMODE *)v17
        || (LOBYTE(v26) = v45, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, a3, NextMode, v26)) )
      {
        WdLogNewEntry5_WdTrace(v27, v25);
        WdLogGlobalForLineNumber = 2807;
      }
      else
      {
        ++*(_DWORD *)(v19 + a1 + 104);
        if ( (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, v18, v45) == 1
          && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, v17, v45) == -1) )
        {
          WdLogNewEntry5_WdTrace(v29, v28);
          WdLogGlobalForLineNumber = 2836;
          v18 = (__int64)NextMode;
        }
      }
      NextMode = DMMVIDPNTARGETMODESET::GetNextMode(a4, NextMode);
    }
    while ( NextMode );
    if ( !v18 )
    {
LABEL_22:
      WdLogNewEntry5_WdTrace(v16, v15);
      result = 3223192326LL;
      WdLogGlobalForLineNumber = 2993;
      return result;
    }
    v30 = *(_DWORD **)(v19 + a1 + 16);
    *a7 = *(_DWORD *)(v18 + 24);
    if ( (*v30 & 0x1000000) == 0 )
    {
      *a8 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v18 + 72));
      *a9 = 1;
      if ( (v31 & 1) != 0
        && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v18)
        && (unsigned int)BmlDetermineBoostMultiplier(v18, (unsigned int *)&qword_140167348) )
      {
        PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v18 + 72));
        v40 = qword_140167348;
        v44.Numerator = PresentationVSync.Numerator;
        v41 = v39 * PresentationVSync.Denominator;
        if ( v39 > 1 && __PAIR64__(v41, PresentationVSync.Numerator) == qword_140167348 )
        {
          v44.Denominator = v39 * PresentationVSync.Denominator;
          *a8 = v44;
          *a9 = v39;
        }
        else if ( PresentationVSync.Numerator * (unsigned __int64)(unsigned int)dword_14016735C >= (unsigned int)dword_140167358
                                                                                                 * (unsigned __int64)(PresentationVSync.Denominator + v41) )
        {
          v44.Denominator = PresentationVSync.Denominator + v41;
          *a8 = v44;
          *a9 = v39 + 1;
        }
        else if ( v39 > 1 )
        {
          if ( PresentationVSync.Numerator * (unsigned __int64)(unsigned int)dword_140167354 < (unsigned int)dword_140167350
                                                                                             * (unsigned __int64)v41
            || PresentationVSync.Numerator == dword_140167350 && v41 == dword_140167354 )
          {
            *a9 = v39;
            v44.Denominator = v39 * PresentationVSync.Denominator;
            *a8 = v44;
          }
          else
          {
            *a9 = v39;
            *a8 = (D3DDDI_RATIONAL)v40;
          }
        }
      }
      goto LABEL_20;
    }
    v34 = v30[60];
    if ( v34 == -1 )
      v34 = BmlDetermineBoostMultiplier(v18, v30 + 56);
    if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v18) )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)v18,
                    (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v19 + a1 + 16) + 224LL),
                    v34);
      v37 = (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v19 + a1 + 16) + 224LL);
      if ( refreshed )
      {
        v35 = *v37;
        v14 = v34;
        goto LABEL_27;
      }
      if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v18, v37, 1u) )
      {
        v35 = *(D3DDDI_RATIONAL *)(*(_QWORD *)(v19 + a1 + 16) + 224LL);
        goto LABEL_27;
      }
    }
    v35 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v18 + 72));
LABEL_27:
    *a8 = v35;
    *a9 = v14;
LABEL_20:
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
    DxgkLogCodePointPacket(
      0x21u,
      a3,
      *(_DWORD *)(v18 + 84),
      *(_DWORD *)(v18 + 88),
      *(_QWORD *)((char *)ContainingAdapter + 412));
    return 0LL;
  }
  WdLogNewEntry5_WdTrace(v16, v15);
  result = 3223192337LL;
  WdLogGlobalForLineNumber = 2763;
  return result;
}
