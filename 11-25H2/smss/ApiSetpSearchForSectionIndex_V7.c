/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x140019F68
 * Callers:
 *     ApiSetpResolveHost @ 0x14001990C (ApiSetpResolveHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned __int8 *v4; // r11
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned __int8 v9; // al
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  __int64 v13; // r10
  int v14; // ecx
  __int64 v15; // rax

  v3 = 0;
  v4 = (unsigned __int8 *)(*(_QWORD *)a3 + *(unsigned __int16 *)(a3 + 16));
  v6 = 0;
  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
    LOWORD(v7) = *(_WORD *)(a3 + 20);
  else
    LOWORD(v7) = *(_WORD *)(a3 + 18);
  if ( (_WORD)v7 )
  {
    v7 = (unsigned __int16)v7;
    v8 = (*(_BYTE *)(a3 + 10) != 0) + 1LL;
    do
    {
      v9 = *v4;
      if ( *v4 >= 0x41u && v9 <= 0x5Au )
        v9 += 32;
      v4 += v8;
      v6 = v6 * *(unsigned __int8 *)(a2 + 10) + v9;
      --v7;
    }
    while ( v7 );
  }
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(_DWORD *)a2 + v10 * *(unsigned __int8 *)(a2 + 8);
  v12 = v10 - 1;
  if ( v10 - 1 < 0 )
    return 0xFFFFLL;
  v13 = v11;
  while ( 1 )
  {
    v14 = (v3 + v12) >> 1;
    v15 = v13 + 8LL * v14 - *(unsigned __int16 *)(a1 + 18);
    if ( v6 >= *(_DWORD *)(v15 + a1) )
      break;
    v12 = v14 - 1;
LABEL_16:
    if ( v3 > v12 )
      return 0xFFFFLL;
  }
  if ( v6 > *(_DWORD *)(v15 + a1) )
  {
    v3 = v14 + 1;
    goto LABEL_16;
  }
  return *(unsigned __int16 *)(v15 + a1 + 4);
}
