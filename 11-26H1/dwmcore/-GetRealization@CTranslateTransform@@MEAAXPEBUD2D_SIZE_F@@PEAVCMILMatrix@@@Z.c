/*
 * XREFs of ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801D35D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform::GetRealization(
        CTranslateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4

  v3 = *((_DWORD *)this + 40);
  v4 = *((_DWORD *)this + 41);
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = v3;
  *((_DWORD *)a3 + 13) = v4;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_BYTE *)a3 + 65) &= 0xE9u;
  *((_BYTE *)a3 + 65) |= 0x29u;
  *((_BYTE *)a3 + 64) = -88;
}
