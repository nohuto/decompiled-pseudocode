/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1403847C8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025C10C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  const struct DMMVIDPNTOPOLOGY *v7; // rbp
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // r8d
  int v14; // eax
  signed int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v6 )
  {
    v7 = (const struct DMMVIDPNTOPOLOGY *)(v6 + 96);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v6 + 48));
    v9 = *((_DWORD *)v7 + 10);
    v10 = *(_QWORD *)((char *)ContainingAdapter + 412);
    v11 = operator new[](144 * v9 + 80, 0x4E506456u, 256LL);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = 33;
      *(_DWORD *)(v11 + 4) = 144 * v9 + 80;
      *(_DWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_OWORD *)(v11 + 16) = 0LL;
      *(_DWORD *)(v11 + 48) = a2;
      *(_QWORD *)(v11 + 52) = v10;
      *(_DWORD *)(v11 + 60) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v11 + 64) = *(_DWORD *)(a1 + 12);
      v13 = *(_DWORD *)(v11 + 68) ^ (*(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v11 + 68)) & 1;
      *(_DWORD *)(v11 + 68) = v13;
      v14 = (*(_DWORD *)(a1 + 24) ^ v13) & 2;
      *(_DWORD *)(v12 + 72) = a3;
      *(_DWORD *)(v12 + 76) = v9;
      *(_DWORD *)(v12 + 68) = v13 ^ v14;
      v15 = DmmStoreVidPnPathDataIntoDiagPacket(v7, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v12 + 80));
      if ( v15 < 0 || (v15 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, v16, v17, v18), v15 < 0) )
        DxgkLogCodePointPacket(0x37u, v15, 0, 0, v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v12);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v10);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
