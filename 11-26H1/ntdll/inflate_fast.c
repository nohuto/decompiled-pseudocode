/*
 * XREFs of inflate_fast @ 0x180156428
 * Callers:
 *     inflate @ 0x1801530B0 (inflate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall inflate_fast(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // rbp
  unsigned __int8 *v4; // r8
  __int64 v5; // r15
  unsigned __int8 *v6; // rdi
  int v7; // ecx
  unsigned __int8 *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // r13d
  unsigned int v12; // r11d
  unsigned __int8 *v13; // r12
  unsigned int v14; // r10d
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // r11d
  unsigned __int64 i; // rcx
  char *v19; // r9
  int v20; // ecx
  char v21; // dl
  unsigned int v22; // ebx
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edx
  int v27; // r11d
  unsigned __int64 j; // rcx
  char *v29; // r9
  int v30; // ecx
  char v31; // dl
  unsigned int v32; // edx
  int v33; // eax
  int v34; // eax
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // edx
  unsigned __int8 *v38; // r9
  unsigned __int8 v39; // al
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // r9
  unsigned int v43; // ecx
  unsigned __int8 v44; // al
  unsigned __int8 v45; // al
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  bool v48; // cc
  unsigned __int8 v49; // al
  unsigned __int8 *v50; // rdx
  unsigned __int8 v51; // al
  const char *v52; // rax
  __int64 v53; // rax
  unsigned __int8 *v54; // rdi
  int v55; // r10d
  __int64 result; // rax
  __int64 v57; // [rsp+8h] [rbp-70h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-60h]
  int v60; // [rsp+20h] [rbp-58h]
  int v61; // [rsp+80h] [rbp+8h]
  int v62; // [rsp+88h] [rbp+10h]
  unsigned int v63; // [rsp+90h] [rbp+18h]
  int v64; // [rsp+98h] [rbp+20h]

  v2 = a1[5];
  v4 = a1[2];
  v5 = (unsigned int)(*((_DWORD *)a1 + 2) - 5);
  v6 = *a1;
  v7 = *((_DWORD *)a1 + 6);
  v8 = &v6[v5];
  v9 = *((_QWORD *)v2 + 12);
  v10 = *((_QWORD *)v2 + 13);
  v11 = *((_DWORD *)v2 + 15);
  v12 = *((_DWORD *)v2 + 18);
  v13 = &v4[v7 - 257];
  v14 = *((_DWORD *)v2 + 19);
  v15 = (1 << *((_DWORD *)v2 + 28)) - 1;
  v62 = *((_DWORD *)v2 + 13);
  v63 = *((_DWORD *)v2 + 14);
  v59 = (unsigned __int8 *)*((_QWORD *)v2 + 8);
  v60 = (_DWORD)v4 - (a2 - v7);
  v61 = (1 << *((_DWORD *)v2 + 29)) - 1;
  v57 = v9;
  v58 = v10;
  v64 = v15;
  while ( 2 )
  {
    if ( v14 < 0xF )
    {
      v16 = v12 + (*v6 << v14);
      v17 = v6[1] << (v14 + 8);
      v6 += 2;
      v12 = v16 + v17;
      v14 += 16;
    }
    for ( i = v12 & v15; ; i = *((unsigned __int16 *)v19 + 1) + (unsigned __int64)(v12 & ((1 << v21) - 1)) )
    {
      v19 = (char *)(v9 + 4 * i);
      v20 = (unsigned __int8)v19[1];
      v21 = *v19;
      v14 -= v20;
      v12 >>= v20;
      if ( !*v19 )
      {
        *v4++ = v19[2];
        goto LABEL_56;
      }
      if ( (v21 & 0x10) != 0 )
        break;
      if ( (v21 & 0x40) != 0 )
      {
        if ( (v21 & 0x20) == 0 )
        {
          v52 = "invalid literal/length code";
          goto LABEL_64;
        }
        *((_DWORD *)v2 + 2) = 16191;
        goto LABEL_65;
      }
    }
    v22 = *((unsigned __int16 *)v19 + 1);
    v23 = v21 & 0xF;
    if ( v23 )
    {
      if ( v14 < v23 )
      {
        v24 = *v6++ << v14;
        v12 += v24;
        v14 += 8;
      }
      v25 = v12 & ((1 << v23) - 1);
      v12 >>= v23;
      v22 += v25;
      v14 -= v23;
    }
    if ( v14 < 0xF )
    {
      v26 = v12 + (*v6 << v14);
      v27 = v6[1] << (v14 + 8);
      v6 += 2;
      v12 = v26 + v27;
      v14 += 16;
    }
    for ( j = v12 & v61; ; j = *((unsigned __int16 *)v29 + 1) + (unsigned __int64)(v12 & ((1 << v31) - 1)) )
    {
      v29 = (char *)(v10 + 4 * j);
      v30 = (unsigned __int8)v29[1];
      v31 = *v29;
      v14 -= v30;
      v12 >>= v30;
      if ( (*v29 & 0x10) != 0 )
        break;
      if ( (v31 & 0x40) != 0 )
      {
        v52 = "invalid distance code";
        goto LABEL_64;
      }
    }
    v32 = v31 & 0xF;
    if ( v14 < v32 )
    {
      v33 = *v6 << v14;
      v14 += 8;
      v12 += v33;
      ++v6;
      if ( v14 < v32 )
      {
        v12 += *v6++ << v14;
        v14 += 8;
      }
    }
    v14 -= v32;
    v34 = v12 & ((1 << v32) - 1);
    v12 >>= v32;
    v35 = v34 + *((unsigned __int16 *)v29 + 1);
    v36 = (_DWORD)v4 - v60;
    if ( v35 <= (int)v4 - v60 )
    {
      v50 = &v4[-v35];
      do
      {
        v22 -= 3;
        *v4 = *v50;
        v51 = v50[1];
        v50 += 3;
        v4[1] = v51;
        v4[2] = *(v50 - 1);
        v4 += 3;
      }
      while ( v22 > 2 );
      if ( !v22 )
        goto LABEL_55;
      v10 = v58;
      *v4++ = *v50;
      v48 = v22 <= 1;
      v9 = v57;
      if ( v48 )
        goto LABEL_56;
      v49 = v50[1];
LABEL_48:
      *v4++ = v49;
      goto LABEL_56;
    }
    v37 = v35 - v36;
    if ( v35 - v36 <= v63 || !*((_DWORD *)v2 + 2264) )
    {
      if ( v11 )
      {
        v40 = v11 - v37;
        if ( v11 >= v37 )
        {
          v38 = &v59[v40];
          if ( v37 >= v22 )
            goto LABEL_42;
          v22 -= v37;
          do
          {
            v45 = *v38++;
            *v4++ = v45;
            --v37;
          }
          while ( v37 );
        }
        else
        {
          v41 = v37 - v11;
          v38 = &v59[v40 + v62];
          if ( v41 >= v22 )
            goto LABEL_42;
          v22 -= v41;
          v42 = v38 - v4;
          do
          {
            *v4 = v4[v42];
            ++v4;
            --v41;
          }
          while ( v41 );
          v38 = v59;
          if ( v11 >= v22 )
            goto LABEL_42;
          v43 = v11;
          v22 -= v11;
          do
          {
            v44 = *v38++;
            *v4++ = v44;
            --v43;
          }
          while ( v43 );
        }
LABEL_41:
        v38 = &v4[-v35];
        goto LABEL_42;
      }
      v38 = &v59[v62 - v37];
      if ( v37 < v22 )
      {
        v22 -= v37;
        do
        {
          v39 = *v38++;
          *v4++ = v39;
          --v37;
        }
        while ( v37 );
        goto LABEL_41;
      }
LABEL_42:
      if ( v22 > 2 )
      {
        v46 = (v22 - 3) / 3 + 1;
        do
        {
          v22 -= 3;
          *v4 = *v38;
          v4[1] = v38[1];
          v47 = v38[2];
          v38 += 3;
          v4[2] = v47;
          v4 += 3;
          --v46;
        }
        while ( v46 );
      }
      if ( v22 )
      {
        v10 = v58;
        *v4++ = *v38;
        v48 = v22 <= 1;
        v9 = v57;
        if ( v48 )
          goto LABEL_56;
        v49 = v38[1];
        goto LABEL_48;
      }
LABEL_55:
      v10 = v58;
      v9 = v57;
LABEL_56:
      if ( v6 >= v8 || v4 >= v13 )
        goto LABEL_65;
      v15 = v64;
      continue;
    }
    break;
  }
  v52 = "invalid distance too far back";
LABEL_64:
  a1[4] = (unsigned __int8 *)v52;
  *((_DWORD *)v2 + 2) = 16209;
LABEL_65:
  a1[2] = v4;
  v53 = v14 >> 3;
  v54 = &v6[-v53];
  v55 = v14 - 8 * v53;
  *a1 = v54;
  *((_DWORD *)a1 + 6) = (_DWORD)v13 - (_DWORD)v4 + 257;
  *((_DWORD *)a1 + 2) = (_DWORD)v8 - (_DWORD)v54 + 5;
  *((_DWORD *)v2 + 19) = v55;
  result = v12 & ((1 << v55) - 1);
  *((_DWORD *)v2 + 18) = result;
  return result;
}
