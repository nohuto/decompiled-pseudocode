/*
 * XREFs of sub_18006D644 @ 0x18006D644
 * Callers:
 *     sub_18006D810 @ 0x18006D810 (sub_18006D810.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_18006D644(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx

  *a1 = &Spectre::Engine::ImageProcessingManager::`vftable';
  v2 = a1[60];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[58];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[55];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[53];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[51];
  if ( v6 )
    sub_180010EC8(v6);
  v7 = a1[49];
  if ( v7 )
    sub_180010EC8(v7);
  v8 = a1[47];
  if ( v8 )
    sub_180010EC8(v8);
  v9 = a1[45];
  if ( v9 )
    sub_180010EC8(v9);
  v10 = a1[43];
  if ( v10 )
    sub_180010EC8(v10);
  v11 = a1[41];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a1[39];
  if ( v12 )
    sub_180010EC8(v12);
  v13 = a1[37];
  if ( v13 )
    sub_180010EC8(v13);
  v14 = a1[35];
  if ( v14 )
    sub_180010EC8(v14);
  sub_18000BFA4(
    (__int64)(a1 + 22),
    16LL,
    6LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  result = sub_18000BFA4(
             (__int64)(a1 + 10),
             16LL,
             6LL,
             (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v16 = a1[9];
  if ( v16 )
    result = sub_180010EC8(v16);
  v17 = a1[5];
  if ( v17 )
  {
    sub_1800130CC(v17, a1[6]);
    result = sub_18000E26C((void *)a1[5], (a1[7] - a1[5]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[5] = 0LL;
    a1[6] = 0LL;
    a1[7] = 0LL;
  }
  return result;
}
