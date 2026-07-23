/*
 * XREFs of ApiSetSchemaExpander_InsertHostEntry @ 0x1406DFCF4
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpInsertHashEntry @ 0x1406E0788 (ApiSetpInsertHashEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertHostEntry(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // r15d
  size_t v10; // r8
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rsi

  v5 = *(unsigned __int16 *)(a1 + 208);
  *a3 = v5;
  *(_WORD *)(a1 + 208) = v5 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 92LL, v5, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(unsigned __int16 *)(a2 + 18);
    v10 = 2LL * *(unsigned __int16 *)(a2 + 18);
    v11 = *(unsigned int *)(v8 + 92);
    v12 = v8 + (unsigned __int16)*a3 * (unsigned __int64)*(unsigned __int8 *)(v8 + 100) - *(unsigned __int16 *)(v8 + 18);
    *(_QWORD *)(v11 + v12) = 0LL;
    *(_DWORD *)(v11 + v12 + 8) = 0;
    *(_WORD *)(v11 + v12 + 8) = v9;
    v13 = *(unsigned int *)(a1 + 88);
    if ( v10 > (unsigned int)(*(_DWORD *)(a1 + 240) - v13) )
    {
      return 2147483653LL;
    }
    else
    {
      memmove(
        (void *)(v13
               + *(_QWORD *)(a1 + 32)
               + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 36LL)
               - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 18LL)),
        *(const void **)a2,
        v10);
      *(_DWORD *)(a1 + 88) += 2 * v9;
      *(_DWORD *)(v11 + v12 + 4) = v13;
      ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 96LL);
      return 0LL;
    }
  }
  return result;
}
