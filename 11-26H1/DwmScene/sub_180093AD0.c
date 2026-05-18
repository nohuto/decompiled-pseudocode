/*
 * XREFs of sub_180093AD0 @ 0x180093AD0
 * Callers:
 *     sub_180093D30 @ 0x180093D30 (sub_180093D30.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 */

void **__fastcall sub_180093AD0(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  v11 = 0LL;
  sub_180011F5C(a1 + 9, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011F5C(a1 + 36, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011F5C(a1 + 40, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011F5C(a1 + 34, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011F5C(a1 + 25, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011F5C(a1 + 23, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  v2 = a1 + 27;
  sub_18008F734(a1 + 27);
  sub_1800129D0((__int64)(a1 + 42));
  v3 = a1[41];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[39];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[37];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[35];
  if ( v6 )
    sub_180010EC8(v6);
  v7 = (void *)a1[30];
  if ( v7 )
  {
    sub_18000E26C(v7, (a1[32] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[30] = 0LL;
    a1[31] = 0LL;
    a1[32] = 0LL;
  }
  if ( *v2 )
  {
    sub_1800130CC(*v2, a1[28]);
    sub_18000E26C((void *)*v2, (a1[29] - a1[27]) & 0xFFFFFFFFFFFFFFF0uLL);
    *v2 = 0LL;
    a1[28] = 0LL;
    a1[29] = 0LL;
  }
  v8 = a1[26];
  if ( v8 )
    sub_180010EC8(v8);
  v9 = a1[24];
  if ( v9 )
    sub_180010EC8(v9);
  return sub_18008FBE0(a1);
}
