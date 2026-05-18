/*
 * XREFs of sub_1800DE494 @ 0x1800DE494
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005CDEC @ 0x18005CDEC (sub_18005CDEC.c)
 */

__int64 __fastcall sub_1800DE494(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_18005CDEC();
  }
  return result;
}
