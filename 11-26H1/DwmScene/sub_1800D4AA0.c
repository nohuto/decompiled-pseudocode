/*
 * XREFs of sub_1800D4AA0 @ 0x1800D4AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180025EA0 @ 0x180025EA0 (sub_180025EA0.c)
 *     sub_180027428 @ 0x180027428 (sub_180027428.c)
 *     sub_1800D44E0 @ 0x1800D44E0 (sub_1800D44E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D4AA0(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  char v5; // bp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v13 = a1 + 8;
  sub_180012AC4(a1 + 8);
  v12 = ++*(_DWORD *)(a1 + 88);
  v5 = *(_BYTE *)(a1 + 112);
  if ( !v5 )
  {
    v6 = (_QWORD *)sub_1800D44E0((__int64 *)(a1 + 96), (__int64)v14, &v12);
    v8 = *v6 + 40LL;
    if ( v8 != a2 )
    {
      sub_180013494(*v6 + 40LL, v7);
      sub_180027428(v8, a2);
    }
  }
  Mtx_unlock(v4);
  if ( v5 )
    sub_180025EA0(a2);
  v10 = v12;
  sub_180013494(a2, v9);
  return v10;
}
