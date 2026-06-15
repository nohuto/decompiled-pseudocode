/*
 * XREFs of sub_1400447DC @ 0x1400447DC
 * Callers:
 *     sub_1400446B0 @ 0x1400446B0 (sub_1400446B0.c)
 *     sub_140044E20 @ 0x140044E20 (sub_140044E20.c)
 * Callees:
 *     sub_140044BD8 @ 0x140044BD8 (sub_140044BD8.c)
 */

__int64 __fastcall sub_1400447DC(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_140044BD8();
  *(_QWORD *)a1 = &off_1400BAB90;
  *(_QWORD *)(a1 + 8) = &off_1400BABE8;
  *(_QWORD *)(a1 + 424) = &off_1400BAB58;
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
