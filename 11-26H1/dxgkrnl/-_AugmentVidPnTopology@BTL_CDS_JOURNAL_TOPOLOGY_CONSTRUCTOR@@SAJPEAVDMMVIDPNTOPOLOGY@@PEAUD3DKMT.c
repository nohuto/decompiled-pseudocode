/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026AD0C
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140264F7C (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  DMMVIDPNTOPOLOGY *v2; // rbx
  __int64 v3; // r12
  __int64 Container; // rax
  VIDPN_MGR *v6; // r15
  int FirstAvailableTarget; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // esi
  unsigned int v12; // edi
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edi
  struct DXGADAPTER *v16; // rax
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  struct DXGADAPTER *v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  int v24[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+50h] BYREF
  int v27; // [rsp+B0h] [rbp+58h] BYREF
  int v28; // [rsp+B8h] [rbp+60h] BYREF

  v2 = a1;
  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v26 = -1;
  v28 = -2;
  v24[0] = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v27 = 0;
  while ( 1 )
  {
    do
    {
      FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                               v2,
                               v3,
                               1,
                               &v26,
                               (DMMVIDPNTARGETSET *)&v28,
                               v24,
                               &v27);
      v8 = FirstAvailableTarget;
      if ( FirstAvailableTarget == -1071774925 )
      {
        v21 = *((_DWORD *)a2 + 3);
        v22 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v6);
        WdLogSingleEntry3(7LL, *((int *)ContainingAdapter + 104), v22, v21);
        result = 3223192371LL;
        WdLogGlobalForLineNumber = 358;
        return result;
      }
      if ( FirstAvailableTarget < 0 )
      {
        v18 = *((unsigned int *)a2 + 3);
        v19 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
        v20 = VIDPN_MGR::GetContainingAdapter(v6);
        WdLogSingleEntry4(2LL, v8, *((int *)v20 + 104), v19, v18);
        result = (unsigned int)v8;
        WdLogGlobalForLineNumber = 368;
        return result;
      }
      v3 = v26;
    }
    while ( v27 );
    v9 = VIDPN_MGR::AddPathToVidPnTopology(
           v6,
           v2,
           *((_DWORD *)a2 + 3),
           v26,
           (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
           0xFFFFu,
           0,
           D3DKMDT_MCC_ENFORCE);
    v10 = v9;
    if ( v9 != -1071774975 )
      break;
    v11 = *((_DWORD *)a2 + 3);
    v12 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
    v13 = VIDPN_MGR::GetContainingAdapter(v6);
    WdLogSingleEntry4(7LL, *((int *)v13 + 104), v12, v11, v3);
    v2 = a1;
    WdLogGlobalForLineNumber = 392;
  }
  if ( v9 >= 0 )
  {
    *((_DWORD *)a2 + 5) = v28;
    *((_DWORD *)a2 + 6) = v24[0];
    *((_DWORD *)a2 + 4) = v3;
  }
  else
  {
    v14 = *((unsigned int *)a2 + 3);
    v15 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
    v16 = VIDPN_MGR::GetContainingAdapter(v6);
    WdLogSingleEntry5(2LL, v10, *((int *)v16 + 104), v15, v14, v3);
    WdLogGlobalForLineNumber = 407;
  }
  return (unsigned int)v10;
}
