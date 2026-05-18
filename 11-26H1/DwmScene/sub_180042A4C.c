/*
 * XREFs of sub_180042A4C @ 0x180042A4C
 * Callers:
 *     sub_180042DA0 @ 0x180042DA0 (sub_180042DA0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

void **__fastcall sub_180042A4C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void **result; // rax

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
    sub_180010F00(v2);
  result = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  return result;
}
