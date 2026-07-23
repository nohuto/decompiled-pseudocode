/*
 * XREFs of CmRmIsKcbStackVisible @ 0x140A4E080
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 */

char __fastcall CmRmIsKcbStackVisible(__int64 a1, __int64 a2)
{
  __int16 i; // ax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // rax
  bool IsEqual; // al
  __int64 v9; // rcx

  for ( i = *(_WORD *)(a1 + 2); ; --i )
  {
    if ( i < 0 )
      return 1;
    v4 = i >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16) : *(_QWORD *)(a1 + 8LL * i + 8);
    if ( *(_DWORD *)(v4 + 40) != -1 )
      break;
  }
  v5 = *(_QWORD *)(v4 + 240);
  if ( !v5 )
    return 1;
  if ( a2 )
  {
    if ( a2 == v5 )
      return 1;
    v7 = *(_QWORD *)(a2 + 56);
    if ( v7 && (v9 = *(_QWORD *)(v5 + 56)) != 0 )
      IsEqual = v7 == v9;
    else
      IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v5 + 88));
    if ( IsEqual )
      return 1;
  }
  return 0;
}
