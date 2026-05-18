/*
 * XREFs of sub_1800CAE30 @ 0x1800CAE30
 * Callers:
 *     sub_1800CC2D0 @ 0x1800CC2D0 (sub_1800CC2D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CAE30(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+80h] [rbp-48h] BYREF

  v8 = *a2;
  v9 = sub_18002912C(*(_QWORD *)a1, v14);
  v10 = sub_18001C87C((__int64)v13, (__int64)v9, (__int64)"Texture");
  sub_1800292C4(v8, v10);
  sub_1800129D0((__int64)v14);
  result = sub_180053894(
             *a2,
             **(_DWORD **)(a1 + 8),
             **(_DWORD **)(a1 + 16),
             0,
             a3,
             0,
             **(_DWORD **)(a1 + 24) | a4,
             0LL,
             0,
             **(_QWORD **)(a1 + 32));
  v12 = a2[1];
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
