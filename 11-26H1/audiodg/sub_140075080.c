/*
 * XREFs of sub_140075080 @ 0x140075080
 * Callers:
 *     sub_140074904 @ 0x140074904 (sub_140074904.c)
 * Callees:
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 */

__int64 __fastcall sub_140075080(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = dword_1400E87F0;
  if ( (int)v2 >= dword_1400E87F0 )
    return 0LL;
  if ( (_DWORD)v2 != dword_1400E87F0 - 1 )
  {
    sub_14000D7A4(
      (void *)(qword_1400E87E0 + 4 * v2),
      4LL * (dword_1400E87F0 - (int)v2),
      (const void *)(qword_1400E87E0 + 4 * v2 + 4),
      4LL * (dword_1400E87F0 - (int)v2 - 1));
    sub_14000D7A4(
      (void *)(qword_1400E87E8 + 8 * v2),
      8LL * (dword_1400E87F0 - (int)v2),
      (const void *)(qword_1400E87E8 + 8 * v2 + 8),
      8LL * (dword_1400E87F0 - (int)v2 - 1));
    v3 = dword_1400E87F0;
  }
  v4 = o__recalloc(qword_1400E87E0, v3 - 1, 4LL);
  if ( v4 || dword_1400E87F0 == 1 )
    qword_1400E87E0 = v4;
  v5 = o__recalloc(qword_1400E87E8, dword_1400E87F0 - 1, 8LL);
  if ( v5 || dword_1400E87F0 == 1 )
    qword_1400E87E8 = v5;
  result = 1LL;
  --dword_1400E87F0;
  return result;
}
