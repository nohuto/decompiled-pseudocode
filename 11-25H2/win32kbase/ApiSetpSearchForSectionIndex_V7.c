/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x14023FA70
 * Callers:
 *     ApiSetpResolveHost @ 0x14023F598 (ApiSetpResolveHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned __int8 *v4; // rbx
  unsigned int v7; // edi
  __int64 v8; // r10
  int v9; // esi
  __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // edx
  __int64 v15; // r11
  int v16; // ecx
  __int64 v17; // rax

  v3 = 0;
  v4 = (unsigned __int8 *)(*(_QWORD *)a3 + *(unsigned __int16 *)(a3 + 16));
  v7 = 0;
  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
    LOWORD(v8) = *(_WORD *)(a3 + 20);
  else
    LOWORD(v8) = *(_WORD *)(a3 + 18);
  if ( (_WORD)v8 )
  {
    v9 = *(unsigned __int8 *)(a2 + 10);
    v8 = (unsigned __int16)v8;
    v10 = (*(_BYTE *)(a3 + 10) != 0) + 1LL;
    do
    {
      v11 = *v4;
      v12 = *v4;
      if ( *v4 >= 0x41u && v11 <= 0x5Au )
        v12 = v11 + 32;
      v4 += v10;
      v7 = v7 * v9 + v12;
      --v8;
    }
    while ( v8 );
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = v13 - 1;
  if ( v13 - 1 < 0 )
    return 0xFFFFLL;
  v15 = *(_DWORD *)a2 + v13 * (unsigned int)*(unsigned __int8 *)(a2 + 8);
  while ( 1 )
  {
    v16 = (v3 + v14) >> 1;
    v17 = v15 + 8LL * v16 - *(unsigned __int16 *)(a1 + 18);
    if ( v7 >= *(_DWORD *)(v17 + a1) )
      break;
    v14 = v16 - 1;
LABEL_16:
    if ( v3 > v14 )
      return 0xFFFFLL;
  }
  if ( v7 > *(_DWORD *)(v17 + a1) )
  {
    v3 = v16 + 1;
    goto LABEL_16;
  }
  return *(unsigned __int16 *)(v17 + a1 + 4);
}
