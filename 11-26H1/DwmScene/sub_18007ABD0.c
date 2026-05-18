/*
 * XREFs of sub_18007ABD0 @ 0x18007ABD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007AC3C @ 0x18007AC3C (sub_18007AC3C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18007ABD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_18007AC3C();
  result = *a4;
  if ( (*(_DWORD *)(*a4 + 440) & 0x10000) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, a2, a3, a4);
  return result;
}
