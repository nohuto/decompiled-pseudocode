/*
 * XREFs of sub_180042A00 @ 0x180042A00
 * Callers:
 *     sub_180042D20 @ 0x180042D20 (sub_180042D20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_180042A00(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderState::`vftable';
  sub_180027AF0((void **)(a1 + 128));
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010F00(v3);
  return sub_180027C54(a1);
}
