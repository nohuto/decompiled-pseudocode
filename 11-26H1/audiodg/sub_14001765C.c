/*
 * XREFs of sub_14001765C @ 0x14001765C
 * Callers:
 *     sub_140017620 @ 0x140017620 (sub_140017620.c)
 * Callees:
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_1400176AC @ 0x1400176AC (sub_1400176AC.c)
 */

__int64 __fastcall sub_14001765C(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400B8678;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    sub_14000DA94(v4, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), a3);
  result = sub_1400176AC(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
