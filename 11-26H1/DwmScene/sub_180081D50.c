/*
 * XREFs of sub_180081D50 @ 0x180081D50
 * Callers:
 *     sub_180046A70 @ 0x180046A70 (sub_180046A70.c)
 *     sub_1800827C0 @ 0x1800827C0 (sub_1800827C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 */

__int64 __fastcall sub_180081D50(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    sub_180010EC8(v2);
  sub_180027AF0((void **)(a1 + 120));
  sub_180038A48((_QWORD *)(a1 + 112));
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010F00(v3);
  return sub_180027C54(a1);
}
