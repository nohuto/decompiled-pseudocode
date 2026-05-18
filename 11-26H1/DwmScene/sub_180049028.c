/*
 * XREFs of sub_180049028 @ 0x180049028
 * Callers:
 *     sub_180049378 @ 0x180049378 (sub_180049378.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180049028(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = *a2;
  v4 = *a3;
  *a1 = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
  a1[1] = result;
  a1[2] = v4;
  return result;
}
