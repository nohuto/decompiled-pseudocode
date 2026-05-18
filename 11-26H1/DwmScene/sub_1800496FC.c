/*
 * XREFs of sub_1800496FC @ 0x1800496FC
 * Callers:
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 */

void **__fastcall sub_1800496FC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 160);
  if ( v2 )
    sub_180010F00(v2);
  v3 = *(volatile signed __int32 **)(a1 + 144);
  if ( v3 )
    sub_180010F00(v3);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    sub_180049070(v4, *(_QWORD *)(a1 + 112));
    sub_18000E26C(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    sub_180010EC8(v5);
  return sub_180041EB4((_QWORD *)a1);
}
