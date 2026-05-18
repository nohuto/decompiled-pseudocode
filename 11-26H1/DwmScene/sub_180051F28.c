/*
 * XREFs of sub_180051F28 @ 0x180051F28
 * Callers:
 *     sub_180051F84 @ 0x180051F84 (sub_180051F84.c)
 *     sub_180051FD0 @ 0x180051FD0 (sub_180051FD0.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180051DDC @ 0x180051DDC (sub_180051DDC.c)
 */

_QWORD *__fastcall sub_180051F28(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_18001C514(72LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    sub_180051DDC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
