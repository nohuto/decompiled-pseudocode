/*
 * XREFs of sub_1400ABD00 @ 0x1400ABD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400ABC90 @ 0x1400ABC90 (sub_1400ABC90.c)
 */

ULONGLONG __fastcall sub_1400ABD00(__int64 a1, char a2)
{
  ULONGLONG result; // rax

  sub_1400ABC90(a1, a2);
  result = GetTickCount64();
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
