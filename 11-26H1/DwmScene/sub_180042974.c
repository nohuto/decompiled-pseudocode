/*
 * XREFs of sub_180042974 @ 0x180042974
 * Callers:
 *     sub_180042CE0 @ 0x180042CE0 (sub_180042CE0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027B20 @ 0x180027B20 (sub_180027B20.c)
 *     sub_1800433C4 @ 0x1800433C4 (sub_1800433C4.c)
 */

__int64 __fastcall sub_180042974(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  sub_1800433C4();
  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
    sub_180010F00(v2);
  sub_180027B20((void **)(a1 + 200));
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    sub_180010EC8(v3);
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
    sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(volatile signed __int32 **)(a1 + 104);
  if ( v6 )
    sub_180010F00(v6);
  return sub_180027C54(a1);
}
