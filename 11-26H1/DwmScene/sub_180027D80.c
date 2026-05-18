/*
 * XREFs of sub_180027D80 @ 0x180027D80
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_180027D80(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF

  sub_180029310(a1, 1LL, 0LL);
  sub_180029310(v5, (unsigned int)(v4 + 2), v4);
  sub_180012C40(&v14, (_QWORD *)(*a2 + 112LL));
  v6 = v14 != 0 ? 0x80 : 0;
  if ( v15 )
    sub_180010EC8(v15);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_180027EC8(a1, v9, v8, v7, v6, 0LL);
  sub_180012C40(&v14, (_QWORD *)(*a2 + 96LL));
  sub_1800534C8(v10, &v14);
  if ( *(_QWORD *)(a1 + 152) )
  {
    sub_180012C40(&v14, (_QWORD *)(*a2 + 112LL));
    sub_1800534C8(v11, &v14);
  }
  v16 = *(_DWORD *)(*a2 + 88LL);
  v12 = sub_1800277FC((__int64 *)(a1 + 120), (__int64)&v14, &v16);
  return sub_180013540((__int64 *)(*(_QWORD *)v12 + 40LL), a2);
}
