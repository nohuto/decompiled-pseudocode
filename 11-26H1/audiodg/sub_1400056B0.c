/*
 * XREFs of sub_1400056B0 @ 0x1400056B0
 * Callers:
 *     sub_140005654 @ 0x140005654 (sub_140005654.c)
 *     sub_14004D728 @ 0x14004D728 (sub_14004D728.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400056B0(__int64 a1)
{
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  *(_DWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 140) = 0LL;
  *(_OWORD *)(a1 + 156) = 0LL;
  *(_DWORD *)(a1 + 172) = 0;
  *(_WORD *)(a1 + 176) = 0;
  *(_BYTE *)(a1 + 178) = 0;
  sub_140006470();
  sub_140006980(&PerformanceCount);
  sub_1400066EC(&PerformanceCount);
  return a1;
}
