/*
 * XREFs of sub_14000D620 @ 0x14000D620
 * Callers:
 *     sub_14002B918 @ 0x14002B918 (sub_14002B918.c)
 *     sub_14002C06C @ 0x14002C06C (sub_14002C06C.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14000D620(__int64 a1)
{
  return a1 && *(_QWORD *)(a1 + 56) && *(_DWORD *)(a1 + 52) && (*(_DWORD *)(a1 + 20) & 4) == 0;
}
