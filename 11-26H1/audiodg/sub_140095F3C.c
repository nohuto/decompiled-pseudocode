/*
 * XREFs of sub_140095F3C @ 0x140095F3C
 * Callers:
 *     sub_140095A54 @ 0x140095A54 (sub_140095A54.c)
 *     sub_1400960EC @ 0x1400960EC (sub_1400960EC.c)
 * Callees:
 *     sub_140095DC4 @ 0x140095DC4 (sub_140095DC4.c)
 */

__int64 __fastcall sub_140095F3C(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_140095DC4(a1);
  *(_QWORD *)a1 = off_1400C0268;
  *(_QWORD *)(a1 + 8) = &off_1400BABE8;
  *(_QWORD *)(a1 + 424) = off_1400C01A0;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 480) = a2;
  return result;
}
