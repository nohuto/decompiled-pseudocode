/*
 * XREFs of GetOperatorIndexByToken @ 0x140A631E0
 * Callers:
 *     LocalpGetStringForCondition @ 0x140A62C88 (LocalpGetStringForCondition.c)
 *     LocalGetConditionForString @ 0x140A634C4 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = 0LL;
  v2 = &qword_140004298;
  while ( (unsigned int)result < 0x18 )
  {
    if ( *(_BYTE *)v2 == a1 )
      return result;
    result = (unsigned int)(result + 1);
    v2 += 3;
  }
  return 0xFFFFFFFFLL;
}
