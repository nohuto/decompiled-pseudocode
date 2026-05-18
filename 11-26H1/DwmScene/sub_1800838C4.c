/*
 * XREFs of sub_1800838C4 @ 0x1800838C4
 * Callers:
 *     sub_180083A50 @ 0x180083A50 (sub_180083A50.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_1800838C4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  v8 = 0LL;
  sub_180011F5C(a1 + 12, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011F5C(a1 + 14, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011F5C(a1 + 16, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011F5C(a1 + 18, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011F5C(a1 + 20, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v2 = a1[21];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[19];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[17];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[15];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[13];
  if ( v6 )
    sub_180010EC8(v6);
  return sub_180027BC8((__int64)a1);
}
