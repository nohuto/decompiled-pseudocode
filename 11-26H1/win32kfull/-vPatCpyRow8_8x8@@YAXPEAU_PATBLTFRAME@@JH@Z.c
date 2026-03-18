/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x14019908C
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x14033DDF0 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1401997B0 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v3; // r8
  int v4; // eax
  struct _PATBLTFRAME *v5; // r11
  int v6; // edx
  __int64 v7; // r13
  int v8; // edi
  int *v9; // r15
  __int64 v10; // r10
  int v11; // r12d
  int v12; // r14d
  int v13; // edx
  int v14; // r8d
  int v15; // r14d
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // r8d
  int v19; // esi
  unsigned int v20; // r10d
  unsigned int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  unsigned __int64 v30; // rax
  int v31; // r14d
  int v32; // r14d
  int *v33; // rcx
  int v34; // r9d
  char v35; // [rsp+20h] [rbp-58h]
  _DWORD v36[2]; // [rsp+28h] [rbp-50h] BYREF
  int *v37; // [rsp+30h] [rbp-48h]
  int *v38; // [rsp+38h] [rbp-40h]
  int *v39; // [rsp+40h] [rbp-38h]
  _QWORD v40[2]; // [rsp+48h] [rbp-30h] BYREF
  int v41; // [rsp+58h] [rbp-20h]
  int v42; // [rsp+5Ch] [rbp-1Ch]
  int v43; // [rsp+60h] [rbp-18h]
  int v44; // [rsp+64h] [rbp-14h]
  __int64 v45; // [rsp+68h] [rbp-10h]
  char v47; // [rsp+C8h] [rbp+50h]
  unsigned int v49; // [rsp+D8h] [rbp+60h]

  v3 = (int *)*((_QWORD *)a1 + 3);
  v40[0] = 0LL;
  v4 = *((_DWORD *)a1 + 4) * a2;
  v5 = a1;
  v43 = 0;
  v45 = 0LL;
  v37 = v3;
  v6 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v7 = *(_QWORD *)a1 + v4;
  v49 = *((_DWORD *)a1 + 8) & 7;
  v8 = 8 * (*((_DWORD *)a1 + 8) & 3);
  v38 = (int *)*((_QWORD *)a1 + 1);
  v47 = 32 - v8;
  v39 = v38 + 24;
  v9 = (int *)((char *)v38 + (unsigned int)(12 * v6));
  v35 = v8;
  do
  {
    v10 = *v3;
    v11 = 0;
    v12 = v3[1];
    v13 = *v3 & 3;
    v14 = v12 - v10;
    v15 = v12 & 3;
    if ( v14 - (-v13 & 3) - v15 >= 0 )
      v11 = (v14 - (-v13 & 3) - v15) >> 2;
    if ( v13 == 1 )
    {
      if ( v14 == 1 )
      {
        v13 = 4;
      }
      else
      {
        if ( v14 != 2 )
          goto LABEL_13;
        v13 = 5;
      }
      goto LABEL_12;
    }
    if ( v13 == 2 && v14 == 1 )
    {
      v13 = 6;
LABEL_12:
      v15 = 0;
    }
LABEL_13:
    v41 = 0;
    v40[1] = v36;
    v42 = 8;
    v16 = ((int)v10 >> 2) & 1;
    v44 = 2;
    v17 = v7 + (v10 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)v5 + 8) )
    {
      v20 = *v9;
      v21 = v9[1];
      if ( v49 >= 4 )
      {
        v18 = v9[1];
        if ( v49 == 4 )
        {
          v19 = *v9;
        }
        else
        {
          v18 = (v20 >> v47) | (v21 << v8);
          v19 = (v21 >> v47) | (v20 << v8);
        }
      }
      else
      {
        v18 = (v21 >> v47) | (v20 << v8);
        v19 = (v20 >> v47) | (v21 << v8);
      }
      if ( (_DWORD)v16 )
      {
        v22 = v18;
        v18 = v19;
        v19 = v22;
      }
    }
    else
    {
      v18 = v9[v16];
      v19 = v9[(((int)v10 >> 2) & 1) == 0];
    }
    v23 = v11;
    v24 = v18;
    if ( v13 )
    {
      v25 = v13 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_36;
              }
              else
              {
                *(_BYTE *)(v17 + 1) = BYTE1(v18);
              }
              *(_BYTE *)(v17 + 2) = BYTE2(v18);
            }
            else
            {
              *(_BYTE *)(v17 + 1) = BYTE1(v18);
            }
          }
          else
          {
            *(_BYTE *)(v17 + 3) = HIBYTE(v18);
          }
LABEL_36:
          v24 = v19;
          v17 += 4LL;
          v19 = v18;
          goto LABEL_37;
        }
      }
      else
      {
        *(_BYTE *)(v17 + 1) = BYTE1(v18);
      }
      *(_WORD *)(v17 + 2) = HIWORD(v18);
      goto LABEL_36;
    }
LABEL_37:
    if ( v11 <= 7 )
    {
      if ( (unsigned int)v11 >= 2 )
      {
        v30 = (unsigned __int64)(unsigned int)v11 >> 1;
        do
        {
          *(_DWORD *)v17 = v24;
          v23 -= 2;
          *(_DWORD *)(v17 + 4) = v19;
          v17 += 8LL;
          --v30;
        }
        while ( v30 );
      }
      if ( v23 )
      {
        *(_DWORD *)v17 = v24;
        v17 += 4LL;
      }
    }
    else
    {
      v36[0] = v24;
      v36[1] = v19;
      v43 = v11;
      v40[0] = v17;
      vFetchAndCopy(v40);
      v5 = a1;
      v17 += 4LL * v11;
    }
    if ( v15 )
    {
      if ( (v11 & 1) != 0 )
        v24 = v19;
      v31 = v15 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            *(_WORD *)v17 = v24;
            *(_BYTE *)(v17 + 2) = BYTE2(v24);
          }
        }
        else
        {
          *(_WORD *)v17 = v24;
        }
      }
      else
      {
        *(_BYTE *)v17 = v24;
      }
    }
    v33 = v9 + 3;
    v3 = v37 + 2;
    v34 = a3 - 1;
    v9 = v38;
    v7 += *((int *)v5 + 4);
    LOBYTE(v8) = v35;
    if ( v33 < v39 )
      v9 = v33;
    v37 += 2;
    --a3;
  }
  while ( v34 );
}
