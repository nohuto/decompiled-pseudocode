/*
 * XREFs of RIMTransformCoordinates @ 0x140076844
 * Callers:
 *     RIMApplyTransforms @ 0x1400786DC (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1401E5610 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     ApiSetAdjustLinearity @ 0x1400764CC (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // eax
  int v7; // ecx
  int v9; // edi
  int v10; // r10d
  int v11; // r12d
  int v12; // esi
  INT v13; // edx
  int v14; // eax
  INT v15; // ebx
  INT v16; // r8d
  INT v17; // r9d
  INT v18; // r15d
  INT v19; // r11d
  INT v20; // edx
  INT v21; // r10d
  unsigned int v22; // edx
  INT v23; // r9d
  unsigned int v24; // ecx
  INT v25; // r11d
  unsigned int v26; // eax
  INT v27; // ecx
  unsigned __int64 result; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  INT v31; // eax
  INT v32; // eax
  INT v33; // eax
  INT v34; // eax
  int v35; // eax
  int *v36; // r8
  int v37; // [rsp+20h] [rbp-48h]
  INT v38; // [rsp+24h] [rbp-44h]
  INT v39; // [rsp+28h] [rbp-40h]
  _QWORD *b; // [rsp+30h] [rbp-38h]
  INT ba; // [rsp+30h] [rbp-38h]
  INT bb[2]; // [rsp+30h] [rbp-38h]
  INT v43; // [rsp+38h] [rbp-30h]
  INT v44; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v45; // [rsp+40h] [rbp-28h]
  int v46; // [rsp+44h] [rbp-24h]
  INT c; // [rsp+48h] [rbp-20h]
  int v48; // [rsp+4Ch] [rbp-1Ch]
  int v49; // [rsp+50h] [rbp-18h]
  int v50; // [rsp+B0h] [rbp+48h] BYREF
  int v51; // [rsp+B8h] [rbp+50h]
  INT v52; // [rsp+C0h] [rbp+58h] BYREF
  _QWORD *v53; // [rsp+C8h] [rbp+60h]

  v53 = a4;
  v51 = a2;
  v5 = *(_DWORD *)(a1 + 224);
  v7 = *a3;
  v46 = 0;
  v9 = *a3;
  v49 = v5;
  v10 = *a3;
  v11 = *(_DWORD *)(a1 + 124);
  v48 = *(_DWORD *)(a1 + 132);
  v12 = v48 - 1;
  v50 = *a3;
  v13 = *(_DWORD *)(a1 + 136);
  *a5 = 0;
  v14 = a3[1];
  v15 = v14;
  v16 = *(_DWORD *)(a1 + 128);
  v17 = v14;
  v18 = v13 - 1;
  v39 = v13;
  v19 = v14;
  b = *(_QWORD **)(a1 + 400);
  v20 = v14;
  v52 = v14;
  v37 = v16;
  if ( b )
  {
    *(_QWORD *)bb = *b;
    v20 = v14;
    if ( *(_QWORD *)bb )
    {
      v46 = 1;
      ApiSetAdjustLinearity(*(_QWORD *)bb + 16LL, (__int64)&v50, (__int64)&v52, a1 + 124);
      v14 = v52;
      v15 = v52;
      v9 = v50;
      v17 = v52;
      v16 = v37;
      v20 = v52;
      a3[1] = v52;
      v19 = v14;
      *a3 = v9;
      v10 = v9;
      v7 = v9;
    }
  }
  if ( v10 > v12 )
  {
    *a3 = v12;
    v9 = v48 - 1;
  }
  else
  {
    v20 = v17;
    if ( v7 < v11 )
    {
      *a3 = v11;
      v9 = v11;
      v20 = v19;
    }
  }
  if ( v20 > v18 )
  {
    a3[1] = v18;
    v15 = v18;
  }
  else if ( v14 < v16 )
  {
    a3[1] = v16;
    v15 = v16;
  }
  v21 = *(_DWORD *)(a1 + 212);
  v22 = *(_DWORD *)(a1 + 148);
  v23 = *(_DWORD *)(a1 + 208);
  v24 = *(_DWORD *)(a1 + 220) - v21;
  v25 = *(_DWORD *)(a1 + 136);
  v45 = *(_DWORD *)(a1 + 152);
  v26 = *(_DWORD *)(a1 + 216) - v23;
  v50 = v9;
  v52 = v15;
  v44 = v25;
  ba = v22;
  c = v26;
  v43 = v21;
  v38 = v24;
  if ( v22 > v26 )
  {
    v31 = EngMulDiv(v23, *(_DWORD *)(a1 + 132), v22);
    if ( v9 >= v31 )
    {
      if ( v9 > v31 )
      {
        v32 = EngMulDiv(v9 - v31, ba, c);
        v9 = v32;
        v50 = v32;
LABEL_32:
        v24 = v38;
        v21 = v43;
        v25 = v44;
        if ( v32 > v12 )
        {
          v9 = v48;
          v50 = v48;
          *a5 = 1;
        }
        goto LABEL_9;
      }
    }
    else
    {
      *a5 = 1;
    }
    v9 = -1;
    v50 = -1;
    v32 = -1;
    goto LABEL_32;
  }
LABEL_9:
  if ( v45 <= v24 )
  {
    v27 = v39;
    goto LABEL_11;
  }
  v33 = EngMulDiv(v21, v25, v45);
  if ( v15 < v33 )
  {
    *a5 = 1;
LABEL_38:
    v34 = -1;
    goto LABEL_39;
  }
  if ( v15 <= v33 )
    goto LABEL_38;
  v34 = EngMulDiv(v15 - v33, v45, v38);
LABEL_39:
  v27 = v39;
  v15 = v34;
  v52 = v34;
  if ( v34 > v18 )
  {
    v15 = v39;
    v52 = v39;
    *a5 = 1;
  }
LABEL_11:
  switch ( v49 )
  {
    case 2:
      v52 = v9;
      v9 = v37 + v18 - v15;
      v15 = v52;
      v50 = v9;
      goto LABEL_15;
    case 3:
      v9 = v11 + v12 - v9;
      v50 = v9;
      v15 = v37 + v18 - v15;
      v52 = v15;
      break;
    case 4:
      v50 = v15;
      v15 = v11 + v12 - v9;
      v9 = v50;
      v52 = v15;
LABEL_15:
      v18 = v48 - 1;
      v12 = v27 - 1;
      break;
  }
  a3[1] = v15;
  *a3 = v9;
  if ( v46 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 80LL);
    if ( v30 )
    {
      ApiSetAdjustLinearity(v30 + 16, (__int64)&v50, (__int64)&v52, a1 + 192);
      *a3 = v50;
      a3[1] = v52;
    }
  }
  result = (unsigned __int64)a5;
  v29 = v53;
  if ( *a5 )
  {
    result = *(_QWORD *)a3;
    *v53 = *(_QWORD *)a3;
  }
  if ( v51 )
  {
    if ( (int)*v29 > v12 || (unsigned int)*v29 == -1 )
    {
      v35 = 1;
    }
    else
    {
      v11 = v37;
      v12 = v18;
      v35 = 0;
    }
    v36 = a3 + 1;
    if ( v35 )
      v36 = a3;
    result = (unsigned int)*v36;
    if ( *v36 - v11 < v12 - (int)result )
      v12 = v11;
    *v36 = v12;
  }
  return result;
}
