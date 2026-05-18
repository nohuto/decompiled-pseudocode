/*
 * XREFs of sub_1800B9624 @ 0x1800B9624
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B9624(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, _QWORD, __int64, const char *, const char *, int); // rdi
  _QWORD *v11; // rax
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = a6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1) )
  {
    v8 = sub_1800148EC(a6);
    v9 = *a1;
    v10 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, const char *, const char *, int))(*(_QWORD *)*a1 + 40LL);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[2] + 8LL))(a1[2], v13);
    v10(
      v9,
      a5,
      *v11,
      v8,
      "InitializeRenderer",
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\rendererd3d11.cpp",
      a3);
  }
  return sub_1800129D0(a6);
}
