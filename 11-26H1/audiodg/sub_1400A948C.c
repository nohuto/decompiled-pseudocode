/*
 * XREFs of sub_1400A948C @ 0x1400A948C
 * Callers:
 *     sub_1400A9560 @ 0x1400A9560 (sub_1400A9560.c)
 * Callees:
 *     sub_14002F2D8 @ 0x14002F2D8 (sub_14002F2D8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 (__fastcall **__fastcall sub_1400A948C(__int64 a1))()
{
  bool v1; // zf
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 16) == 1;
  result = off_1400C1150;
  *(_QWORD *)a1 = off_1400C1150;
  if ( v1 )
    result = (__int64 (__fastcall **)())j_j__o_free(*(_QWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    return (__int64 (__fastcall **)())sub_14002F2D8(v4);
  return result;
}
