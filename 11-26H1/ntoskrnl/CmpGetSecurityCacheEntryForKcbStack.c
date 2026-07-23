/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x140775FB8 (CmpCheckKcbStackAccess.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpNotifyTriggerCheck @ 0x1408D6EE8 (CmpNotifyTriggerCheck.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140945804 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x140AAECBC (CmpCheckKeyOwnerForPca.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int16 v3; // bx
  __int64 i; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v12; // rax
  bool IsEqual; // al
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx

  v3 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; (v3 & 0x8000u) == 0; --v3 )
  {
    if ( v3 >= 2u )
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v3 - 16);
    else
      v8 = *(_QWORD *)(a1 + 8LL * v3 + 8);
    if ( *(_WORD *)(v8 + 66) && *(_BYTE *)(v8 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v8 + 40) != -1 )
    {
      v9 = *(_QWORD *)(v8 + 240);
      if ( !v9
        || a2
        && (a2 == v9
         || ((v12 = *(_QWORD *)(a2 + 56)) == 0 || (v21 = *(_QWORD *)(v9 + 56)) == 0
           ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v9 + 88)))
           : (IsEqual = v12 == v21),
             IsEqual)) )
      {
        i = v8;
        if ( *(_WORD *)(v8 + 66) )
        {
          if ( *(_BYTE *)(v8 + 65) )
            break;
        }
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(i + 66);
  v10 = *(_QWORD *)(i + 88);
  if ( a2 )
  {
    v14 = i + 208;
    v15 = *(_QWORD *)(i + 216);
    if ( i + 208 != v15 )
      goto LABEL_30;
LABEL_22:
    v16 = 0LL;
    while ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 56);
      if ( v17 )
      {
        if ( v17 == a2
          || ((v18 = *(_QWORD *)(v17 + 56)) == 0 || (v20 = *(_QWORD *)(a2 + 56)) == 0
            ? (v19 = CmpTransUowIsEqual((const void *)(v17 + 88), (const void *)(a2 + 88)))
            : (v19 = v18 == v20),
              v19) )
        {
          if ( *(_DWORD *)(v16 + 68) == 9 )
            return *(_QWORD *)(v16 + 88);
        }
      }
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + 8);
      if ( v14 == v15 )
        goto LABEL_22;
LABEL_30:
      v16 = v15 - 32;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  return v10;
}
