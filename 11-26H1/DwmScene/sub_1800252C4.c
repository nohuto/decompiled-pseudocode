/*
 * XREFs of sub_1800252C4 @ 0x1800252C4
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_18006C520 @ 0x18006C520 (sub_18006C520.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_18008F764 @ 0x18008F764 (sub_18008F764.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

_QWORD *__fastcall sub_1800252C4(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C514(24LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Engine::DefaultSceneNodeTraversal::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
