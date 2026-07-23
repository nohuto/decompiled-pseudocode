/*
 * XREFs of CmpAddKeyHashToEntry @ 0x140ADE86C
 * Callers:
 *     CmpInsertKeyHash @ 0x14085F728 (CmpInsertKeyHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAddKeyHashToEntry(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( !a3 )
  {
    while ( v3 )
    {
      if ( *(_DWORD *)a1 == *(_DWORD *)v3
        && *(_DWORD *)(a1 + 24) == *(_DWORD *)(v3 + 24)
        && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v3 + 16) )
      {
        return v3 - 16;
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 16);
  result = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  return result;
}
