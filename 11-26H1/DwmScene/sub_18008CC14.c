/*
 * XREFs of sub_18008CC14 @ 0x18008CC14
 * Callers:
 *     sub_18008D9C0 @ 0x18008D9C0 (sub_18008D9C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008CC14(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
