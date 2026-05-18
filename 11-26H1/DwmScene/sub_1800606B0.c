/*
 * XREFs of sub_1800606B0 @ 0x1800606B0
 * Callers:
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18005FCE8 @ 0x18005FCE8 (sub_18005FCE8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800606B0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C514(256LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    sub_18005FCE8(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
