/*
 * XREFs of RIMTransformCoordinates @ 0x1400F8820
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x140205ED0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     AdjustLinearity @ 0x14017C294 (AdjustLinearity.c)
 *     ApiSetAdjustLinearity @ 0x1401BD338 (ApiSetAdjustLinearity.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v5; // rdx
  INT v6; // edi
  int v8; // r15d
  INT v9; // r12d
  INT v10; // ecx
  INT v11; // eax
  INT v12; // ebx
  int v13; // esi
  INT v14; // ecx
  INT v15; // r13d
  __int64 *v16; // r8
  INT v17; // r10d
  unsigned int v18; // ecx
  INT v19; // r9d
  unsigned int v20; // r8d
  INT v21; // r11d
  unsigned int v22; // eax
  INT v23; // r13d
  bool v24; // zf
  unsigned __int64 result; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // rcx
  INT v30; // eax
  INT v31; // eax
  INT v32; // eax
  int *v33; // rdx
  INT v34; // [rsp+20h] [rbp-48h] BYREF
  INT v35; // [rsp+24h] [rbp-44h]
  int v36; // [rsp+28h] [rbp-40h]
  INT v37; // [rsp+2Ch] [rbp-3Ch]
  INT v38; // [rsp+30h] [rbp-38h]
  INT v39; // [rsp+34h] [rbp-34h]
  INT v40; // [rsp+38h] [rbp-30h]
  int v41; // [rsp+3Ch] [rbp-2Ch]
  INT c[2]; // [rsp+40h] [rbp-28h]
  INT b[2]; // [rsp+48h] [rbp-20h]
  INT v44; // [rsp+50h] [rbp-18h]
  INT v45; // [rsp+54h] [rbp-14h]
  int v46; // [rsp+58h] [rbp-10h]
  INT v49; // [rsp+C0h] [rbp+58h] BYREF
  _QWORD *v50; // [rsp+C8h] [rbp+60h]

  v50 = a4;
  v5 = a1;
  v6 = *a3;
  v46 = *(_DWORD *)(a1 + 224);
  v8 = 1;
  *(_QWORD *)c = a1 + 124;
  v9 = *(_DWORD *)(a1 + 124);
  v10 = *(_DWORD *)(a1 + 132);
  *a5 = 0;
  v11 = a3[1];
  v12 = v11;
  v45 = *(_DWORD *)(v5 + 136);
  v13 = v10 - 1;
  v44 = v10;
  v14 = *(_DWORD *)(v5 + 128);
  v15 = v45 - 1;
  v41 = 0;
  v16 = *(__int64 **)(v5 + 400);
  v49 = v6;
  v34 = v11;
  v35 = v14;
  v36 = v45 - 1;
  if ( v16 )
  {
    v27 = *v16;
    *(_QWORD *)b = v27;
    if ( v27 )
    {
      v41 = 1;
      v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 48) + 4224LL);
      if ( v28 && v28() >= 0 )
        AdjustLinearity(*(_QWORD *)b + 16LL, &v49, &v34, *(_QWORD *)c);
      v11 = v34;
      v12 = v34;
      v6 = v49;
      v5 = a1;
      *a3 = v49;
      a3[1] = v11;
    }
    v14 = v35;
  }
  if ( v6 > v13 )
  {
    *a3 = v13;
    v6 = v13;
  }
  else if ( v6 < v9 )
  {
    *a3 = v9;
    v6 = v9;
  }
  if ( v12 > v15 )
  {
    a3[1] = v15;
    v12 = v15;
  }
  else if ( v11 < v14 )
  {
    a3[1] = v14;
    v12 = v14;
  }
  v17 = *(_DWORD *)(v5 + 212);
  v18 = *(_DWORD *)(v5 + 148);
  v19 = *(_DWORD *)(v5 + 208);
  v20 = *(_DWORD *)(v5 + 220) - v17;
  v21 = *(_DWORD *)(v5 + 136);
  v40 = *(_DWORD *)(v5 + 152);
  v22 = *(_DWORD *)(v5 + 216) - v19;
  v49 = v6;
  v34 = v12;
  v39 = v21;
  b[0] = v18;
  c[0] = v22;
  v38 = v17;
  v37 = v20;
  if ( v18 > v22 )
  {
    v31 = EngMulDiv(v19, *(_DWORD *)(v5 + 132), v18);
    if ( v6 >= v31 )
    {
      if ( v6 > v31 )
      {
        v6 = EngMulDiv(v6 - v31, b[0], c[0]);
LABEL_36:
        v20 = v37;
        v17 = v38;
        v21 = v39;
        v49 = v6;
        if ( v6 > v13 )
        {
          v6 = v44;
          v49 = v44;
          *a5 = 1;
        }
        goto LABEL_9;
      }
    }
    else
    {
      *a5 = 1;
    }
    v6 = -1;
    goto LABEL_36;
  }
LABEL_9:
  if ( v40 <= v20 )
    goto LABEL_10;
  v32 = EngMulDiv(v17, v21, v40);
  if ( v12 < v32 )
  {
    *a5 = 1;
LABEL_42:
    v12 = -1;
    goto LABEL_43;
  }
  if ( v12 <= v32 )
    goto LABEL_42;
  v12 = EngMulDiv(v12 - v32, v40, v37);
LABEL_43:
  v34 = v12;
  if ( v12 > v15 )
  {
    v12 = v45;
    v34 = v45;
    *a5 = 1;
  }
LABEL_10:
  switch ( v46 )
  {
    case 2:
      v34 = v6;
      v6 = v35 + v15 - v12;
      v12 = v34;
      v49 = v6;
      goto LABEL_14;
    case 3:
      v6 = v9 + v13 - v6;
      v30 = v15;
      v23 = v35;
      v49 = v6;
      v12 = v30 - v12 + v35;
      v34 = v12;
      goto LABEL_16;
    case 4:
      v49 = v12;
      v12 = v9 + v13 - v6;
      v6 = v49;
      v34 = v12;
LABEL_14:
      v36 = v13;
      v13 = v15;
      break;
  }
  v23 = v35;
LABEL_16:
  v24 = v41 == 0;
  *a3 = v6;
  a3[1] = v12;
  if ( !v24 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 80LL);
    if ( v29 )
    {
      ApiSetAdjustLinearity(v29 + 16, &v49, &v34, a1 + 192);
      v6 = v49;
      v12 = v34;
      *a3 = v49;
      a3[1] = v12;
    }
  }
  result = (unsigned __int64)a5;
  v26 = v50;
  if ( *a5 )
  {
    result = *(_QWORD *)a3;
    *v50 = *(_QWORD *)a3;
  }
  if ( a2 )
  {
    if ( (int)*v26 <= v13 && (unsigned int)*v26 != -1 )
    {
      v13 = v36;
      v8 = 0;
      v9 = v23;
    }
    v33 = a3 + 1;
    if ( v8 )
    {
      v12 = v6;
      v33 = a3;
    }
    result = (unsigned int)(v13 - v12);
    if ( v12 - v9 < (int)result )
      v13 = v9;
    *v33 = v13;
  }
  return result;
}
