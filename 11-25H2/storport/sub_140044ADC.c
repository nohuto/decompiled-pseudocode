/*
 * XREFs of sub_140044ADC @ 0x140044ADC
 * Callers:
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_140055BA4 @ 0x140055BA4 (sub_140055BA4.c)
 */

__int64 __fastcall sub_140044ADC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_140055BA4(a1, a2, a1);
  *(_QWORD *)(v2 + 5216) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_DWORD *)(v2 + 5344) &= 0xFFFFFFF0;
  *(_QWORD *)(v2 + 5224) = 0LL;
  *(_QWORD *)(v2 + 5232) = 0LL;
  *(_QWORD *)(v2 + 5240) = 0LL;
  *(_QWORD *)(v2 + 5248) = 0LL;
  *(_QWORD *)(v2 + 5256) = 0LL;
  *(_QWORD *)(v2 + 5264) = 0LL;
  *(_QWORD *)(v2 + 5272) = 0LL;
  *(_QWORD *)(v2 + 5280) = 0LL;
  *(_QWORD *)(v2 + 5288) = 0LL;
  *(_QWORD *)(v2 + 5296) = 0LL;
  *(_DWORD *)(v2 + 5312) = 0;
  *(_WORD *)(v2 + 5316) = 0;
  *(_QWORD *)(v2 + 5304) = 1LL;
  return result;
}
