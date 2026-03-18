/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x14025B634
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025C10C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  char *v2; // rbx
  __int64 Container; // rax
  DXGADAPTER *ContainingAdapter; // rax
  struct _LUID *v7; // rdx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _DXGK_DIAG_HEADER *v13; // rdi
  signed int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
  v16 = 0LL;
  DXGADAPTER::IsAdapterSessionized(ContainingAdapter, v7, 0LL, &v16);
  v8 = ContainedBy<DMMVIDPN>::GetContainer((__int64)v2);
  v9 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v8 + 48));
  v10 = *((_DWORD *)a1 + 10);
  v11 = *(_QWORD *)((char *)v9 + 412);
  v12 = operator new[](144 * v10 + 56, 0x4E506456u, 256LL);
  v13 = (struct _DXGK_DIAG_HEADER *)v12;
  if ( !v12 )
  {
    DxgkLogCodePointPacketForSession(56, v16, 0xC0000017, 0, 0, v11);
    return;
  }
  *(_DWORD *)v12 = 34;
  *(_DWORD *)(v12 + 4) = 144 * v10 + 56;
  *(_DWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_OWORD *)(v12 + 16) = 0LL;
  *(_DWORD *)(v12 + 48) = a2;
  *(_DWORD *)(v12 + 52) = v10;
  v14 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v10, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v12 + 56));
  v15 = v16;
  if ( v14 < 0 )
    goto LABEL_6;
  v14 = DxgkWriteDiagEntry(v13, v16);
  if ( v14 < 0 )
  {
    v15 = v16;
LABEL_6:
    DxgkLogCodePointPacketForSession(56, v15, v14, 0, 0, v11);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
}
