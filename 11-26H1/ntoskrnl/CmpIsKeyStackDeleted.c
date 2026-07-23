/*
 * XREFs of CmpIsKeyStackDeleted @ 0x1408D52A0
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpEnlistKeyBody @ 0x1408D5180 (CmpEnlistKeyBody.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 NextElement; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  bool IsEqual; // al
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  v12 = 0LL;
  while ( 1 )
  {
    if ( v2 < 0 )
      return 1;
    v3 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v3 + 66) && *(_BYTE *)(v3 + 65) == 1 )
      return 1;
    if ( *(_DWORD *)(v3 + 40) != -1 )
      break;
    --v2;
  }
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v5 + 208, &v12, 32LL);
      if ( !NextElement )
        break;
      if ( *(_DWORD *)(NextElement + 68) == 2 )
      {
        v8 = *(_QWORD *)(NextElement + 56);
        if ( !v8 )
          return 0;
        if ( v8 != v7 )
        {
          v9 = *(_QWORD *)(v8 + 56);
          if ( v9 && (v11 = *(_QWORD *)(v7 + 56)) != 0 )
            IsEqual = v9 == v11;
          else
            IsEqual = CmpTransUowIsEqual((const void *)(v8 + 88), (const void *)(v7 + 88));
          if ( !IsEqual )
            return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}
