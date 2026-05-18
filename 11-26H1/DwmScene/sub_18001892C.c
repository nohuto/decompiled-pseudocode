/*
 * XREFs of sub_18001892C @ 0x18001892C
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 *     sub_18006C480 @ 0x18006C480 (sub_18006C480.c)
 *     sub_18008D8F0 @ 0x18008D8F0 (sub_18008D8F0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18001892C(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) != 0;
}
