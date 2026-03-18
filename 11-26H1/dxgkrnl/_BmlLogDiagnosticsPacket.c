/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1403D43D8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x14041E938 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005B81C (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@Z @ 0x1403D47C8 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGDIAGNOSTICS **this, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  struct _DXGK_DIAG_HEADER *v10; // rbx
  unsigned int v12; // r14d
  VIDPN_MGR *i; // r15
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // [rsp+68h] [rbp+20h]

  v8 = 408 * *a4 + 64;
  v9 = operator new[](v8, 0x63644356u, 256LL);
  v10 = (struct _DXGK_DIAG_HEADER *)v9;
  if ( v9 )
  {
    *(_DWORD *)v9 = 50;
    *(_DWORD *)(v9 + 4) = v8;
    v12 = 0;
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_DWORD *)(v9 + 48) = *a4;
    *(_DWORD *)(v9 + 52) = *((_DWORD *)a4 + 1);
    *(_DWORD *)(v9 + 56) = a2;
    for ( i = *(VIDPN_MGR **)(a3 + 48); v12 < *a4; ++v12 )
    {
      v14 = 120LL * v12;
      v15 = *(_QWORD *)&a4[v14 + 16];
      if ( (*(_QWORD *)v15 & 0x700000000000LL) == 0x700000000000LL )
      {
        v16 = 408LL * v12;
        *(_QWORD *)((char *)v10 + v16 + 64) = *(_QWORD *)v15;
        *(_QWORD *)((char *)v10 + v16 + 72) = *(_QWORD *)(v15 + 8);
        *(_QWORD *)((char *)v10 + v16 + 80) = *(_QWORD *)(v15 + 16);
        *(_DWORD *)((char *)v10 + v16 + 88) = *(_DWORD *)(v15 + 24);
        *(_DWORD *)((char *)v10 + v16 + 92) = *(_DWORD *)(v15 + 28);
        *(_DWORD *)((char *)v10 + v16 + 136) = *(_DWORD *)(v15 + 32);
        *(_QWORD *)((char *)v10 + v16 + 104) = *(_QWORD *)(v15 + 36);
        *(_QWORD *)((char *)v10 + v16 + 112) = *(_QWORD *)(v15 + 44);
        *(_QWORD *)((char *)v10 + v16 + 120) = *(_QWORD *)(v15 + 52);
        *(_QWORD *)((char *)v10 + v16 + 128) = *(_QWORD *)(v15 + 60);
        *(_QWORD *)((char *)v10 + v16 + 96) = *(unsigned int *)(v15 + 72);
        *(_DWORD *)((char *)v10 + v16 + 140) = (int)(*(_DWORD *)(v15 + 80) << 29) >> 29;
        *(_DWORD *)((char *)v10 + v16 + 144) = *(_DWORD *)(v15 + 88);
        *(_DWORD *)((char *)v10 + v16 + 148) = *(_DWORD *)(v15 + 92);
        *(_OWORD *)((char *)v10 + v16 + 152) = *(_OWORD *)(v15 + 96);
        *(_OWORD *)((char *)v10 + v16 + 168) = *(_OWORD *)(v15 + 112);
        *(_DWORD *)((char *)v10 + v16 + 184) = *(_DWORD *)(v15 + 132);
        *(_DWORD *)((char *)v10 + v16 + 188) = *(_DWORD *)(v15 + 136);
        *(_DWORD *)((char *)v10 + v16 + 192) = *(_DWORD *)(v15 + 140);
        *(_QWORD *)((char *)v10 + v16 + 196) = *(_QWORD *)(v15 + 144);
        *(_QWORD *)((char *)v10 + v16 + 204) = *(_QWORD *)(v15 + 224);
        *(_DWORD *)((char *)v10 + v16 + 220) = *(_DWORD *)(v15 + 240);
        *(_DWORD *)((char *)v10 + v16 + 384) = *(_DWORD *)&a4[v14 + 24];
        *(_DWORD *)((char *)v10 + v16 + 388) = *(_DWORD *)&a4[v14 + 28];
        *(_WORD *)((char *)v10 + v16 + 392) = *(_WORD *)&a4[v14 + 32];
        *(_QWORD *)((char *)v10 + v16 + 396) = *(_QWORD *)&a4[v14 + 36];
        *(_QWORD *)((char *)v10 + v16 + 404) = *(_QWORD *)&a4[v14 + 44];
        *(_QWORD *)((char *)v10 + v16 + 412) = *(_QWORD *)&a4[v14 + 52];
        *(_DWORD *)((char *)v10 + v16 + 420) = *(_DWORD *)&a4[v14 + 60];
        *(_WORD *)((char *)v10 + v16 + 424) = *(_WORD *)&a4[v14 + 64];
        *(_WORD *)((char *)v10 + v16 + 426) = *(_WORD *)&a4[v14 + 66];
        *(_WORD *)((char *)v10 + v16 + 428) = *(_WORD *)&a4[v14 + 68];
        *(_WORD *)((char *)v10 + v16 + 430) = *(_WORD *)&a4[v14 + 70];
        *(_DWORD *)((char *)v10 + v16 + 432) = *(_DWORD *)&a4[v14 + 72];
        *(_DWORD *)((char *)v10 + v16 + 436) = *(_DWORD *)&a4[v14 + 76];
        *(_DWORD *)((char *)v10 + v16 + 440) = *(_DWORD *)&a4[v14 + 80];
        *(_DWORD *)((char *)v10 + v16 + 444) = *(_DWORD *)&a4[v14 + 84];
        *(_DWORD *)((char *)v10 + v16 + 448) = *(_DWORD *)&a4[v14 + 88];
        *(_DWORD *)((char *)v10 + v16 + 456) = *(_DWORD *)&a4[v14 + 96];
        *(_DWORD *)((char *)v10 + v16 + 452) = *(_DWORD *)&a4[v14 + 92];
        v17 = 0LL;
        *(_DWORD *)((char *)v10 + v16 + 464) = *(_DWORD *)&a4[v14 + 104];
        *(_DWORD *)((char *)v10 + v16 + 460) = *(_DWORD *)&a4[v14 + 100];
        v21 = (_QWORD *)((char *)v10 + v16 + 224);
        v21[2] = *(_QWORD *)(v15 + 16);
        *(_DWORD *)((char *)v10 + v16 + 248) = *(_DWORD *)(v15 + 24);
        v18 = *(_DWORD *)(v15 + 28);
        *v21 = 0x700000000000LL;
        *(_DWORD *)((char *)v10 + v16 + 252) = v18;
        v19 = *(_QWORD *)(a3 + 120);
        if ( v19 != a3 + 120 )
          v17 = (_QWORD *)(v19 - 8);
        while ( v17 )
        {
          if ( *(_DWORD *)(v15 + 16) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(i) + 103)
            && *(_DWORD *)(v15 + 20) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(i) + 104)
            && *(_DWORD *)(v15 + 24) == *(_DWORD *)(v17[11] + 24LL)
            && *(_DWORD *)(v15 + 28) == *(_DWORD *)(v17[12] + 24LL) )
          {
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>(v17, v21);
            break;
          }
          v20 = v17[1];
          v17 = (_QWORD *)(v20 - 8);
          if ( v20 == a3 + 120 )
            v17 = 0LL;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v12, v15);
        WdLogGlobalForLineNumber = 5540;
      }
    }
    VIDPN_MGR::WriteDiagEntry(this, v10);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, a4, *a4);
    WdLogGlobalForLineNumber = 5511;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225626LL;
  }
}
