/*
 * XREFs of sub_180033C00 @ 0x180033C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_180033D9C @ 0x180033D9C (sub_180033D9C.c)
 *     sub_1800381FC @ 0x1800381FC (sub_1800381FC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180033C00(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _QWORD *v3; // rdi
  __int64 *v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  const void *v12; // rax
  __int64 v13; // rdx
  const void *v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-28h]
  _QWORD *v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD *);
  v3 = v19;
  if ( !*v19 )
  {
    v7 = (__int64 *)sub_180033D9C(a1, &v17);
    sub_180011F5C(v3, v7);
    if ( v18 )
      sub_180010EC8((__int64)v18);
  }
  sub_1800162D0(&v17, v3);
  v8 = *(_QWORD *)sub_1800381FC(a1 + 728, (_QWORD **)va, &v17);
  if ( v18 )
    sub_180010F00(v18);
  v9 = *(_QWORD **)(v8 + 48);
  v10 = *(_QWORD **)(v8 + 56);
  while ( v9 != v10 )
  {
    sub_1800148EC(a3);
    v12 = (const void *)sub_1800148EC(v11 + 24);
    if ( sub_18001CFB0(v12, *(_QWORD *)(v13 + 40), v14, *(_QWORD *)(a3 + 16)) )
    {
      sub_180012C40(a2, v9);
      goto LABEL_12;
    }
    v9 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_12:
  v15 = v3[1];
  if ( v15 )
    sub_180010EC8(v15);
  return a2;
}
