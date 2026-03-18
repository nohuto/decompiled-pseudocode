/*
 * XREFs of sub_14002C06C @ 0x14002C06C
 * Callers:
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 * Callees:
 *     sub_14000D620 @ 0x14000D620 (sub_14000D620.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14002C06C(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r10
  __int64 v4; // r12
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  int v21; // eax
  int v22; // edx
  __int64 *v23; // r8
  int v24; // edx
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8

  v3 = 0x80;
  v4 = a3;
  v7 = 0LL;
  v8 = 255LL;
  do
  {
    v9 = *(_DWORD *)(a2 + 4 * v7 + 2048);
    if ( !v9 )
      break;
    if ( v9 <= (unsigned int)v4 )
    {
      v10 = v9 - 1;
      v11 = *(_QWORD *)(a2 + 8 * v10 + 8);
      v12 = *(_QWORD *)(a1 + 8 * v10 + 1672);
      v13 = (_DWORD *)(v11 + 20);
      if ( v11 && (*v13 & 8) != 0 )
      {
        *v13 |= 0x80u;
        *v13 &= ~8u;
        *(_BYTE *)(v11 + 10) = v9 - 1;
        if ( v12 )
        {
          v14 = (_OWORD *)v11;
          v15 = 3LL;
          do
          {
            *(_OWORD *)v12 = *v14;
            *(_OWORD *)(v12 + 16) = v14[1];
            *(_OWORD *)(v12 + 32) = v14[2];
            *(_OWORD *)(v12 + 48) = v14[3];
            *(_OWORD *)(v12 + 64) = v14[4];
            *(_OWORD *)(v12 + 80) = v14[5];
            *(_OWORD *)(v12 + 96) = v14[6];
            v12 += 128LL;
            v16 = v14[7];
            v14 += 8;
            *(_OWORD *)(v12 - 16) = v16;
            --v15;
          }
          while ( v15 );
          *(_OWORD *)v12 = *v14;
          *(_OWORD *)(v12 + 16) = v14[1];
          *(_QWORD *)(v12 + 32) = *((_QWORD *)v14 + 4);
          StorPortExtendedFunction(1LL, a1, v11, 255LL);
          *(_QWORD *)(a2 + 8 * v10 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 8 * v10 + 1672) = v11;
        }
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 224) )
        {
          v17 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0xFFu )
            v17 = 255;
          *(_DWORD *)(a1 + 224) = v17;
        }
      }
      else if ( v12 && (*(_DWORD *)(v12 + 20) & 0x20) != 0 )
      {
        sub_140032C80(v12, 0LL, 424LL);
      }
      else if ( v11 && (*v13 & 0x10) != 0 )
      {
        *(_DWORD *)(v11 + 20) &= ~0x10u;
        *(_BYTE *)(v11 + 10) = v9 - 1;
        v18 = 3LL;
        v19 = (_OWORD *)v11;
        do
        {
          *(_OWORD *)v12 = *v19;
          *(_OWORD *)(v12 + 16) = v19[1];
          *(_OWORD *)(v12 + 32) = v19[2];
          *(_OWORD *)(v12 + 48) = v19[3];
          *(_OWORD *)(v12 + 64) = v19[4];
          *(_OWORD *)(v12 + 80) = v19[5];
          *(_OWORD *)(v12 + 96) = v19[6];
          v12 += 128LL;
          v20 = v19[7];
          v19 += 8;
          *(_OWORD *)(v12 - 16) = v20;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)v12 = *v19;
        *(_OWORD *)(v12 + 16) = v19[1];
        *(_QWORD *)(v12 + 32) = *((_QWORD *)v19 + 4);
        StorPortExtendedFunction(1LL, a1, v11, 255LL);
        *(_QWORD *)(a2 + 8LL * (v9 - 1) + 8) = 0LL;
      }
    }
    v3 = 0x80;
    v7 = (unsigned int)(v7 + 1);
    v8 = 255LL;
  }
  while ( (unsigned int)v7 < 0x400 );
  v21 = *(_DWORD *)(a1 + 224);
  v22 = 0;
  if ( v21 )
  {
    v23 = (__int64 *)(a1 + 1672);
    do
    {
      LOBYTE(v21) = sub_14000D620(*v23);
      v26 = v24 + 1;
      v23 = (__int64 *)(v27 + 8);
      if ( !(_BYTE)v21 )
        v26 = v24;
      v22 = v26;
      v8 = v25 - 1;
    }
    while ( v8 );
  }
  *(_DWORD *)(a1 + 212) = v22;
  if ( (_DWORD)v4 )
  {
    v28 = (__int64 *)(a2 + 8);
    v29 = v4;
    do
    {
      v30 = *v28;
      if ( *v28 )
      {
        v21 = *(_DWORD *)(v30 + 20);
        if ( ((unsigned __int8)v21 & (unsigned __int8)v3) == 0 )
          LOBYTE(v21) = StorPortExtendedFunction(1LL, a1, v30, v8);
      }
      ++v28;
      v3 = 0x80;
      --v29;
    }
    while ( v29 );
  }
  return v21;
}
