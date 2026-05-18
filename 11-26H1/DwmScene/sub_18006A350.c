/*
 * XREFs of sub_18006A350 @ 0x18006A350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_18006A350(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi

  v5 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
         &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
         1);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 512LL);
  sub_18004ED7C(v6, (__int64)&unk_1801CC9B8, a3);
  return sub_18004EDB4(v6, (__int64)&unk_1801CC9B8, (_QWORD *)(v5 + 216));
}
