/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1401D1E94
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1401D1A0C (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1401D16D0 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1401D18C0 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1401D3080 (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
 */

__int64 __fastcall AugmentVidPnTopologyOnNoLkg(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        void *a3,
        const struct _DXGDMM_INTERFACE *a4,
        unsigned int a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a6,
        unsigned int a7,
        char a8,
        unsigned __int64 *const a9,
        unsigned int *const a10)
{
  unsigned int v10; // esi
  __int64 v15; // r15
  unsigned __int64 *v16; // r12
  unsigned int *v17; // rbx
  int AvailableTarget; // eax
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // r14
  int v29; // eax
  __int64 v30; // r15
  unsigned int v31; // [rsp+20h] [rbp-68h]
  unsigned int v32; // [rsp+20h] [rbp-68h]
  unsigned int *v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]

  v10 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3231;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3231LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3232;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3232LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3233;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hDxgAdapter)", 3233LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3234;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDxgDmmInterface)",
      3234LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = a5;
  if ( a5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3235;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3235LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3236;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(o_pNumVidPnPresentPathsFromSource)",
      3236LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = a10;
  *v16 = 0LL;
  if ( v17 )
    *v17 = -1;
  a5 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, v15, (__int64)a4, v31, 2u);
  v19 = AvailableTarget;
  if ( AvailableTarget != -1071774925 )
  {
    if ( AvailableTarget >= 0 )
      goto LABEL_31;
    WdLogSingleEntry3(2LL, a1, v15, AvailableTarget);
    v34 = v19;
    v33 = (unsigned int *)v15;
    WdLogGlobalForLineNumber = 3276;
    goto LABEL_38;
  }
  v20 = v15;
  WdLogSingleEntry2(7LL, a1, v15);
  WdLogGlobalForLineNumber = 3269;
  v22 = AddPathToFirstAvailableTarget(a1, (__int64)a2, v15, v21, v32, 1u);
  v19 = v22;
  if ( v22 != -1071774925 )
  {
    if ( v22 >= 0 )
      goto LABEL_31;
    WdLogSingleEntry3(2LL, a1, v15, v22);
    v34 = v19;
    v33 = (unsigned int *)v15;
    WdLogGlobalForLineNumber = 3315;
LABEL_38:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to augment VidPN topology 0x%I64x at source 0x%I64x (status = 0x%I64x)",
      (__int64)a1,
      (__int64)v33,
      v34,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  WdLogSingleEntry2(7LL, a1, v15);
  WdLogGlobalForLineNumber = 3308;
  a7 = -1;
  v23 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, &a5);
  v19 = v23;
  if ( v23 == -1071774925 )
  {
    v26 = WdLogNewEntry5_WdTrace(v25, v24);
    *(_QWORD *)(v26 + 24) = a1;
    *(_QWORD *)(v26 + 32) = v15;
    WdLogGlobalForLineNumber = 3349;
    return 3223192371LL;
  }
  if ( v23 < 0 )
  {
    WdLogSingleEntry3(2LL, a1, v15, v23);
    WdLogGlobalForLineNumber = 3356;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find cloned target in topology 0x%I64x while trying to augment it on source 0x%I64x (status = 0x%I64x)",
      (__int64)a1,
      v15,
      v19,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3362;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ReclaimedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
      3362LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v28 = a7;
  WdLogSingleEntry3(7LL, a7, a1, v15);
  WdLogGlobalForLineNumber = 3365;
  v29 = AddPresentPath(a1, a2, v15, a7);
  v30 = v29;
  if ( v29 == -1071774975 )
  {
    WdLogSingleEntry3(7LL, v20, (unsigned int)v28, a3);
    WdLogGlobalForLineNumber = 3384;
    return 3223192371LL;
  }
  if ( v29 == -1071774920 )
  {
    WdLogSingleEntry3(7LL, v20, v28, a3);
    WdLogGlobalForLineNumber = 3395;
    return 3223192371LL;
  }
  if ( v29 < 0 )
  {
    WdLogSingleEntry4(2LL, v20, v28, a1, v29);
    WdLogGlobalForLineNumber = 3403;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to add present path (0x%I64x, 0x%I64x) to VidPN topology 0x%I64x (status = 0x%I64x)",
      v20,
      v28,
      (__int64)a1,
      v30,
      0LL);
    return (unsigned int)v30;
  }
  v10 = a5;
LABEL_31:
  *v16 = 1LL;
  if ( v17 )
    *v17 = v10;
  return 0LL;
}
