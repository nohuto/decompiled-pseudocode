/*
 * XREFs of sub_14008CA58 @ 0x14008CA58
 * Callers:
 *     sub_14007DB98 @ 0x14007DB98 (sub_14007DB98.c)
 *     sub_1400824AC @ 0x1400824AC (sub_1400824AC.c)
 * Callees:
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 */

__int64 __fastcall sub_14008CA58(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // r9
  int v12; // r10d
  unsigned int v13; // eax
  int *v14; // rdx
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // r8d
  int v18; // ecx
  int *v19; // r8
  unsigned int v20; // ecx
  int v21; // eax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0LL;
  v7 = sub_14008D1F0(a1, a3);
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)a1 == 1431193940 )
      v8 = *(_QWORD *)(a1 + 3592);
    else
      v8 = *(_QWORD *)(a1 + 6064);
    if ( !*(_BYTE *)(v8 + 53) || (v9 = sub_14008D024(a1, &P, a3), v4 = P, v7 = v9, v9 >= 0) )
    {
      *(_QWORD *)(a2 + 4) = 52LL;
      *(_WORD *)a2 = 1;
      if ( !*(_BYTE *)(v8 + 152) || (v10 = 1, !*(_BYTE *)(v8 + 153)) )
        v10 = 0;
      v11 = (_DWORD *)(a2 + 16);
      v12 = 2;
      v13 = v10 | *(_DWORD *)(a2 + 12) & 0xFFFFFFFE;
      v14 = (int *)(a2 + 16);
      *(_DWORD *)(a2 + 12) = v13;
      v15 = v13 ^ (v13 ^ (2 * *(unsigned __int8 *)(v8 + 148))) & 2;
      *(_DWORD *)(a2 + 12) = v15;
      *(_DWORD *)(a2 + 12) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_BYTE *)(v8 + 97))) & 4;
      v16 = *(_DWORD *)(a2 + 16) ^ (*(_DWORD *)(a2 + 16) ^ *(unsigned __int8 *)(v8 + 149)) & 1;
      *(_DWORD *)(a2 + 16) = v16;
      if ( !*(_BYTE *)(v8 + 149) )
      {
        if ( *(_BYTE *)(v8 + 150) )
          v12 = 0;
        else
          v14 = (int *)(a2 + 16);
      }
      v17 = v12 | v16 & 0xFFFFFFFD;
      *v11 = v17;
      v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(4 * *(_BYTE *)(v8 + 53))) & 4;
      v19 = v14;
      *v11 = v18;
      if ( *(_BYTE *)(v8 + 53) )
      {
        v18 |= 8u;
        v19 = (int *)(a2 + 16);
        *v11 = v18;
        if ( *(_BYTE *)(v8 + 152) )
        {
          v19 = v14;
          if ( *(_BYTE *)(v8 + 153) )
          {
            if ( *(_BYTE *)(v8 + 134) )
            {
              v18 &= ~8u;
              *(_DWORD *)(a2 + 16) = v18;
            }
          }
        }
      }
      *v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(16 * *(_BYTE *)(v8 + 134))) & 0x10;
      if ( *(_BYTE *)(v8 + 53) )
      {
        v20 = 1;
        for ( *(_DWORD *)(a2 + 20) = *(_DWORD *)(v8 + 128) - 1; v20 < *(_DWORD *)(v8 + 128); ++v20 )
        {
          if ( !v4[20 * v20 + 18] && !*(_QWORD *)&v4[20 * v20 + 14] )
            ++*(_DWORD *)(a2 + 24);
        }
        *(_DWORD *)(a2 + 28) = *(_DWORD *)(v8 + 140) / (unsigned int)*(unsigned __int16 *)(v8 + 136);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v8 + 72) - 1;
      }
      *(_DWORD *)(a2 + 36) = *(_DWORD *)(v8 + 100) * *(_DWORD *)(v8 + 104);
      v21 = *(_DWORD *)(v8 + 100) * *(_DWORD *)(v8 + 112);
      *(_DWORD *)(a2 + 44) = 0;
      *(_DWORD *)(a2 + 48) = 32;
      *(_DWORD *)(a2 + 40) = v21;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x43546152u);
  }
  return (unsigned int)v7;
}
