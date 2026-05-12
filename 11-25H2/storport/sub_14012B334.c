/*
 * XREFs of sub_14012B334 @ 0x14012B334
 * Callers:
 *     sub_14012A71C @ 0x14012A71C (sub_14012A71C.c)
 * Callees:
 *     sub_14012B2E0 @ 0x14012B2E0 (sub_14012B2E0.c)
 *     sub_14012B3F0 @ 0x14012B3F0 (sub_14012B3F0.c)
 *     sub_14012B860 @ 0x14012B860 (sub_14012B860.c)
 */

__int64 __fastcall sub_14012B334(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // r9
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int8 v10; // r11

  result = *(_QWORD *)(a1 + 128);
  v3 = 0;
  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) >= 0x10u )
  {
    v6 = *(_QWORD *)(a2 + 8);
    do
    {
      v7 = sub_14012B2E0(a1, v3);
      v8 = (unsigned int)sub_14012B860(v7) / 0x3E8;
      if ( v8 <= v6 )
        break;
      ++v3;
    }
    while ( v3 <= v10 );
    *(_BYTE *)(v9 + 183) = v3;
    if ( v3 > v10 )
      *(_BYTE *)(v9 + 183) = v10;
    result = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(result + 64) )
    {
      if ( *(_BYTE *)(v9 + 182) != v3 )
        result = sub_14012B3F0(a1);
    }
    *(_QWORD *)(a2 + 8) = v8;
  }
  return result;
}
