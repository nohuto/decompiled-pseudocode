/*
 * XREFs of sub_1800849AC @ 0x1800849AC
 * Callers:
 *     sub_1800801F0 @ 0x1800801F0 (sub_1800801F0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 */

__int64 __fastcall sub_1800849AC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 )
    sub_180010F00(v2);
  sub_180027AF0((void **)(a1 + 144));
  sub_180078020(a1 + 112);
  return sub_180027C54(a1);
}
