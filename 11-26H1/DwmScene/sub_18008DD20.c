/*
 * XREFs of sub_18008DD20 @ 0x18008DD20
 * Callers:
 *     sub_18005FCDC @ 0x18005FCDC (sub_18005FCDC.c)
 * Callees:
 *     sub_18008FB24 @ 0x18008FB24 (sub_18008FB24.c)
 */

__int64 __fastcall sub_18008DD20(__int64 a1)
{
  __int64 result; // rax

  sub_18008FB24();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1056964608;
  return result;
}
