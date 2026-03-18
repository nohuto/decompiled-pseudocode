/*
 * XREFs of vDirectStretch8 @ 0x1401948D0
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401356B8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // r13d
  unsigned __int8 *v3; // r11
  int v4; // edx
  unsigned __int8 *v5; // r14
  int v6; // r10d
  int v7; // ecx
  int v8; // edi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  int v12; // r15d
  unsigned int v13; // r12d
  int v14; // ebx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // edi
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // r13
  int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned __int8 *v26; // rbx
  int v27; // r9d
  unsigned __int8 *v28; // rbx
  int v29; // r8d
  unsigned __int8 *v30; // rbx
  int v31; // ecx
  bool v32; // zf
  bool v33; // cf
  int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+4h] [rbp-64h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+78h] [rbp+10h]
  int v42; // [rsp+80h] [rbp+18h]
  unsigned int v43; // [rsp+88h] [rbp+20h]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = 0;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  v8 = v1[13];
  v9 = v1[6] - v7;
  v10 = v1[12];
  v11 = (unsigned int)v1[10];
  v12 = v1[11];
  v13 = v1[15];
  v14 = ((_BYTE)v3 + (_BYTE)v7) & 3;
  LODWORD(v15) = -v6 & 3;
  v41 = v2;
  v42 = v6;
  v16 = v7 - v15 - v14;
  v35 = v14;
  v36 = v8;
  if ( v2 > 0 )
  {
    if ( v10 )
      v4 = v1[2] * v10;
    v17 = v16;
    v18 = v4;
    v39 = v16;
    v37 = v4;
    v38 = v9;
    do
    {
      v19 = v8 + v13;
      v20 = v1[14];
      v21 = v5;
      v43 = v19;
      switch ( v6 )
      {
        case 1:
          v33 = v12 + v20 < v20;
          *v3 = *v5;
          v20 += v12;
          v21 = &v5[v33 + v11];
          ++v3;
          break;
        case 2:
          break;
        case 3:
          goto LABEL_22;
        default:
          goto LABEL_8;
      }
      v33 = v12 + v20 < v20;
      *v3 = *v21;
      v20 += v12;
      v21 += v11 + v33;
      ++v3;
LABEL_22:
      v33 = v12 + v20 < v20;
      *v3 = *v21;
      v20 += v12;
      v21 += v11 + v33;
      ++v3;
LABEL_8:
      v22 = &v3[v17];
      if ( v3 != v22 )
      {
        do
        {
          v23 = *v21;
          v24 = v12 + v20;
          v25 = v12 + v12 + v20 + v12;
          v26 = &v21[(v12 + v20 < v20) + v11];
          v20 = v25 + v12;
          v27 = *v26;
          v28 = &v26[(v24 + v12 < v24) + v11];
          v29 = *v28;
          v30 = &v28[(v25 < v24 + v12) + v11];
          v31 = *v30;
          v21 = &v30[(v25 + v12 < v25) + v11];
          *(_DWORD *)v3 = v23 | ((v27 | ((v29 | (v31 << 8)) << 8)) << 8);
          v3 += 4;
        }
        while ( v3 != v22 );
        v1 = (_DWORD *)a1;
        v6 = v42;
        v19 = v43;
        v18 = v37;
      }
      if ( v35 == 1 )
        goto LABEL_19;
      LOBYTE(v15) = v35 - 2;
      if ( v35 == 2 )
        goto LABEL_18;
      if ( v35 == 3 )
      {
        v33 = v12 + v20 < v20;
        *v3 = *v21;
        v20 += v12;
        v21 += v11 + v33;
        ++v3;
LABEL_18:
        *v3 = *v21;
        v21 += v11 + (v12 + v20 < v20);
        ++v3;
LABEL_19:
        LOBYTE(v15) = *v21;
        *v3++ = *v21;
      }
      v5 += v18;
      if ( v19 < v13 )
      {
        v15 = (int)v1[2];
        v5 += v15;
      }
      v3 += v38;
      v13 = v19;
      v32 = v41-- == 1;
      v17 = v39;
      v8 = v36;
    }
    while ( !v32 );
  }
  return v15;
}
