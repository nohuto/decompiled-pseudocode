/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025C10C
 * Callers:
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x14025B634 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1403847C8 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FillOnePathModalityFromVidPn@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14026A3F0 (-FillOnePathModalityFromVidPn@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCR.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 Container; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v9; // r14d
  struct DXGADAPTER *v10; // r15
  __int64 v11; // rax
  __int64 result; // rax
  char *v13; // r14
  char *v14; // rcx
  const struct DMMVIDPNPRESENTPATH *v15; // rbx
  unsigned int v16; // ebp
  int v17; // ecx
  char *v18; // rax

  v3 = (char *)a1 + 160;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
  v9 = *((_DWORD *)a1 + 10);
  v10 = ContainingAdapter;
  if ( v9 <= a2 )
  {
    v13 = (char *)a1 + 24;
    v14 = (char *)*((_QWORD *)a1 + 3);
    v15 = 0LL;
    v16 = 0;
    if ( v14 != v13 )
      v15 = (const struct DMMVIDPNPRESENTPATH *)(v14 - 8);
    while ( v15 && v16 < a2 )
    {
      *((_DWORD *)a3 + 6) = *(_DWORD *)(*((_QWORD *)v15 + 11) + 24LL);
      v17 = *(_DWORD *)(*((_QWORD *)v15 + 12) + 24LL);
      *(_QWORD *)a3 |= 0x600000000000uLL;
      *((_DWORD *)a3 + 7) = v17;
      *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)v10 + 412);
      *(_QWORD *)a3 |= 0x100000000000uLL;
      FillOnePathModalityFromVidPn(v15, a3);
      v18 = (char *)*((_QWORD *)v15 + 1);
      v15 = (const struct DMMVIDPNPRESENTPATH *)(v18 - 8);
      if ( v18 == v13 )
        v15 = 0LL;
      a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      ++v16;
    }
    return 0LL;
  }
  else
  {
    v11 = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    WdLogSingleEntry3(2LL, v11, v9, a2);
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 1778;
  }
  return result;
}
