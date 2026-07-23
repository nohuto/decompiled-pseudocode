/*
 * XREFs of MiComputeTrimAmount @ 0x1403C3F40
 * Callers:
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 result; // rax
  __int64 *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int8 v14; // al
  char v15; // cl
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  int v22; // [rsp+8h] [rbp+8h]

  v3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a2 + 174));
  if ( *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 16) )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 22464);
  if ( v4 >= *(_QWORD *)(a1 + 48) && (*(_BYTE *)(a1 + 26) < 3u || *(_BYTE *)(a1 + 24)) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v5 <= v6 )
    return 0LL;
  v22 = *(_DWORD *)(a2 + 184);
  v7 = 0LL;
  if ( ((unsigned __int8)~((unsigned __int8)v22 >> 5) & ((v22 & 0xF) == 0)) == 0 || (*(_DWORD *)(a2 - 524) & 0x40) == 0 )
  {
    if ( v5 <= 0x19 )
      return 0LL;
    v8 = *(_QWORD *)(a2 + 120);
    if ( v5 <= v8 )
      v5 = 0LL;
    else
      v5 -= v8;
  }
  v9 = *(unsigned __int8 *)(a1 + 25);
  if ( (unsigned int)v9 >= 8 )
    return 0LL;
  v11 = (__int64 *)(a2 + 56 + 8 * v9);
  v12 = (unsigned int)(8 - v9);
  do
  {
    v13 = *v11++;
    v7 += v13;
    --v12;
  }
  while ( v12 );
  if ( !v7 )
    return 0LL;
  v14 = *(_BYTE *)(a1 + 24);
  if ( v14 <= 1u )
  {
    v15 = 1;
    if ( BYTE2(v22) == 2 )
      v15 = 3;
    v16 = v7 >> v15;
    v17 = *(_QWORD *)(a1 + 72);
    if ( v17 >= v7 )
    {
      v18 = v7 * (100 * v7 / v17) / 0x64;
      if ( v16 < v18 )
        v16 = v18;
    }
    if ( v16 <= v5 )
      v5 = v16;
    goto LABEL_22;
  }
  if ( v14 != 4 || v4 >= 0x72 )
  {
    if ( *(_QWORD *)(a1 + 16) <= *(_QWORD *)(a1 + 56) )
    {
      if ( BYTE2(v22) != 2 )
      {
        v19 = *(_QWORD *)(a1 + 72);
        v20 = *(_QWORD *)(a1 + 64);
        if ( v19 > v20 )
          v7 /= v19 / v20;
      }
      if ( v7 > v5 )
        v7 = v5;
      v5 = v7;
      goto LABEL_22;
    }
    return 0LL;
  }
  v21 = *(_QWORD *)(a2 + 152);
  if ( v21 <= v6 )
    return 0LL;
  v5 = v21 - v6;
LABEL_22:
  result = *(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 16);
  if ( v5 <= result )
    result = v5;
  ++*(_DWORD *)(v3 + 4LL * *(unsigned __int8 *)(a1 + 24) + 18752);
  return result;
}
