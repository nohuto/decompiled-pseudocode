/*
 * XREFs of EtwpFillPerfectHashTable @ 0x140AA352C
 * Callers:
 *     EtwpCreatePerfectHashFunction @ 0x140AA3308 (EtwpCreatePerfectHashFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // bx
  __int16 v14; // r9
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // dx
  unsigned int v17; // ebp
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // dx
  unsigned int v20; // r9d
  unsigned __int16 v21; // dx
  __int64 v23; // rax
  unsigned __int16 i; // cx
  __int64 v25; // r9
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // [rsp+38h] [rbp+10h]

  LOWORD(v6) = 0;
  v7 = a4;
  v10 = a5;
  *a6 = 0;
  v11 = 128LL;
  v12 = a4 + 1;
  v13 = a4 + 1;
  v27 = a4 + 1;
  do
  {
    *(_WORD *)(v10 + 2) = -1;
    *(_BYTE *)v10 = -1;
    v10 += 4LL;
    --v11;
  }
  while ( v11 );
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v14 = *a1;
      v15 = 0;
      v16 = v7 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v16 + 2) != 0xFFFF )
      {
        v23 = v16;
        if ( *(_WORD *)(a5 + 4LL * v16 + 2) == v14 )
          break;
        v16 = *(unsigned __int8 *)(a5 + 4LL * v16);
        ++v15;
        if ( v16 == 255 )
        {
          v16 = v12++;
          *(_BYTE *)(a5 + 4 * v23) = v16;
        }
        if ( v15 > *a6 )
          *a6 = v15;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v16 + 2) = v14;
      --v6;
    }
    while ( v6 );
    v13 = v27;
  }
  v17 = v7 + 1;
  v18 = v12 - 1;
  v19 = v6;
  v20 = (unsigned __int16)(v12 - 1);
  if ( v20 > v7 + 1 )
  {
    do
    {
      if ( v19 >= (unsigned __int16)v7 )
        break;
      if ( *(_BYTE *)(a5 + 4LL * v18) == 0xFF )
      {
        while ( *(_WORD *)(a5 + 4LL * v19 + 2) != 0xFFFF )
        {
          if ( ++v19 >= (unsigned __int16)v7 )
            goto LABEL_32;
        }
        *(_WORD *)(a5 + 4LL * v19 + 2) = *(_WORD *)(a5 + 4LL * v18 + 2);
        for ( i = v6; i < v12; ++i )
        {
          if ( *(unsigned __int8 *)(a5 + 4LL * i) == v18 )
          {
            *(_BYTE *)(a5 + 4LL * i) = v19;
            break;
          }
        }
        *(_WORD *)(a5 + 4LL * v18 + 2) = -1;
        if ( v20 == v12 - 1 )
          --v12;
        LOWORD(v6) = 0;
      }
      --v18;
      ++v19;
      v20 = v18;
    }
    while ( v18 > v17 );
LABEL_32:
    v13 = v27;
  }
  v21 = v12 - 1;
  if ( (unsigned __int16)(v12 - 1) > v17 )
  {
    while ( v13 < v21 )
    {
      if ( *(_WORD *)(a5 + 4LL * v13 + 2) == 0xFFFF )
      {
        v25 = v21;
        v26 = 0;
        *(_WORD *)(a5 + 4LL * v13 + 2) = *(_WORD *)(a5 + 4LL * v21 + 2);
        while ( v26 < v12 )
        {
          if ( *(unsigned __int8 *)(a5 + 4LL * v26) == v21 )
          {
            *(_BYTE *)(a5 + 4LL * v26) = v13;
            break;
          }
          ++v26;
        }
        --v21;
        *(_BYTE *)(a5 + 4LL * v13) = *(_BYTE *)(a5 + 4 * v25);
        --v12;
        ++v13;
        if ( v21 <= v17 )
          return v12;
      }
      else
      {
        ++v13;
      }
    }
  }
  return v12;
}
