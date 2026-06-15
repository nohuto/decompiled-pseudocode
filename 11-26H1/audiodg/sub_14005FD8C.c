/*
 * XREFs of sub_14005FD8C @ 0x14005FD8C
 * Callers:
 *     sub_14005FDB0 @ 0x14005FDB0 (sub_14005FDB0.c)
 *     sub_14005FEC0 @ 0x14005FEC0 (sub_14005FEC0.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_14005FD8C(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
