/*
 * XREFs of sub_180060570 @ 0x180060570
 * Callers:
 *     sub_18005ECC0 @ 0x18005ECC0 (sub_18005ECC0.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18005FC4C @ 0x18005FC4C (sub_18005FC4C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180060570(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C514(344LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    sub_18005FC4C((void *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
