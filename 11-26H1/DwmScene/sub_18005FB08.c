/*
 * XREFs of sub_18005FB08 @ 0x18005FB08
 * Callers:
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18006E99C @ 0x18006E99C (sub_18006E99C.c)
 */

_QWORD *__fastcall sub_18005FB08(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  char v4; // si
  __int64 v5; // r14
  __int64 v6; // rbx
  char v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  _QWORD *v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+58h] [rbp-8h]
  void *v15; // [rsp+88h] [rbp+28h] BYREF

  v15 = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
  sub_18006E99C(a1, &v12, &v15);
  if ( (v13 - (__int64)v12) >> 4 )
  {
    v3 = sub_180012C40(&v10, v12);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9 = 0LL;
    v3 = (__int64 *)&v8;
    v4 = 2;
    v5 = 0LL;
  }
  v6 = v3[1];
  v3[1] = 0LL;
  *v3 = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      sub_180010EC8(v9);
  }
  if ( (v4 & 1) != 0 && v11 )
    sub_180010EC8(v11);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *a2 = v5;
  a2[1] = v6;
  if ( v6 )
    sub_180010EC8(v6);
  if ( v12 )
  {
    sub_1800130CC((__int64)v12, v13);
    sub_18000E26C(v12, (v14 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a2;
}
