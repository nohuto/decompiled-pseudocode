/*
 * XREFs of ?bSrcCopySRLE8D32@@YAHPEAUBLTINFO@@@Z @ 0x1401B73D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  unsigned __int8 *v2; // r9
  __int64 v3; // r14
  __int64 v4; // rdx
  int v5; // esi
  int v6; // ebp
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // r13d
  unsigned int v10; // r11d
  int v11; // r15d
  int v12; // r12d
  int v13; // edx
  int v14; // eax
  unsigned int v15; // r10d
  __int64 v16; // rdi
  int v17; // ebp
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  unsigned int v22; // r11d
  int v23; // ebp
  int v24; // r10d
  __int64 v25; // rax
  _DWORD *v26; // rsi
  __int64 v27; // rax
  unsigned __int8 *v28; // r9
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+70h] [rbp+18h]
  int v37; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 9);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 11) / 4;
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *(_DWORD *)(v4 + 64);
  v10 = *((_DWORD *)v1 + 30);
  v11 = *((_DWORD *)v1 + 22);
  v12 = *((_DWORD *)v1 + 24);
  v32 = v6;
  v13 = *((_DWORD *)v1 + 32);
  v33 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v14 = *((_DWORD *)v1 + 25);
  v35 = v14;
  v37 = v5;
  v36 = v8;
  if ( v7 < v5 )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 += 2;
        if ( v10 > v9 )
          return 0LL;
        v15 = *v2;
        v16 = v2[1];
        v2 += 2;
        if ( !v15 )
          break;
        if ( v7 < v14 && v13 < v12 )
        {
          if ( (int)(v15 + v13) > v11 )
          {
            v17 = *(_DWORD *)(v33 + 4LL * (unsigned int)v16);
            if ( v13 < v11 )
            {
              v15 += v13 - v11;
              v13 = v11;
            }
            if ( (int)(v15 + v13) > v12 )
            {
              v18 = v13 + v15 - v12;
              v15 = v12 - v13;
            }
            else
            {
              v18 = 0;
            }
            if ( v15 )
            {
              v19 = v13;
              v13 += v15;
              v20 = v15;
              v21 = (_DWORD *)(v3 + 4 * v19);
              while ( v20 )
              {
                *v21++ = v17;
                --v20;
              }
              v8 = v36;
            }
            v13 += v18;
            v5 = v37;
            goto LABEL_17;
          }
          v14 = v35;
        }
        v13 += v15;
      }
      if ( (_DWORD)v16 )
        break;
      --v7;
      v13 = v8;
      v3 += 4LL * v6;
      if ( v7 < v5 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_42;
      }
LABEL_39:
      v14 = v35;
    }
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 == 2 )
      break;
    v22 = v16 + v10;
    if ( v22 > v9 )
      return 0LL;
    v23 = v16 & 1;
    if ( v7 >= v35 || v13 >= v12 || (int)v16 + v13 <= v11 )
    {
      v13 += v16;
      v28 = &v2[v16];
    }
    else
    {
      if ( v13 < v11 )
      {
        v31 = v11 - v13;
        v13 = v11;
        v2 += v31;
        LODWORD(v16) = v16 - v31;
      }
      if ( (int)v16 + v13 > v12 )
      {
        v24 = v13 + v16 - v12;
        LODWORD(v16) = v12 - v13;
      }
      else
      {
        v24 = 0;
      }
      if ( (_DWORD)v16 )
      {
        v25 = v13;
        v13 += v16;
        v26 = (_DWORD *)(v3 + 4 * v25);
        do
        {
          v27 = *v2++;
          *v26++ = *(_DWORD *)(v33 + 4 * v27);
          LODWORD(v16) = v16 - 1;
        }
        while ( (_DWORD)v16 );
        v1 = a1;
        v5 = v37;
      }
      v8 = v36;
      v13 += v24;
      v28 = &v2[v24];
    }
    v10 = v23 + v22;
    v2 = &v28[v23];
LABEL_17:
    v14 = v35;
    v6 = v32;
  }
  v10 += 2;
  if ( v10 > v9 )
    return 0LL;
  v30 = v2[1];
  v13 += *v2;
  v2 += 2;
  v7 -= v30;
  v3 += 4LL * v6 * v30;
  if ( v7 >= v5 )
  {
    v8 = v36;
    goto LABEL_39;
  }
  *((_DWORD *)v1 + 34) = v13;
LABEL_42:
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v10;
  *((_DWORD *)v1 + 33) = v7;
  return 1LL;
}
