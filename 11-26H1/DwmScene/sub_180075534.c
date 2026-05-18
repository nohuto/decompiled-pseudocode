/*
 * XREFs of sub_180075534 @ 0x180075534
 * Callers:
 *     sub_180075B8C @ 0x180075B8C (sub_180075B8C.c)
 * Callees:
 *     sub_18007598C @ 0x18007598C (sub_18007598C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075534(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
  return sub_18007598C(a1 + 16);
}
