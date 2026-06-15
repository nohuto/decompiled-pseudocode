/*
 * XREFs of sub_1400278DC @ 0x1400278DC
 * Callers:
 *     sub_140027854 @ 0x140027854 (sub_140027854.c)
 * Callees:
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_140027A0C @ 0x140027A0C (sub_140027A0C.c)
 */

__int64 __fastcall sub_1400278DC(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 || a2 >= dword_1400E8788 )
    return 0LL;
  sub_140027A0C(qword_1400E8778 + 8LL * a2);
  v3 = dword_1400E8788;
  if ( (_DWORD)v2 != dword_1400E8788 - 1 )
  {
    sub_14000D7A4(
      (void *)(qword_1400E8778 + 8 * v2),
      8LL * (dword_1400E8788 - (int)v2),
      (const void *)(qword_1400E8778 + 8 * v2 + 8),
      8LL * (dword_1400E8788 - (int)v2 - 1));
    sub_14000D7A4(
      (void *)(qword_1400E8780 + 8 * v2),
      8LL * (dword_1400E8788 - (int)v2),
      (const void *)(qword_1400E8780 + 8 * v2 + 8),
      8LL * (dword_1400E8788 - (int)v2 - 1));
    v3 = dword_1400E8788;
  }
  v4 = o__recalloc(qword_1400E8778, v3 - 1, 8LL);
  if ( v4 || dword_1400E8788 == 1 )
    qword_1400E8778 = v4;
  v5 = o__recalloc(qword_1400E8780, dword_1400E8788 - 1, 8LL);
  if ( v5 || dword_1400E8788 == 1 )
    qword_1400E8780 = v5;
  result = 1LL;
  --dword_1400E8788;
  return result;
}
