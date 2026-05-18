/*
 * XREFs of sub_1800759E0 @ 0x1800759E0
 * Callers:
 *     sub_180075564 @ 0x180075564 (sub_180075564.c)
 *     sub_1800DCD83 @ 0x1800DCD83 (sub_1800DCD83.c)
 * Callees:
 *     sub_18002E2C0 @ 0x18002E2C0 (sub_18002E2C0.c)
 */

__int64 __fastcall sub_1800759E0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18002E2C0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}
