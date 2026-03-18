/*
 * XREFs of ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1401AEE80
 * Callers:
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401AEC80 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1401AEF94 (-MDiv64@@YA_J_J00@Z.c)
 */

__int64 __fastcall bDoGradient(__int64 *a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, struct _GRADSTRUCT *a7)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 result; // rax

  v10 = a4;
  v11 = *((int *)a7 + 5);
  v12 = *(_DWORD *)a7 * (a6 - a4) - *((_DWORD *)a7 + 1) * (a5 - a4);
  v13 = *((_DWORD *)a7 + 3) * (a5 - a4) - *((_DWORD *)a7 + 2) * (a6 - a4);
  if ( v11 < 0 )
  {
    v13 = -v13;
    v12 = -v12;
    v11 = -v11;
  }
  v14 = MDiv64(v13, *((_QWORD *)a7 + 4), v11);
  *a1 = v13 * v15 + v14;
  v18 = MDiv64(v12, v17, v16);
  v21 = *((int *)a7 + 4);
  *a2 = v12 * v19 + v18;
  result = 1LL;
  *a3 = (((v20 >> 1) + 1) * v22 - v21 - 1) / v11 + v21 + ((v20 >> 1) + 1) * v19 + (v10 << 48);
  return result;
}
