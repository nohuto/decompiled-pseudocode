/*
 * XREFs of InverseXformMPORect3 @ 0x140428EF4
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InverseXformMPORect3(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v4; // r10d
  int v5; // ecx
  int v6; // edi
  int v7; // r9d
  int *v8; // rsi
  _DWORD *v9; // r14
  int v10; // r11d
  __int64 result; // rax
  int v12; // r10d
  int v13; // ebp
  int v14; // edi
  int v15; // r13d
  int v16; // r12d
  int v17; // esi
  int v18; // r15d
  int v19; // edi
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // eax
  int v26; // [rsp+38h] [rbp+10h]

  v4 = a3[2];
  v5 = *a3;
  v6 = a2[5];
  if ( (*a2 & 2) != 0 )
    v7 = a2[7] - v4;
  else
    v7 = v5 - v6;
  v8 = a2 + 8;
  v9 = a2 + 6;
  if ( (*a2 & 1) != 0 )
    v10 = *v8 - a3[3];
  else
    v10 = a3[1] - *v9;
  result = (unsigned int)a2[2];
  v12 = v4 - v5;
  v13 = a2[7] - v6;
  v14 = *v8;
  v15 = a2[1];
  v16 = a2[4] - result;
  v17 = a3[3] - a3[1];
  v18 = a2[3] - v15;
  v19 = v14 - *v9;
  v26 = a2[2];
  if ( v13 > 0 && v19 > 0 )
  {
    if ( a2[13] != 1 )
    {
      switch ( a2[13] )
      {
        case 2:
          v23 = v10 * v18 / v19 + v15;
          v24 = v16 * (v13 - v12 - v7) / v13 + v26;
          a1[2] = v23 + v18 * v17 / v19;
          v25 = v16 * v12 / v13;
          break;
        case 3:
          v23 = v18 * (v13 - v12 - v7) / v13 + v15;
          v24 = v16 * (v19 - v17 - v10) / v19 + v26;
          a1[2] = v23 + v18 * v12 / v13;
          v25 = v16 * v17 / v19;
          break;
        case 4:
          v20 = v18 * (v19 - v17 - v10) / v19 + v15;
          v21 = v7 * v16 / v13 + v26;
          a1[2] = v20 + v18 * v17 / v19;
          v22 = v16 * v12 / v13;
          goto LABEL_18;
        default:
          return result;
      }
      a1[1] = v24;
      result = (unsigned int)(v24 + v25);
      *a1 = v23;
LABEL_19:
      a1[3] = result;
      return result;
    }
    v20 = v7 * v18 / v13 + v15;
    v21 = v10 * v16 / v19 + v26;
    a1[2] = v20 + v18 * v12 / v13;
    v22 = v16 * v17 / v19;
LABEL_18:
    a1[1] = v21;
    result = (unsigned int)(v21 + v22);
    *a1 = v20;
    goto LABEL_19;
  }
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 1);
  return result;
}
