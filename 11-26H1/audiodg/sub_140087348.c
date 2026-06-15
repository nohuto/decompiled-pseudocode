/*
 * XREFs of sub_140087348 @ 0x140087348
 * Callers:
 *     sub_1400B3EA8 @ 0x1400B3EA8 (sub_1400B3EA8.c)
 * Callees:
 *     sub_1400888A0 @ 0x1400888A0 (sub_1400888A0.c)
 */

__int64 __fastcall sub_140087348(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_1400888A0(result, a2);
  }
  return result;
}
