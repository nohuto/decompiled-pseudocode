/*
 * XREFs of sub_14001DBC0 @ 0x14001DBC0
 * Callers:
 *     sub_14001DB3C @ 0x14001DB3C (sub_14001DB3C.c)
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     sub_140064E60 @ 0x140064E60 (sub_140064E60.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_14001DBC0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
