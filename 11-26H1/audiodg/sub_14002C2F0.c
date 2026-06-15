/*
 * XREFs of sub_14002C2F0 @ 0x14002C2F0
 * Callers:
 *     sub_14002C234 @ 0x14002C234 (sub_14002C234.c)
 * Callees:
 *     sub_14002C3A8 @ 0x14002C3A8 (sub_14002C3A8.c)
 */

__int64 __fastcall sub_14002C2F0(__int64 a1)
{
  __int64 result; // rax

  sub_14002C3A8();
  *(_QWORD *)a1 = off_1400BA2C8;
  *(_QWORD *)(a1 + 8) = off_1400BA2A8;
  *(_QWORD *)(a1 + 16) = off_1400BA288;
  *(_OWORD *)(a1 + 32) = xmmword_1400C5548;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
