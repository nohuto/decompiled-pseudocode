/*
 * XREFs of sub_1800268A0 @ 0x1800268A0
 * Callers:
 *     sub_1800BC270 @ 0x1800BC270 (sub_1800BC270.c)
 * Callees:
 *     sub_18006C3B4 @ 0x18006C3B4 (sub_18006C3B4.c)
 */

__int64 __fastcall sub_1800268A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 3888);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 3892);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 3896);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 3900);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 3904);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 3936);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 3944);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 3928);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 3960);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a1 + 3968);
  *(_DWORD *)(a2 + 20) = sub_18006C3B4(&unk_1801C85B0, 0LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 24) = sub_18006C3B4(&unk_1801C85B0, 1LL, 1LL, 1LL);
  result = sub_18006C3B4(&unk_1801C85B0, 11LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
