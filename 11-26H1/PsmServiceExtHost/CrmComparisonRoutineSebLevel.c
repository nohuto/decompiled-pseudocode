/*
 * XREFs of CrmComparisonRoutineSebLevel @ 0x180064A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSebLevel(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a2 )
    return *(_BYTE *)(a2 + 8) & 2;
  return result;
}
