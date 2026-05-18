/*
 * XREFs of sub_1800520A4 @ 0x1800520A4
 * Callers:
 *     sub_180018BB0 @ 0x180018BB0 (sub_180018BB0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 */

__int64 __fastcall sub_1800520A4(_QWORD *a1)
{
  void **v2; // rbx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  v2 = (void **)(a1 + 16);
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180052820(a1 + 16);
  sub_180027AF0(v2);
  v3 = a1[15];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 )
    sub_180010F00(v4);
  return sub_180027C54((__int64)a1);
}
