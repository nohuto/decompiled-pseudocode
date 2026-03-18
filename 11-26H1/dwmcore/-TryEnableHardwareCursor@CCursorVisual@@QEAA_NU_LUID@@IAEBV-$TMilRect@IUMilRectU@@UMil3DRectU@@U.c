/*
 * XREFs of ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x1801DF864
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7258 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 */

bool __fastcall CCursorVisual::TryEnableHardwareCursor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        float a6)
{
  __int64 v6; // rcx
  char v7; // bl
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  float v12; // [rsp+28h] [rbp-60h]
  _OWORD v13[4]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+70h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 696);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_OWORD *)(a5 + 16);
    v13[0] = *(_OWORD *)a5;
    v9 = *(_OWORD *)(a5 + 32);
    v13[1] = v8;
    v10 = *(_OWORD *)(a5 + 48);
    v14 = *(_DWORD *)(a5 + 64);
    LOBYTE(v12) = LOBYTE(a6);
    v13[2] = v9;
    v13[3] = v10;
    return CCursorState::TryEnableHardwareCursor(v6, a2, a3, a4, (CMILMatrix *)v13, v12);
  }
  return v7;
}
