/*
 * XREFs of ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406DFDEC
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpGetSemverKeyVersions @ 0x1406DF60C (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpInsertHashEntry @ 0x1406E0788 (ApiSetpInsertHashEntry.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertSemverContractEntry(__int64 a1, __int64 *a2, _WORD *a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax

  v5 = *(unsigned __int16 *)(a1 + 196);
  *a3 = v5;
  *(_WORD *)(a1 + 196) = v5 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 68LL, v5, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(unsigned int *)(v8 + 68);
    v10 = v8 + (unsigned __int16)*a3 * (unsigned __int64)*(unsigned __int8 *)(v8 + 76) - *(unsigned __int16 *)(v8 + 18);
    *(_QWORD *)(v9 + v10) = 0LL;
    *(_DWORD *)(v9 + v10 + 8) = 0;
    if ( ApiSetpGetSemverKeyVersions(a2, (_BYTE *)(v10 + v9 + 8), (_BYTE *)(v10 + v9 + 9)) )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 72LL);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
