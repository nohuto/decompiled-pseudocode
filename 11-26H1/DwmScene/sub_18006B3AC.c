/*
 * XREFs of sub_18006B3AC @ 0x18006B3AC
 * Callers:
 *     sub_1800BFAC0 @ 0x1800BFAC0 (sub_1800BFAC0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006B3AC(__int64 *a1, _QWORD *a2, int a3)
{
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 *result; // rax
  __int64 v14; // rcx

  sub_180029310((__int64)a1, 1, 0);
  sub_180029310(v7, v6 + 2, v6);
  sub_180029310(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18006B170(a1, v12, v11, v10, a3, 0LL);
  result = sub_18006AD9C(a1, a2);
  v14 = a2[1];
  if ( v14 )
    return (__int64 *)sub_180010EC8(v14);
  return result;
}
