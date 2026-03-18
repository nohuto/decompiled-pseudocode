/*
 * XREFs of ?CalcImageTransform@CSwapChainRealization@@IEBA_NPEAVCMILMatrix@@@Z @ 0x1802ACA5C
 * Callers:
 *     ?GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ADA90 (-GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CSwapChainRealization::CalcImageTransform(CSwapChainRealization *this, struct CMILMatrix *a2)
{
  int v2; // xmm4_4
  int v3; // xmm3_4
  int v4; // xmm2_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // eax

  v2 = *((_DWORD *)this + 43);
  v3 = *((_DWORD *)this + 42);
  v4 = *((_DWORD *)this + 41);
  v5 = *((_DWORD *)this + 40);
  v6 = *((_DWORD *)this + 39);
  v7 = *((_DWORD *)this + 38);
  *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
  *((_BYTE *)a2 + 65) &= 0xEBu;
  *((_BYTE *)a2 + 65) |= 0x28u;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 1) = v6;
  *((_DWORD *)a2 + 4) = v5;
  *((_DWORD *)a2 + 5) = v4;
  *((_DWORD *)a2 + 12) = v3;
  *((_DWORD *)a2 + 13) = v2;
  *(_DWORD *)a2 = v7;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_BYTE *)a2 + 64) = 8;
  return CMILMatrix::IsIdentity<0>((__int64)a2) ^ 1;
}
