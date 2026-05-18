/*
 * XREFs of sub_180034DB0 @ 0x180034DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180034DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
    return sub_180010EC8(v2);
  return result;
}
