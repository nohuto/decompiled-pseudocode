/*
 * XREFs of ?bSrcCopySRLE8D16@@YAHPEAUBLTINFO@@@Z @ 0x14033B7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  int v2; // esi
  unsigned __int8 *v3; // r9
  __int64 v4; // r14
  unsigned int v5; // r11d
  int v6; // r15d
  int v7; // r12d
  int v8; // ebx
  int v9; // ebp
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned int v15; // r10d
  __int64 v16; // rdi
  unsigned int v17; // r11d
  int v18; // ebp
  unsigned int v19; // eax
  int v20; // r10d
  __int64 v21; // rax
  _WORD *v22; // rsi
  __int64 v23; // rax
  unsigned __int8 *v24; // r9
  int v25; // ecx
  int v26; // ebp
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rcx
  _WORD *v30; // rdi
  int v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  int v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+70h] [rbp+18h]
  int v36; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 22);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 15);
  v31 = *((_DWORD *)a1 + 11) / 2;
  v9 = v31;
  v36 = v2;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v11 = *((_DWORD *)a1 + 32);
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v12 = *((_DWORD *)a1 + 25);
  v13 = *((_DWORD *)a1 + 14);
  v35 = v13;
  v34 = v12;
  if ( v8 < v2 )
    return 1LL;
  while ( 1 )
  {
    v5 += 2;
    if ( v5 > v10 )
      return 0LL;
    v15 = *v3;
    v16 = v3[1];
    v3 += 2;
    if ( v15 )
    {
      if ( v8 < v12 && v11 < v7 )
      {
        if ( (int)(v15 + v11) > v6 )
        {
          v26 = *(_DWORD *)(v32 + 4 * v16);
          if ( v11 < v6 )
          {
            v15 += v11 - v6;
            v11 = v6;
          }
          if ( (int)(v15 + v11) <= v7 )
          {
            v27 = 0;
          }
          else
          {
            v27 = v11 + v15 - v7;
            v15 = v7 - v11;
          }
          if ( v15 )
          {
            v28 = v11;
            v11 += v15;
            v29 = v15;
            v30 = (_WORD *)(v4 + 2 * v28);
            while ( v29 )
            {
              *v30++ = v26;
              --v29;
            }
            v13 = v35;
          }
          v11 += v27;
          v2 = v36;
          goto LABEL_43;
        }
        v12 = v34;
      }
      v11 += v15;
    }
    else if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
        return 0LL;
      if ( (_DWORD)v16 == 2 )
      {
        v5 += 2;
        if ( v5 > v10 )
          return 0LL;
        v25 = v3[1];
        v11 += *v3;
        v3 += 2;
        v8 -= v25;
        v4 += 2LL * v9 * v25;
        if ( v8 < v2 )
        {
          *((_DWORD *)v1 + 34) = v11;
LABEL_48:
          *((_QWORD *)v1 + 14) = v4;
          *((_QWORD *)v1 + 13) = v3;
          *((_DWORD *)v1 + 31) = v5;
          *((_DWORD *)v1 + 33) = v8;
          return 1LL;
        }
        v13 = v35;
        v12 = v34;
      }
      else
      {
        v17 = v16 + v5;
        if ( v17 > v10 )
          return 0LL;
        v18 = v16 & 1;
        if ( v8 >= v34 || v11 >= v7 || (int)v16 + v11 <= v6 )
        {
          v11 += v16;
          v24 = &v3[v16];
        }
        else
        {
          if ( v11 < v6 )
          {
            v19 = v6 - v11;
            v11 = v6;
            v3 += v19;
            LODWORD(v16) = v16 - v19;
          }
          if ( (int)v16 + v11 <= v7 )
          {
            v20 = 0;
          }
          else
          {
            v20 = v11 + v16 - v7;
            LODWORD(v16) = v7 - v11;
          }
          if ( (_DWORD)v16 )
          {
            v21 = v11;
            v11 += v16;
            v22 = (_WORD *)(v4 + 2 * v21);
            do
            {
              v23 = *v3++;
              *v22++ = *(_WORD *)(v32 + 4 * v23);
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
            v1 = a1;
            v2 = v36;
          }
          v13 = v35;
          v24 = &v3[v20];
          v11 += v20;
        }
        v5 = v18 + v17;
        v3 = &v24[v18];
LABEL_43:
        v12 = v34;
        v9 = v31;
      }
    }
    else
    {
      --v8;
      v11 = v13;
      v4 += 2LL * v9;
      if ( v8 < v2 )
      {
        *((_DWORD *)v1 + 34) = v13;
        goto LABEL_48;
      }
      v12 = v34;
    }
  }
}
