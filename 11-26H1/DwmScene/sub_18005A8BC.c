/*
 * XREFs of sub_18005A8BC @ 0x18005A8BC
 * Callers:
 *     sub_1800577E0 @ 0x1800577E0 (sub_1800577E0.c)
 *     sub_180059180 @ 0x180059180 (sub_180059180.c)
 *     sub_180059718 @ 0x180059718 (sub_180059718.c)
 *     sub_18005ABB0 @ 0x18005ABB0 (sub_18005ABB0.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_18008FA84 @ 0x18008FA84 (sub_18008FA84.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

__int64 __fastcall sub_18005A8BC(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = (__int64 *)(a1 + 136);
  result = *v4;
  if ( *a2 != *v4 )
  {
    sub_180011F5C(v4, a2);
    result = sub_18005A910(a1, 4LL);
  }
  v6 = a2[1];
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
