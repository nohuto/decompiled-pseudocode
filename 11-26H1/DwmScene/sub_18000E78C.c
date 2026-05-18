/*
 * XREFs of sub_18000E78C @ 0x18000E78C
 * Callers:
 *     sub_18000E680 @ 0x18000E680 (sub_18000E680.c)
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000E78C(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
