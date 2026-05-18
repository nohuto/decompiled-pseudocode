/*
 * XREFs of sub_18005CCD0 @ 0x18005CCD0
 * Callers:
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_1800DC054 @ 0x1800DC054 (sub_1800DC054.c)
 * Callees:
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 */

__int64 __fastcall sub_18005CCD0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18004C0E0(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
