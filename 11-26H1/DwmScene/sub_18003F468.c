/*
 * XREFs of sub_18003F468 @ 0x18003F468
 * Callers:
 *     sub_1800DC4D3 @ 0x1800DC4D3 (sub_1800DC4D3.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18003F468(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
