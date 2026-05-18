/*
 * XREFs of sub_18001FE78 @ 0x18001FE78
 * Callers:
 *     sub_18001FE0C @ 0x18001FE0C (sub_18001FE0C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_18001FE78(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = 0LL;
  a1[3] = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  a1[2] = *a3;
  a1[3] = a3[1];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v10 = a4[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  a1[4] = *a4;
  a1[5] = a4[1];
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v11 = a2[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a3[1];
  if ( v12 )
    sub_180010EC8(v12);
  v13 = a4[1];
  if ( v13 )
    sub_180010EC8(v13);
  return a1;
}
