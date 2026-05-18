/*
 * XREFs of sub_180075A8C @ 0x180075A8C
 * Callers:
 *     sub_180075670 @ 0x180075670 (sub_180075670.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180075A8C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_180010EC8(v3);
  }
  return sub_1800759BC(a1);
}
