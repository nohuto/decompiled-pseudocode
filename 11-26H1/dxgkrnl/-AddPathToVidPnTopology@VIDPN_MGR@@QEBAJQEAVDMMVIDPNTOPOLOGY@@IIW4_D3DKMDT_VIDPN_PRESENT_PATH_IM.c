/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4
 * Callers:
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402623E0 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026AD0C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026B150 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140344070 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x140349A8C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x140363614 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140046C5C (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x14004BDA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        char a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // r14
  __int64 v10; // r12
  DMMVIDPN *Container; // r13
  __int64 v13; // rbp
  _QWORD *v14; // r8
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 result; // rax
  _QWORD *v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DMMVIDPNTARGET *TargetFromId; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v26; // edi
  DMMVIDPNPRESENTPATH *v27; // rax
  DMMVIDPNPRESENTPATH *v28; // rax
  struct DMMVIDPNPRESENTPATH *v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  _QWORD *v34; // rax
  void (__fastcall **v35)(struct DMMVIDPNPRESENTPATH *, __int64); // rax
  char *v36; // rax
  char *v37; // rcx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  struct DMMVIDPNTOPOLOGY *v46; // r8
  struct DMMVIDPNTOPOLOGY *v47; // r9
  __int64 v48; // rax
  __int64 (__fastcall ***v50)(_QWORD, __int64); // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2629;
  }
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v13 = 0LL;
  v50 = 0LL;
  v14 = (_QWORD *)(*((_QWORD *)Container + 38) + 24LL);
  if ( (_QWORD *)*v14 != v14 )
    v13 = *v14 - 8LL;
  while ( 1 )
  {
    if ( !v13 )
    {
      WdLogSingleEntry2(2LL, v10, a2);
      result = 3223192324LL;
      WdLogGlobalForLineNumber = 2644;
      return result;
    }
    if ( *(_DWORD *)(v13 + 24) == (_DWORD)v10 )
      break;
    v19 = *(_QWORD **)(v13 + 8);
    v13 = (__int64)(v19 - 1);
    if ( v19 == v14 )
      v13 = 0LL;
  }
  v15 = 0LL;
  v16 = (_QWORD *)(*((_QWORD *)Container + 39) + 24LL);
  if ( (_QWORD *)*v16 != v16 )
    v15 = *v16 - 8LL;
  while ( 1 )
  {
    if ( !v15 )
    {
      WdLogSingleEntry2(2LL, v8, a2);
      WdLogGlobalForLineNumber = 2658;
      return 3223192325LL;
    }
    if ( *(_DWORD *)(v15 + 24) == (_DWORD)v8 )
      break;
    v17 = *(_QWORD **)(v15 + 8);
    v15 = (__int64)(v17 - 1);
    if ( v17 == v16 )
      v15 = 0LL;
  }
  v46 = (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24);
  v47 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)a2 + 3);
  v37 = 0LL;
  if ( v47 != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    v37 = (char *)v47 - 8;
  while ( 1 )
  {
    if ( !v37 )
    {
      if ( v47 == v46 || v47 == (struct DMMVIDPNTOPOLOGY *)8 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 0LL) + 24) = a2;
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        v43 = WdLogNewEntry5_WdTrace(0LL, 0LL);
        *(_QWORD *)(v43 + 24) = v10;
        *(_QWORD *)(v43 + 32) = a2;
        WdLogGlobalForLineNumber = 187;
      }
      goto LABEL_26;
    }
    if ( *(_DWORD *)(*((_QWORD *)v37 + 11) + 24LL) == (_DWORD)v10 )
      break;
    v36 = (char *)*((_QWORD *)v37 + 1);
    v37 = v36 - 8;
    if ( v36 == (char *)v46 )
      v37 = 0LL;
  }
  v20 = *(_DWORD *)(*((_QWORD *)v37 + 12) + 24LL);
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v37) )
  {
    if ( !g_OSTestSigningEnabled
      || (v22 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(this) + 111), (v22 & 8) == 0) )
    {
      v48 = WdLogNewEntry5_WdTrace(v22, v21);
      *(_QWORD *)(v48 + 24) = v8;
      *(_QWORD *)(v48 + 32) = 1LL;
      WdLogGlobalForLineNumber = 2697;
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v50);
      return 3223192321LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v15 + 96) + 556LL) & 0x100) != 0 )
  {
    v45 = WdLogNewEntry5_WdTrace(v22, v21);
    *(_QWORD *)(v45 + 24) = v8;
    *(_QWORD *)(v45 + 32) = 2LL;
    WdLogGlobalForLineNumber = 2705;
    return 3223192321LL;
  }
  TargetFromId = DMMVIDPN::GetTargetFromId(Container, v20);
  if ( !TargetFromId )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2715;
    return 3223192325LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)TargetFromId + 12) + 556LL) & 0x100) != 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
    v44[3] = v20;
    v44[4] = v8;
    v44[5] = 3LL;
    WdLogGlobalForLineNumber = 2725;
    return 3223192321LL;
  }
LABEL_26:
  v26 = a5;
  if ( a5 != 255 )
    goto LABEL_27;
  v38 = *((_DWORD *)a2 + 49);
  v26 = D3DKMDT_VPPI_PRIMARY;
  v39 = 1;
  if ( (v38 & 1) == 0 )
    goto LABEL_27;
  do
  {
    ++v26;
    v39 *= 2;
  }
  while ( (v39 & v38) != 0 );
  if ( v26 > 32 )
  {
    WdLogSingleEntry2(2LL, 32LL, a2);
    WdLogGlobalForLineNumber = 295;
    v42 = WdLogNewEntry5_WdTrace(v41, v40);
    *(_QWORD *)(v42 + 24) = a2;
    *(_QWORD *)(v42 + 32) = -1071774892LL;
    result = 3223192404LL;
    WdLogGlobalForLineNumber = 2744;
  }
  else
  {
LABEL_27:
    v27 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
    if ( v27
      && (v28 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                  v27,
                  (struct DMMVIDPNSOURCE *)v13,
                  (struct DMMVIDPNTARGET *)v15,
                  v26,
                  a6),
          (v29 = v28) != 0LL) )
    {
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v28 + 7))((__int64)v28 + 56) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2771;
      }
      v30 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v29, (unsigned int)a8, a7);
      v33 = v30;
      if ( v30 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31);
        v34[3] = v10;
        v34[4] = v8;
        v34[5] = a2;
        v34[6] = v33;
        v35 = *(void (__fastcall ***)(struct DMMVIDPNPRESENTPATH *, __int64))v29;
        WdLogGlobalForLineNumber = 2785;
        (*v35)(v29, 1LL);
        return (unsigned int)v33;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 2765;
    }
  }
  return result;
}
