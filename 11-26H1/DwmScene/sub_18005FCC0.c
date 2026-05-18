/*
 * XREFs of sub_18005FCC0 @ 0x18005FCC0
 * Callers:
 *     sub_1800605E4 @ 0x1800605E4 (sub_1800605E4.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18005FCC0(__int64 a1)
{
  void **result; // rax

  result = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return result;
}
