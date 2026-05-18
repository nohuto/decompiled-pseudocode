/*
 * XREFs of sub_18008D8F0 @ 0x18008D8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001892C @ 0x18001892C (sub_18001892C.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

bool __fastcall sub_18008D8F0(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == a2 )
    return 1;
  v5 = _RTtypeid(a1);
  v6 = _RTtypeid(a2);
  return !sub_18001892C(v5, v6)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(_RTDynamicCast(
                                              a2,
                                              0LL,
                                              &Spectre::Engine::ISceneNodeTraversal `RTTI Type Descriptor',
                                              &Spectre::Engine::DistanceFromCameraSceneNodeTraversal `RTTI Type Descriptor',
                                              1)
                                          + 8);
}
