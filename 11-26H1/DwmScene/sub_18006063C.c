/*
 * XREFs of sub_18006063C @ 0x18006063C
 * Callers:
 *     sub_180061720 @ 0x180061720 (sub_180061720.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18005FCDC @ 0x18005FCDC (sub_18005FCDC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006063C(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C514(304LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_18005FCDC();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
