/*
 * XREFs of sub_1800BD130 @ 0x1800BD130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800BBF84 @ 0x1800BBF84 (sub_1800BBF84.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800BD130(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v4[2]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v5[80]; // [rsp+30h] [rbp-158h] BYREF

  memset(v5, 0, 0x138uLL);
  v2 = sub_1800BBF84(a1, v4);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v2 + 80LL))(*v2, v5);
  sub_18000F938(v4);
  return (v5[76] & 2) == 0;
}
