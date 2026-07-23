/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140A28160
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 i; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  bool IsEqual; // al
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // al

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; (v2 & 0x8000u) == 0; --v2 )
  {
    if ( v2 >= 2u )
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16);
    else
      v6 = *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v6 + 66) && *(_BYTE *)(v6 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v6 + 40) != -1 )
    {
      v7 = *(_QWORD *)(v6 + 240);
      if ( !v7
        || a2
        && (a2 == v7
         || ((v11 = *(_QWORD *)(a2 + 56)) == 0 || (v13 = *(_QWORD *)(v7 + 56)) == 0
           ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v7 + 88)))
           : (IsEqual = v11 == v13),
             IsEqual)) )
      {
        i = v6;
        if ( *(_WORD *)(v6 + 66) )
        {
          if ( *(_BYTE *)(v6 + 65) )
            break;
        }
      }
    }
  }
  v8 = *(_QWORD *)(i + 88);
  if ( a2 )
  {
    v9 = i + 208;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v9 == v10 )
      goto LABEL_37;
LABEL_23:
    v14 = v10 - 32;
    v10 = *(_QWORD *)(v10 + 8);
    while ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 56);
      if ( v15 )
      {
        if ( v15 == a2
          || ((v16 = *(_QWORD *)(v15 + 56)) == 0 || (v17 = *(_QWORD *)(a2 + 56)) == 0
            ? (v18 = CmpTransUowIsEqual((const void *)(v15 + 88), (const void *)(a2 + 88)))
            : (v18 = v16 == v17),
              v18) )
        {
          if ( *(_DWORD *)(v14 + 68) == 9 )
            return *(_QWORD *)(v14 + 88) + 32LL;
        }
      }
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + 8);
      if ( v9 != v10 )
        goto LABEL_23;
LABEL_37:
      v14 = 0LL;
    }
  }
  return v8 + 32;
}
