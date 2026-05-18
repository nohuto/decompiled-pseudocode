/*
 * XREFs of sub_18007D0C0 @ 0x18007D0C0
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 */

__int64 __fastcall sub_18007D0C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)sub_18007C6F4(a1, a2) + 128)
                       + *(_QWORD *)(a1 + 56)
                       + 40);
  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result + 40 * v5 + 32) = a3;
  return result;
}
