/*
 * XREFs of sub_1800C9B50 @ 0x1800C9B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_1800C92B0 @ 0x1800C92B0 (sub_1800C92B0.c)
 *     sub_1800C9334 @ 0x1800C9334 (sub_1800C9334.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C9B50(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  unsigned int v7; // ebx
  const char *v8; // rax
  const char *v9; // rsi
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, void *, _QWORD, const char *); // r14
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[352]; // [rsp+90h] [rbp-70h] BYREF

  sub_1800143C0((__int64)v16);
  v6 = *(_DWORD *)(a1 + 96);
  v7 = 0;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_1800C9978(&v13, (__int64 *)(a1 + 112));
      sub_1800C9334(a1, a2, v13, (v14[0] - v13) >> 5, a3);
      sub_18001874C((__int64)v16, (__int64)v15);
      sub_1800C92B0((__int64)&v13);
    }
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    sub_1800C94A0((unsigned int *)&v13, *(_QWORD *)(a1 + 104), (__int64)v17);
    sub_1800C9334(a1, a2, (__int64)v17, v13, a3);
    sub_18001874C((__int64)v16, (__int64)v14);
    sub_1800129D0((__int64)v14);
  }
  v8 = (const char *)sub_1800148EC((__int64)v16);
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
  {
    v11 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v10 + 40LL);
    if ( v8 )
      v7 = strnlen(v8, 0x7FFFFFFFuLL);
    v11(v10, &unk_1800F9CC8, v7, v9);
  }
  return sub_1800129D0((__int64)v16);
}
