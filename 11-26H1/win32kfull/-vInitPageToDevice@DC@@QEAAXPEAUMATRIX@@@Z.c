/*
 * XREFs of ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x140110EB0
 * Callers:
 *     NtGdiGetTransform @ 0x1401107A0 (NtGdiGetTransform.c)
 * Callees:
 *     ?flComputeWtoDAccelFlags@EXFORMOBJ@@SAKPEBUMATRIX@@@Z @ 0x1401108D8 (-flComputeWtoDAccelFlags@EXFORMOBJ@@SAKPEBUMATRIX@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

void __fastcall DC::vInitPageToDevice(DC *this, struct MATRIX *a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  __int64 v4; // r8
  const struct MATRIX *v5; // r11
  int v6; // eax
  __int64 v7; // r11

  *(_DWORD *)a2 = *((_DWORD *)this + 107);
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 108);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 109);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 110);
  bFToL(this, (char *)a2 + 24, 6LL);
  bFToL(v3, v2 + 28, v4);
  v6 = EXFORMOBJ::flComputeWtoDAccelFlags(v5);
  *(_DWORD *)(v7 + 32) = v6;
}
