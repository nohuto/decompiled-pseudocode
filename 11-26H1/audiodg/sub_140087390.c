/*
 * XREFs of sub_140087390 @ 0x140087390
 * Callers:
 *     sub_1400874F8 @ 0x1400874F8 (sub_1400874F8.c)
 * Callees:
 *     sub_1400888A0 @ 0x1400888A0 (sub_1400888A0.c)
 */

__int64 __fastcall sub_140087390(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return sub_1400888A0(v2, a2);
  return result;
}
