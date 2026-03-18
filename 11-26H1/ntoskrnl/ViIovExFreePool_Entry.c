/*
 * XREFs of ViIovExFreePool_Entry @ 0x140642940
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140C385E4 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePool_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 8));
}
