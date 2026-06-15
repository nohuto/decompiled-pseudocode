/*
 * XREFs of sub_140095FC4 @ 0x140095FC4
 * Callers:
 *     sub_14009604C @ 0x14009604C (sub_14009604C.c)
 *     sub_140096170 @ 0x140096170 (sub_140096170.c)
 * Callees:
 *     sub_140095E80 @ 0x140095E80 (sub_140095E80.c)
 */

__int64 __fastcall sub_140095FC4(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_140095E80(a1);
  *(_QWORD *)a1 = off_1400C0210;
  *(_QWORD *)(a1 + 8) = off_1400BF628;
  *(_QWORD *)(a1 + 424) = off_1400C01D8;
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
