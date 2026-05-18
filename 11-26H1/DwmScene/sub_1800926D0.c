/*
 * XREFs of sub_1800926D0 @ 0x1800926D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_180078B44 @ 0x180078B44 (sub_180078B44.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800926D0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r15
  _DWORD *i; // rbx
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h]
  _QWORD v18[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v19[32]; // [rsp+70h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64 *, _BYTE *))(*a1 + 184))(a1, v19);
  v6 = sub_18004232C((__int64)(a1 + 1), &v15);
  v7 = sub_1800181BC(v18, (__int64)v19);
  v8 = sub_18004DE74(a2, &v16, (__int64)v7, v6);
  v9 = a1 + 7;
  sub_180011F5C(a1 + 7, v8);
  if ( v17 )
    sub_180010EC8(v17);
  v10 = *v9;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*a1 + 176))(a1, v18);
  sub_180078B44(v10, v11);
  sub_1800187D4((__int64 *)(*v9 + 528), (__int64)a3);
  (*(void (__fastcall **)(__int64 *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  v12 = (_DWORD *)a3[1];
  for ( i = (_DWORD *)*a3; i != v12; ++i )
  {
    *(_DWORD *)(*v9 + 552) = *i;
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 152))(a1, a2);
    *(_DWORD *)(*v9 + 552) = 0;
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 144))(a1, a2);
  sub_18005D8B8(*v9);
  return sub_1800129D0((__int64)v19);
}
