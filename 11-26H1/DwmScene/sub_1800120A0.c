/*
 * XREFs of sub_1800120A0 @ 0x1800120A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BFAC0 @ 0x1800BFAC0 (sub_1800BFAC0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800120A0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_1800BFAC0(a1);
  return result;
}
