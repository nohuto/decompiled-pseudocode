/*
 * XREFs of sub_1800BD230 @ 0x1800BD230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD230(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_180029EF8(a1 + 24, (__int64)a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_180026F00(a1, a2);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
