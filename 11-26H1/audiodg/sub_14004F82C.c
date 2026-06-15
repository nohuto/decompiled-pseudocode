/*
 * XREFs of sub_14004F82C @ 0x14004F82C
 * Callers:
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_14004EC80 @ 0x14004EC80 (sub_14004EC80.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 * Callees:
 *     sub_14004DADC @ 0x14004DADC (sub_14004DADC.c)
 */

_QWORD *__fastcall sub_14004F82C(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rbx
  DWORD v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
  {
    v2 = 0LL;
  }
  else if ( (v4 & 0xFFFFFF7F) != 0 )
  {
    sub_14004DADC(retaddr, 3562LL, v5, v6);
  }
  *a2 = v2;
  return a2;
}
