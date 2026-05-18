/*
 * XREFs of sub_18005C418 @ 0x18005C418
 * Callers:
 *     sub_18005C374 @ 0x18005C374 (sub_18005C374.c)
 *     sub_18005C418 @ 0x18005C418 (sub_18005C418.c)
 *     sub_18005CC48 @ 0x18005CC48 (sub_18005CC48.c)
 *     sub_18005E3D0 @ 0x18005E3D0 (sub_18005E3D0.c)
 * Callees:
 *     sub_18005C418 @ 0x18005C418 (sub_18005C418.c)
 *     sub_18005C4C0 @ 0x18005C4C0 (sub_18005C4C0.c)
 */

__int64 __fastcall sub_18005C418(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18005C4C0(v7, v6) )
  {
    sub_18005C418(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
