/*
 * XREFs of PepPerfStateTargetHandler @ 0x14000D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateTargetHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        _QWORD *a6)
{
  unsigned __int8 v7; // bl
  __int64 v8; // r9
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // r10
  unsigned __int8 v13; // cl
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // dl
  __int64 v18; // rax
  __int64 v21; // [rsp+30h] [rbp+30h]

  v7 = 0;
  v8 = *(_QWORD *)(a1 + 40);
  v11 = 0;
  v12 = *(_BYTE *)(v8 + 37);
  while ( v11 < v12 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL * v11 + 8) <= a4 )
    {
      v7 = v11;
      break;
    }
    ++v11;
  }
  v13 = v12 - 1;
  while ( v12 )
  {
    v14 = *(_QWORD *)(v8 + 40);
    if ( *(_DWORD *)(v14 + 24LL * v12 - 16) >= a3
      && ((a5 & 1) != 0 || *(_DWORD *)(v14 + 24LL * v12 - 24) >= *(_DWORD *)(v8 + 12)) )
    {
      v13 = v12 - 1;
      break;
    }
    --v12;
  }
  v15 = *(_QWORD *)(v8 + 40);
  v16 = v13;
  if ( v13 < v7 )
    v16 = v7;
  if ( (a5 & 2) != 0 )
  {
    v17 = v7 - 1;
    do
      v18 = v15 + 24LL * ++v17;
    while ( *(_DWORD *)(v18 + 8) > a2 && v17 < v16 );
  }
  else
  {
    v17 = v16 + 1;
    do
      v18 = v15 + 24LL * --v17;
    while ( *(_DWORD *)(v18 + 8) < a2 && v17 > v7 );
  }
  if ( a6 )
  {
    v21 = v17;
    BYTE1(v21) = v16;
    BYTE2(v21) = v7;
    *a6 = v21;
  }
  return *(unsigned int *)(v18 + 8);
}
