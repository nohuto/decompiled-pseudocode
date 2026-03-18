/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140199390
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x140199370 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1401997B0 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // r14
  int *v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  char v7; // di
  __int64 v8; // r9
  unsigned int v9; // r12d
  int v10; // r10d
  int v11; // r13d
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  unsigned int v15; // edx
  int v16; // ecx
  int *v17; // r11
  unsigned __int64 v18; // r10
  BOOL v19; // r15d
  int v20; // r9d
  int v21; // r8d
  unsigned __int64 v22; // rdx
  int v23; // esi
  int v24; // r12d
  _BYTE *v25; // rdi
  char v26; // cl
  unsigned __int64 v27; // rax
  _BYTE *v28; // r14
  int *v29; // rcx
  int v30; // r8d
  int v31; // ebx
  int v32; // r15d
  int v33; // eax
  __int64 v34; // r9
  bool v35; // zf
  unsigned int v36; // edx
  unsigned int v37; // r15d
  int v38; // eax
  int v39; // [rsp+20h] [rbp-79h]
  int v40; // [rsp+24h] [rbp-75h]
  char v41; // [rsp+28h] [rbp-71h]
  unsigned int v42; // [rsp+2Ch] [rbp-6Dh]
  unsigned int v43; // [rsp+30h] [rbp-69h]
  int v44; // [rsp+34h] [rbp-65h]
  int v45; // [rsp+38h] [rbp-61h]
  char v46; // [rsp+3Ch] [rbp-5Dh]
  int v47; // [rsp+40h] [rbp-59h]
  BOOL v48; // [rsp+44h] [rbp-55h]
  _DWORD v49[2]; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-49h]
  int *v51; // [rsp+58h] [rbp-41h]
  int *v52; // [rsp+60h] [rbp-39h]
  int *v53; // [rsp+68h] [rbp-31h]
  __int64 v54; // [rsp+70h] [rbp-29h]
  unsigned __int64 v55; // [rsp+78h] [rbp-21h]
  _QWORD v56[2]; // [rsp+80h] [rbp-19h] BYREF
  int v57; // [rsp+90h] [rbp-9h]
  int v58; // [rsp+94h] [rbp-5h]
  int v59; // [rsp+98h] [rbp-1h]
  int v60; // [rsp+9Ch] [rbp+3h]
  __int64 v61; // [rsp+A0h] [rbp+7h]
  int v64; // [rsp+110h] [rbp+77h]
  int v65; // [rsp+118h] [rbp+7Fh]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v56[0] = 0LL;
  LODWORD(v6) = *((_DWORD *)a1 + 4);
  v43 = v5 & 7;
  v7 = 8 * (v5 & 3);
  v59 = 0;
  v41 = 32 - v7;
  v55 = (unsigned __int64)(v4 + 24);
  v61 = 0LL;
  v53 = v2;
  v51 = v4;
  v46 = v7;
  do
  {
    v8 = *v2;
    v9 = 0;
    v10 = v2[1];
    v11 = *v2 & 3;
    v12 = v2[2] & 3;
    v13 = v2[2] - v8;
    v14 = v2[3] - v10;
    v64 = v12;
    if ( v13 - (-v11 & 3) - v12 >= 0 )
      v9 = (v13 - (-v11 & 3) - v12) >> 2;
    v65 = v9;
    if ( v11 == 1 )
    {
      if ( v13 == 1 )
      {
        v11 = 4;
      }
      else
      {
        if ( v13 != 2 )
          goto LABEL_6;
        v11 = 5;
      }
      goto LABEL_49;
    }
    if ( v11 == 2 && v13 == 1 )
    {
      v11 = 6;
LABEL_49:
      v64 = 0;
    }
LABEL_6:
    v57 = 0;
    v15 = ((int)v8 >> 2) & 1;
    v16 = (v14 >> 3) + 1;
    v42 = v15;
    v40 = v16;
    v17 = &v51[3 * ((v10 - *((_DWORD *)v3 + 9)) & 7)];
    v18 = *(_QWORD *)v3 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) + (int)v6 * v10;
    v44 = 8 * v6;
    v52 = v17;
    v19 = (((int)v8 >> 2) & 1) == 0;
    v50 = v18;
    v48 = v19;
    v20 = v14 & 7;
    v58 = 8;
    v39 = v20;
    v56[1] = v49;
    v60 = 2;
    if ( v14 > 8 )
    {
      v14 = 8;
      goto LABEL_26;
    }
    while ( v14 )
    {
LABEL_26:
      --v14;
      v30 = v20;
      v47 = v14;
      if ( !*((_DWORD *)v3 + 8) )
      {
        v31 = v17[v15];
        v32 = v17[v19];
        goto LABEL_28;
      }
      v36 = *v17;
      v37 = v17[1];
      if ( v43 >= 4 )
      {
        v31 = v17[1];
        if ( v43 == 4 )
        {
          v32 = *v17;
          goto LABEL_59;
        }
        v31 = (v36 >> v41) | (v37 << v7);
        v32 = (v37 >> v41) | (v36 << v7);
      }
      else
      {
        v31 = (v37 >> v41) | (v36 << v7);
        v32 = (v36 >> v41) | (v37 << v7);
      }
      v20 = v39;
      v16 = v40;
LABEL_59:
      if ( v42 )
      {
        v38 = v31;
        v31 = v32;
        v32 = v38;
      }
LABEL_28:
      --v20;
      v33 = v16 - 1;
      v39 = v20;
      v28 = (_BYTE *)v18;
      if ( v30 )
        v33 = v16;
      v40 = v33;
      v21 = v33;
      if ( v33 )
      {
        v34 = v44;
        v54 = v44;
        while ( 1 )
        {
          --v21;
          v22 = v9;
          v45 = v21;
          v23 = v31;
          v24 = v32;
          v25 = v28;
          if ( v11 )
            break;
LABEL_9:
          v26 = v65;
          if ( v65 > 7 )
          {
            v59 = v65;
            v49[0] = v23;
            v49[1] = v24;
            v56[0] = v25;
            vFetchAndCopy(v56);
            v26 = v65;
            v21 = v45;
            v34 = v54;
            v25 += 4 * v65;
          }
          else
          {
            if ( (unsigned int)v22 >= 2 )
            {
              v27 = v22 >> 1;
              do
              {
                *(_DWORD *)v25 = v23;
                LODWORD(v22) = v22 - 2;
                *((_DWORD *)v25 + 1) = v24;
                v25 += 8;
                --v27;
              }
              while ( v27 );
            }
            if ( (_DWORD)v22 )
            {
              *(_DWORD *)v25 = v23;
              v25 += 4;
            }
          }
          if ( v64 )
          {
            if ( (v26 & 1) != 0 )
              v23 = v24;
            switch ( v64 )
            {
              case 1:
                *v25 = v23;
                break;
              case 2:
                *(_WORD *)v25 = v23;
                break;
              case 3:
                *(_WORD *)v25 = v23;
                v25[2] = BYTE2(v23);
                break;
            }
          }
          v9 = v65;
          v28 += v34;
          if ( !v21 )
          {
            v17 = v52;
            v7 = v46;
            v14 = v47;
            v18 = v50;
            v20 = v39;
            goto LABEL_22;
          }
        }
        if ( v11 == 1 )
        {
          v28[1] = BYTE1(v31);
        }
        else if ( v11 != 2 )
        {
          if ( v11 == 3 )
          {
            v28[3] = HIBYTE(v31);
          }
          else if ( v11 == 4 )
          {
            v28[1] = BYTE1(v31);
          }
          else
          {
            if ( v11 == 5 )
              v28[1] = BYTE1(v31);
            v28[2] = BYTE2(v31);
          }
          goto LABEL_36;
        }
        *((_WORD *)v28 + 1) = HIWORD(v31);
LABEL_36:
        v25 = v28 + 4;
        v23 = v32;
        v24 = v31;
        goto LABEL_9;
      }
LABEL_22:
      v3 = a1;
      v29 = v17 + 3;
      v17 = v51;
      v15 = v42;
      v19 = v48;
      v6 = *((int *)a1 + 4);
      v18 += v6;
      v50 = v18;
      if ( (unsigned __int64)v29 < v55 )
        v17 = v29;
      v16 = v40;
      v52 = v17;
    }
    v2 = v53 + 4;
    v35 = a2-- == 1;
    v53 += 4;
  }
  while ( !v35 );
}
