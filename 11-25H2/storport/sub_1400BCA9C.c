/*
 * XREFs of sub_1400BCA9C @ 0x1400BCA9C
 * Callers:
 *     sub_1400BDE7C @ 0x1400BDE7C (sub_1400BDE7C.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400BCA9C(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 0x4000) != 0 && (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 8) == 0;
}
