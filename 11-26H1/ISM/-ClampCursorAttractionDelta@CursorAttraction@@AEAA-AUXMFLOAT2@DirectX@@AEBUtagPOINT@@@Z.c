/*
 * XREFs of ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x1801A8838
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A865C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CursorAttraction::ClampCursorAttractionDelta(__int64 a1, float *a2, int *a3)
{
  int v4; // r14d
  _DWORD *v6; // r8
  float v7; // xmm0_4
  float *v8; // rdx
  float v10; // xmm2_4
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // rbx
  float *v15; // rcx
  _DWORD *v16; // r9
  int *v17; // rcx
  int v18; // eax

  v4 = *a3;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 24);
  v6 = a3 + 1;
  v7 = *a2;
  v8 = a2 + 1;
  v10 = *v8;
  v11 = v4 + (int)v7;
  v12 = *v6 + (int)*v8;
  if ( v7 >= 0.0 )
  {
    v14 = v6;
    v15 = v8;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(a1 + 16);
  if ( v11 > v13 )
  {
    v14 = a3 + 1;
    v15 = a2 + 1;
LABEL_5:
    v16 = v6;
    if ( v7 <= 0.0 )
      goto LABEL_8;
    v13 = *(_DWORD *)(a1 + 16);
    v6 = v14;
    v16 = v14;
    v8 = v15;
    if ( v11 < v13 )
      goto LABEL_8;
  }
  v16 = v6;
  *a2 = (float)(v13 - v4);
LABEL_8:
  v17 = (int *)(a1 + 20);
  if ( v10 < 0.0 && (v18 = *v17, v12 <= *v17) || v10 > 0.0 && (v18 = *v17, v12 >= *v17) )
    *v8 = (float)(v18 - *v16);
  return a2;
}
