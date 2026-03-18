/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm4_4
  int v4; // xmm3_4
  int v5; // xmm2_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // eax

  v3 = *((_DWORD *)this + 45);
  v4 = *((_DWORD *)this + 44);
  v5 = *((_DWORD *)this + 43);
  v6 = *((_DWORD *)this + 42);
  v7 = *((_DWORD *)this + 41);
  v8 = *((_DWORD *)this + 40);
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_BYTE *)a3 + 65) &= 0xEBu;
  *((_BYTE *)a3 + 65) |= 0x28u;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 1) = v7;
  *((_DWORD *)a3 + 4) = v6;
  *((_DWORD *)a3 + 5) = v5;
  *((_DWORD *)a3 + 12) = v4;
  *((_DWORD *)a3 + 13) = v3;
  *(_DWORD *)a3 = v8;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_BYTE *)a3 + 64) = 8;
}
