/*
 * XREFs of sub_18008D9C0 @ 0x18008D9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18008CC14 @ 0x18008CC14 (sub_18008CC14.c)
 */

_QWORD *__fastcall sub_18008D9C0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = sub_18001C514(32LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18008CC14(v4 + 16, (unsigned int *)(a1 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  a2[1] = v5;
  *a2 = v5 + 16;
  return a2;
}
