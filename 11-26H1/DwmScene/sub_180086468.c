/*
 * XREFs of sub_180086468 @ 0x180086468
 * Callers:
 *     sub_180086510 @ 0x180086510 (sub_180086510.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

void **__fastcall sub_180086468(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx

  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  v2 = a1[240];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[238];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[236];
  if ( v4 )
    sub_180010EC8(v4);
  sub_1800129D0((__int64)(a1 + 231));
  v5 = a1[230];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[228];
  if ( v6 )
    sub_180010EC8(v6);
  v7 = a1[226];
  if ( v7 )
    sub_180010EC8(v7);
  sub_1800129D0((__int64)(a1 + 221));
  return sub_1800570E0((__int64)a1, v8);
}
