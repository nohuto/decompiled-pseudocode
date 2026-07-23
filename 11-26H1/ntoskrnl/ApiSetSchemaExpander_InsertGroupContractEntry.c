/*
 * XREFs of ApiSetSchemaExpander_InsertGroupContractEntry @ 0x1406DFC70
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 * Callees:
 *     ApiSetpInsertHashEntry @ 0x1406E0788 (ApiSetpInsertHashEntry.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertGroupContractEntry(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  v5 = *(unsigned __int16 *)(a1 + 184);
  *a3 = v5;
  *(_WORD *)(a1 + 184) = v5 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 56LL, v5, a2);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32)
       + (unsigned __int16)*a3 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL)
       - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 18LL)
       + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 56LL);
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 0;
    ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 60LL);
    return 0LL;
  }
  return result;
}
