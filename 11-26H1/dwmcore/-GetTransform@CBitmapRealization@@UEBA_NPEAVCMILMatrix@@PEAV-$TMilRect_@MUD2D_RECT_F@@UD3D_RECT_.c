/*
 * XREFs of ?GetTransform@CBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B4220
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  float v5; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_BYTE *)(a2 + 65) &= 0xE9u;
  *(_BYTE *)(a2 + 65) |= 0x29u;
  *(_BYTE *)(a2 + 64) = -86;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 32LL))(a1, &v7);
    v4 = v7;
    *(_QWORD *)a3 = 0LL;
    v5 = (float)v8;
    *(float *)(a3 + 8) = (float)v4;
    *(float *)(a3 + 12) = v5;
  }
  return 0;
}
