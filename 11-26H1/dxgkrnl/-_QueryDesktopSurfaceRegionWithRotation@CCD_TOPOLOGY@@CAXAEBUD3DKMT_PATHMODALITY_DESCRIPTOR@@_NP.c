/*
 * XREFs of ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x140405020
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1404459A8 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14005F79C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

void __fastcall CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        char a2,
        struct _D3DKMDT_2DREGION *a3)
{
  UINT v3; // eax
  int v4; // eax
  __int64 v5; // r9
  __int16 v6; // r10

  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 && !a2 )
  {
    a3->cx = *((_DWORD *)a1 + 38);
    v3 = *((_DWORD *)a1 + 39);
LABEL_4:
    a3->cy = v3;
    return;
  }
  v4 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)a1 + 33));
  if ( (v6 & 0x200) != 0 && ((v4 - 1) & 0xFFFFFFFD) != 0 )
  {
    a3->cx = *(_DWORD *)(v5 + 100);
    v3 = *(_DWORD *)(v5 + 96);
    goto LABEL_4;
  }
  *a3 = *(struct _D3DKMDT_2DREGION *)(v5 + 96);
}
