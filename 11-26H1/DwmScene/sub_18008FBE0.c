/*
 * XREFs of sub_18008FBE0 @ 0x18008FBE0
 * Callers:
 *     sub_18008BD78 @ 0x18008BD78 (sub_18008BD78.c)
 *     sub_18008DDA8 @ 0x18008DDA8 (sub_18008DDA8.c)
 *     sub_18008FD00 @ 0x18008FD00 (sub_18008FD00.c)
 *     sub_180093AD0 @ 0x180093AD0 (sub_180093AD0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

void **__fastcall sub_18008FBE0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void **result; // rax

  *a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  v2 = a1[19];
  if ( v2 )
  {
    sub_1800130CC(v2, a1[20]);
    sub_18000E26C((void *)a1[19], (a1[21] - a1[19]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[19] = 0LL;
    a1[20] = 0LL;
    a1[21] = 0LL;
  }
  sub_1800129D0((__int64)(a1 + 13));
  v3 = a1[12];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[10];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[8];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[6];
  if ( v6 )
    sub_180010EC8(v6);
  v7 = a1[4];
  if ( v7 )
    sub_180010EC8(v7);
  v8 = a1[2];
  if ( v8 )
    sub_180010EC8(v8);
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
