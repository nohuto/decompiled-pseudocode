/*
 * XREFs of sub_180038ACC @ 0x180038ACC
 * Callers:
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_180054510 @ 0x180054510 (sub_180054510.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180038ACC(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
