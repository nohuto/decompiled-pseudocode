/*
 * XREFs of sub_1800D4478 @ 0x1800D4478
 * Callers:
 *     sub_1800D3E58 @ 0x1800D3E58 (sub_1800D3E58.c)
 * Callees:
 *     sub_1800D45E8 @ 0x1800D45E8 (sub_1800D45E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D4478(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 80) = -1;
  *(_QWORD *)(a1 + 84) = 0LL;
  result = sub_1800D45E8(a1 + 96);
  *(_BYTE *)(a1 + 112) = 0;
  return result;
}
