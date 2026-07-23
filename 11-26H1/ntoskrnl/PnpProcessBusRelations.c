/*
 * XREFs of PnpProcessBusRelations @ 0x1409B67F4
 * Callers:
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 * Callees:
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessBusRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int **BugCheckParameter3)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
  {
    result = PnpProcessRelation((__int64)i, a2, a3, a4, BugCheckParameter3);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
