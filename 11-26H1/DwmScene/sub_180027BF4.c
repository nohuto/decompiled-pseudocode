/*
 * XREFs of sub_180027BF4 @ 0x180027BF4
 * Callers:
 *     sub_180027CC0 @ 0x180027CC0 (sub_180027CC0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_180027BF4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    sub_180010EC8(v3);
  sub_180027AF0((void **)(a1 + 120));
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 )
    sub_180010F00(v4);
  return sub_180027C54(a1);
}
