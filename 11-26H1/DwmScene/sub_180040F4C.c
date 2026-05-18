/*
 * XREFs of sub_180040F4C @ 0x180040F4C
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18003C7CC @ 0x18003C7CC (sub_18003C7CC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180040F4C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  __int64 v7; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  volatile __int32 *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rsi
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v22; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+50h] [rbp-49h]
  __int64 v24; // [rsp+58h] [rbp-41h] BYREF
  __int64 v25; // [rsp+60h] [rbp-39h]
  __int64 *v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+70h] [rbp-29h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  __int64 v29; // [rsp+88h] [rbp-11h]

  v7 = a2;
  v29 = a2;
  sub_180029E54(a1 + 16);
  v9 = sub_180013440(&v26, v7);
  sub_1800403B8(a1, &v22, (__int64)v9);
  v11 = v22;
  v12 = (volatile __int32 *)(v22 + 76);
  while ( _InterlockedExchange(v12, 1) )
    ;
  if ( *(_BYTE *)(v11 + 80) )
  {
    v13 = a6 | *(_QWORD *)(v11 + 96) | *(_QWORD *)(*a4 + 536);
    v14 = *(_QWORD *)sub_18004068C(v11, &v24);
    if ( v25 )
      sub_180010EC8(v25);
    if ( v14 )
    {
      v15 = *(_QWORD *)sub_18004068C(v11, &v24);
      if ( v25 )
        sub_180010EC8(v25);
      (**(void (__fastcall ***)(_QWORD, __int64 **, __int64, __int64))*a5)(*a5, &v26, v15, *a4);
      v16 = v26;
      v17 = v27;
      if ( v26 != v27 )
      {
        do
        {
          v18 = *v16;
          sub_18003D718(*v16);
          if ( (*(_QWORD *)(*a4 + 512) & *(_QWORD *)(v18 + 448)) == *(_QWORD *)(*a4 + 504) )
            sub_18003C7CC(*v16, v13, a3, a4);
          ++v16;
        }
        while ( v16 != v17 );
        v16 = v26;
        v7 = a2;
      }
      if ( v16 )
        sub_18000E26C(v16, (v28 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  sub_180038908(v12, v10, 3);
  if ( v23 )
    sub_180010EC8(v23);
  return sub_180014244(v7);
}
