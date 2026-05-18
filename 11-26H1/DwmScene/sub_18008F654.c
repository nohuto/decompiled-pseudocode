/*
 * XREFs of sub_18008F654 @ 0x18008F654
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_18008F518 @ 0x18008F518 (sub_18008F518.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008F654(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 i; // rbx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _BYTE *, _QWORD *); // r9
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180012AC4(a1 + 48);
  sub_180013540((__int64 *)(a1 + 32), a2);
  sub_18008F518((__int64 **)&v14, (__int64 **)a1);
  sub_18008F734(a1);
  Mtx_unlock(v4);
  for ( i = v14; i != *((_QWORD *)&v14 + 1); i += 16LL )
  {
    v6 = sub_180012C40(&v11, a2);
    v7(v8, v12, v6);
    if ( v13 )
      sub_180010EC8(v13);
  }
  result = sub_1800141F0((__int64)&v14);
  v10 = a2[1];
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
