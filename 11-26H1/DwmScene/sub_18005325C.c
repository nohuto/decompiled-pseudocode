/*
 * XREFs of sub_18005325C @ 0x18005325C
 * Callers:
 *     sub_180018D30 @ 0x180018D30 (sub_180018D30.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 */

__int64 __fastcall sub_18005325C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  sub_180052820((_QWORD *)(a1 + 112));
  sub_180038A48((_QWORD *)(a1 + 136));
  sub_1800531F0((void **)(a1 + 128));
  sub_180027AF0((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010F00(v2);
  return sub_180027C54(a1);
}
