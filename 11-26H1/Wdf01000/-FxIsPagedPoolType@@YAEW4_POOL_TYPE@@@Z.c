/*
 * XREFs of ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x14001543C
 * Callers:
 *     imp_WdfMemoryCreate @ 0x140014B20 (imp_WdfMemoryCreate.c)
 *     imp_WdfLookasideListCreate @ 0x140094310 (imp_WdfLookasideListCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsPagedPoolType(_POOL_TYPE Type)
{
  unsigned __int32 v1; // ecx

  v1 = (Type & 0xFFFFFEFF) - 1;
  return !v1 || v1 == 4;
}
