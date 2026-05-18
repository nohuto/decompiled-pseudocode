/*
 * XREFs of sub_18005A95C @ 0x18005A95C
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005A95C(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
