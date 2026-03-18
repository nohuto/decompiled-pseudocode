/*
 * XREFs of ViIovExFreePool_Entry @ 0x140698E00
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140B8A3F8 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePool_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 8));
}
