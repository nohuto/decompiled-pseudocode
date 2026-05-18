/*
 * XREFs of sub_180043070 @ 0x180043070
 * Callers:
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_18005DA8C @ 0x18005DA8C (sub_18005DA8C.c)
 *     sub_18007C390 @ 0x18007C390 (sub_18007C390.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180043070(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v4 = a1 + 17;
  sub_180013540(a1 + 17, a2);
  sub_180012C40(&v10, (_QWORD *)(*a2 + 128LL));
  v5 = (__int64 *)sub_18007C390(v10, &v12);
  sub_180011F5C(a1 + 15, v5);
  if ( v13 )
    sub_180010EC8(v13);
  v6 = (_QWORD *)sub_18005DA8C(*v4, &v12);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v6 + 16LL))(*v6, a1);
  if ( v13 )
    sub_180010EC8(v13);
  v7 = (_QWORD *)sub_180012BF8((__int64)(a1 + 12), &v12);
  result = (__int64)sub_18002A0A4(a1 + 27, v7);
  if ( v13 )
    result = sub_180010EC8(v13);
  if ( v11 )
    result = sub_180010EC8(v11);
  v9 = a2[1];
  if ( v9 )
    return sub_180010EC8(v9);
  return result;
}
