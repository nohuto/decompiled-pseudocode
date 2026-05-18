/*
 * XREFs of sub_18005FCE8 @ 0x18005FCE8
 * Callers:
 *     sub_1800606B0 @ 0x1800606B0 (sub_1800606B0.c)
 * Callees:
 *     sub_18008FB24 @ 0x18008FB24 (sub_18008FB24.c)
 */

__int64 __fastcall sub_18005FCE8(__int64 a1)
{
  __int64 result; // rax

  sub_18008FB24();
  *(_BYTE *)(a1 + 232) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  result = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  return result;
}
