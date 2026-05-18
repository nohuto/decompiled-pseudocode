/*
 * XREFs of sub_18004D33C @ 0x18004D33C
 * Callers:
 *     sub_18004D6B0 @ 0x18004D6B0 (sub_18004D6B0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_18004D33C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  sub_180027AF0((void **)(a1 + 136));
  v2 = *(volatile signed __int32 **)(a1 + 128);
  if ( v2 )
    sub_180010F00(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010F00(v3);
  return sub_180027C54(a1);
}
