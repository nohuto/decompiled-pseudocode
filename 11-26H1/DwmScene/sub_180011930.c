/*
 * XREFs of sub_180011930 @ 0x180011930
 * Callers:
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180039AF4 @ 0x180039AF4 (sub_180039AF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011930(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  result = a2[1];
  a1[1] = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
