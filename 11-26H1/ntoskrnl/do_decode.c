/*
 * XREFs of do_decode @ 0x140724264
 * Callers:
 *     XpressDecode @ 0x1407240DC (XpressDecode.c)
 * Callees:
 *     <none>
 */

void __fastcall do_decode(__int64 a1)
{
  char *v1; // rdx
  unsigned __int8 *v2; // rsi
  unsigned __int8 *i; // r8
  int v5; // r10d
  int v6; // eax
  int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  char *v11; // rbx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char *v15; // r8
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // r8
  _DWORD *v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  unsigned __int8 *v23; // r8
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rdi
  char v29; // al
  char v30; // al
  int v31; // ecx
  __int64 v32; // r11
  char v33; // al
  char v34; // al

  v1 = *(char **)(a1 + 8);
  v2 = 0LL;
  i = *(unsigned __int8 **)(a1 + 48);
  v5 = 1;
  do
  {
    if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 56) || (unsigned __int64)v1 >= *(_QWORD *)(a1 + 16) )
      goto LABEL_32;
    v6 = *(_DWORD *)i;
    i += 4;
    v7 = 2 * v6 + 1;
    if ( v6 < 0 )
      break;
    while ( 1 )
    {
      *v1++ = *i++;
LABEL_28:
      if ( v7 < 0 )
        break;
      v7 *= 2;
    }
    v7 *= 2;
  }
  while ( !v7 );
  v8 = *(unsigned __int16 *)i;
  i += 2;
  v9 = v8 & 7;
  v10 = ~(v8 >> 3);
  if ( v9 <= 5 )
  {
    v11 = &v1[v10];
    if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 8) )
    {
      *v1 = *v11;
      v1[1] = v11[1];
      v1[2] = v11[2];
      v1[3] = v11[3];
      v1[4] = v11[4];
      v1[5] = v11[5];
      v1[6] = v11[6];
      v1[7] = v11[7];
      v1 += v9 + 3;
      goto LABEL_28;
    }
    goto LABEL_73;
  }
  if ( v9 != 7 )
    goto LABEL_15;
  if ( v2 )
  {
    v12 = *v2 >> 4;
    v2 = 0LL;
  }
  else
  {
    v2 = i;
    v12 = *i++ & 0xF;
  }
  if ( v12 == 15 )
  {
    v13 = *i++;
    if ( v13 == 255 )
    {
      v9 = *(unsigned __int16 *)i;
      i += 2;
      if ( v9 < 0x115 )
        goto LABEL_73;
LABEL_15:
      v14 = v9 + 3;
      goto LABEL_16;
    }
    v12 = v13 + 15;
  }
  v14 = v12 + 10;
LABEL_16:
  *(_QWORD *)(a1 + 88) = i;
  v15 = &v1[v10];
  if ( (unsigned __int64)&v1[v14] < *(_QWORD *)(a1 + 16) )
  {
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 8) )
    {
      if ( (unsigned int)v14 > 8 )
      {
        v16 = ((unsigned int)(v14 - 9) >> 3) + 1;
        v14 -= 8 * v16;
        do
        {
          *v1 = *v15;
          v1[1] = v15[1];
          v1[2] = v15[2];
          v1[3] = v15[3];
          v1[4] = v15[4];
          v1[5] = v15[5];
          v1[6] = v15[6];
          v17 = v15[7];
          v15 += 8;
          v1[7] = v17;
          v1 += 8;
          --v16;
        }
        while ( v16 );
      }
      v18 = v15 - v1;
      do
      {
        *v1 = v1[v18];
        ++v1;
        --v14;
      }
      while ( v14 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_28;
    }
    goto LABEL_73;
  }
  v19 = (_DWORD *)(a1 + 24);
  while ( 2 )
  {
    if ( (unsigned __int64)v15 < *(_QWORD *)(a1 + 8) )
      goto LABEL_73;
    if ( (unsigned __int64)&v1[v14] > *(_QWORD *)v19 )
    {
      v31 = *v19 - (_DWORD)v1;
      if ( v31 > 8 )
      {
        v32 = ((unsigned int)(v31 - 9) >> 3) + 1;
        v31 -= 8 * v32;
        do
        {
          *v1 = *v15;
          v1[1] = v15[1];
          v1[2] = v15[2];
          v1[3] = v15[3];
          v1[4] = v15[4];
          v1[5] = v15[5];
          v1[6] = v15[6];
          v33 = v15[7];
          v15 += 8;
          v1[7] = v33;
          v1 += 8;
          --v32;
        }
        while ( v32 );
      }
      do
      {
        v34 = *v15++;
        *v1++ = v34;
        --v31;
      }
      while ( v31 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_72;
    }
    if ( v14 > 8 )
    {
      v28 = ((unsigned int)(v14 - 9) >> 3) + 1;
      v14 -= 8 * v28;
      do
      {
        *v1 = *v15;
        v1[1] = v15[1];
        v1[2] = v15[2];
        v1[3] = v15[3];
        v1[4] = v15[4];
        v1[5] = v15[5];
        v1[6] = v15[6];
        v29 = v15[7];
        v15 += 8;
        v1[7] = v29;
        v1 += 8;
        --v28;
      }
      while ( v28 );
    }
    do
    {
      v30 = *v15++;
      *v1++ = v30;
      --v14;
    }
    while ( v14 );
    for ( i = *(unsigned __int8 **)(a1 + 88); ; ++i )
    {
      if ( v7 >= 0 )
      {
        v7 *= 2;
        goto LABEL_59;
      }
      v7 *= 2;
      if ( v7 )
        goto LABEL_35;
LABEL_32:
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 72) )
        goto LABEL_73;
      v20 = *(_DWORD *)i;
      i += 4;
      v7 = 2 * v20 + 1;
      if ( v20 < 0 )
        break;
LABEL_59:
      v19 = (_DWORD *)(a1 + 24);
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_72;
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 40) )
        goto LABEL_73;
      *v1++ = *i;
    }
    v19 = (_DWORD *)(a1 + 24);
LABEL_35:
    if ( (unsigned __int64)v1 >= *(_QWORD *)v19 )
    {
      if ( v1 == *(char **)a1 )
        *(_DWORD *)(a1 + 100) = 1;
LABEL_72:
      *(_QWORD *)(a1 + 88) = i;
      *(_QWORD *)(a1 + 32) = v1;
      goto LABEL_74;
    }
    v21 = *(_QWORD *)(a1 + 64);
    if ( (unsigned __int64)i >= v21 )
      goto LABEL_73;
    v22 = *(unsigned __int16 *)i;
    v23 = i + 2;
    v24 = v22 & 7;
    v25 = ~(v22 >> 3);
    if ( v24 != 7 )
      goto LABEL_47;
    if ( v2 )
    {
      v26 = *v2 >> 4;
      v2 = 0LL;
LABEL_42:
      if ( v26 == 15 )
      {
        if ( (unsigned __int64)v23 >= *(_QWORD *)(a1 + 40) )
          goto LABEL_73;
        v27 = *v23++;
        if ( v27 == 255 )
        {
          if ( (unsigned __int64)v23 >= v21 )
            goto LABEL_73;
          v24 = *(unsigned __int16 *)v23;
          v23 += 2;
          if ( v24 < 0x115 )
            goto LABEL_73;
LABEL_47:
          v14 = v24 + 3;
          goto LABEL_48;
        }
        v26 = v27 + 15;
      }
      v14 = v26 + 10;
LABEL_48:
      *(_QWORD *)(a1 + 88) = v23;
      v15 = &v1[v25];
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v23 < *(_QWORD *)(a1 + 40) )
  {
    v2 = v23;
    v26 = *v23++ & 0xF;
    goto LABEL_42;
  }
LABEL_73:
  v5 = 0;
LABEL_74:
  *(_DWORD *)(a1 + 96) = v5;
}
