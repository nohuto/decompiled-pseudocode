/*
 * XREFs of sub_1800BAD6C @ 0x1800BAD6C
 * Callers:
 *     sub_1800BB430 @ 0x1800BB430 (sub_1800BB430.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800BAD6C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[16];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[14];
  if ( v3 )
    sub_180010EC8(v3);
  sub_18000F938(a1 + 12);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return sub_180027BC8((__int64)a1);
}
