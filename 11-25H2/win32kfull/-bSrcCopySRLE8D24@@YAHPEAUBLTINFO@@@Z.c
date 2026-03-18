/*
 * XREFs of ?bSrcCopySRLE8D24@@YAHPEAUBLTINFO@@@Z @ 0x1403190E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r12d
  unsigned __int8 *v3; // r11
  __int64 v4; // r14
  int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // r8d
  int v10; // r13d
  int v11; // r15d
  int v12; // r10d
  int v13; // eax
  int v15; // edx
  __int64 v16; // rbx
  unsigned int v17; // edi
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // r12
  int v21; // ebp
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int8 *v26; // r11
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r12d
  int v30; // r8d
  int v31; // ebx
  int v32; // r10d
  __int64 v33; // rbx
  int v34; // [rsp+0h] [rbp-68h]
  int v35; // [rsp+4h] [rbp-64h]
  int v36; // [rsp+8h] [rbp-60h]
  int v37; // [rsp+Ch] [rbp-5Ch]
  __int64 v38; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+78h] [rbp+10h]
  unsigned int v41; // [rsp+80h] [rbp+18h]
  int v42; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 11);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v8 = *((_DWORD *)v1 + 15);
  v9 = *((_DWORD *)v1 + 22);
  v10 = *((_DWORD *)v1 + 24);
  v11 = *((_DWORD *)v1 + 14);
  v12 = *((_DWORD *)v1 + 32);
  v38 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v13 = *((_DWORD *)v1 + 25);
  v40 = v13;
  v36 = v2;
  v41 = v7;
  v35 = v9;
  v37 = v10;
  v42 = v5;
  v34 = v11;
  if ( v8 < v5 )
    return 1LL;
  while ( 1 )
  {
    v6 += 2;
    if ( v6 > v7 )
      return 0LL;
    v15 = *v3;
    v16 = v3[1];
    v3 += 2;
    if ( v15 )
    {
      if ( v8 < v13 && v12 < v10 )
      {
        if ( v15 + v12 > v9 )
        {
          v29 = *(_DWORD *)(v38 + 4 * v16);
          if ( v12 < v9 )
          {
            v15 += v12 - v9;
            v12 = v9;
          }
          if ( v15 + v12 <= v10 )
          {
            v30 = 0;
          }
          else
          {
            v30 = v12 + v15 - v10;
            v15 = v10 - v12;
          }
          v31 = 3 * v12;
          v32 = v15 + v12;
          if ( v15 )
          {
            v33 = (unsigned int)(v31 + 2);
            do
            {
              *(_BYTE *)(v33 + v4) = BYTE2(v29);
              *(_BYTE *)((unsigned int)(v33 - 2) + v4) = v29;
              *(_BYTE *)((unsigned int)(v33 - 1) + v4) = BYTE1(v29);
              v33 = (unsigned int)(v33 + 3);
              --v15;
            }
            while ( v15 );
            v7 = v41;
            v5 = v42;
            v11 = v34;
          }
          v2 = v36;
          v12 = v30 + v32;
          v9 = v35;
          goto LABEL_42;
        }
        v13 = v40;
      }
      v12 += v15;
    }
    else
    {
      if ( (_DWORD)v16 )
      {
        if ( (_DWORD)v16 == 1 )
          return 0LL;
        if ( (_DWORD)v16 == 2 )
        {
          v6 += 2;
          if ( v6 > v7 )
            return 0LL;
          v28 = v3[1];
          v12 += *v3;
          v3 += 2;
          v8 -= v28;
          v4 += v28 * v2;
          if ( v8 < v5 )
          {
            *((_DWORD *)v1 + 34) = v12;
            goto LABEL_46;
          }
          v7 = v41;
        }
        else
        {
          v17 = v16 + v6;
          if ( v17 > v7 )
            return 0LL;
          v18 = v16 & 1;
          if ( v8 >= v40 || v12 >= v10 || (int)v16 + v12 <= v9 )
          {
            v12 += v16;
            v26 = &v3[v16];
          }
          else
          {
            if ( v12 < v9 )
            {
              v19 = v9 - v12;
              v12 = v9;
              v3 += v19;
              LODWORD(v16) = v16 - v19;
            }
            v20 = (unsigned int)(3 * v12);
            if ( (int)v16 + v12 <= v10 )
            {
              v21 = 0;
            }
            else
            {
              v21 = v12 + v16 - v10;
              LODWORD(v16) = v10 - v12;
            }
            if ( (_DWORD)v16 )
            {
              v22 = (unsigned int)(v20 + 2);
              v12 += v16;
              do
              {
                v23 = *v3++;
                v24 = *(_DWORD *)(v38 + 4 * v23);
                *(_BYTE *)(v20 + v4) = v24;
                v25 = (unsigned int)(v22 - 1);
                v20 = (unsigned int)(v20 + 3);
                *(_BYTE *)(v22 + v4) = BYTE2(v24);
                v22 = (unsigned int)(v22 + 3);
                *(_BYTE *)(v25 + v4) = BYTE1(v24);
                LODWORD(v16) = v16 - 1;
              }
              while ( (_DWORD)v16 );
              v1 = a1;
              v9 = v35;
              v10 = v37;
            }
            v7 = v41;
            v2 = v36;
            v26 = &v3[v21];
            v12 += v21;
            v5 = v42;
          }
          v6 = v18 + v17;
          v27 = v18;
          v11 = v34;
          v3 = &v26[v27];
        }
      }
      else
      {
        --v8;
        v4 += v2;
        v12 = v11;
        if ( v8 < v5 )
        {
          *((_DWORD *)v1 + 34) = v11;
LABEL_46:
          *((_QWORD *)v1 + 14) = v4;
          *((_QWORD *)v1 + 13) = v3;
          *((_DWORD *)v1 + 31) = v6;
          *((_DWORD *)v1 + 33) = v8;
          return 1LL;
        }
      }
LABEL_42:
      v13 = v40;
    }
  }
}
