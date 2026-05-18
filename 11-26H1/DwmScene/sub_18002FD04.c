/*
 * XREFs of sub_18002FD04 @ 0x18002FD04
 * Callers:
 *     sub_18002D3D4 @ 0x18002D3D4 (sub_18002D3D4.c)
 *     sub_180032950 @ 0x180032950 (sub_180032950.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002D93C @ 0x18002D93C (sub_18002D93C.c)
 */

_QWORD *__fastcall sub_18002FD04(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C514(56LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    sub_18002D93C((_QWORD *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
