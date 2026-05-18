/*
 * XREFs of sub_180010F68 @ 0x180010F68
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 * Callees:
 *     sub_18000EC94 @ 0x18000EC94 (sub_18000EC94.c)
 */

_QWORD *__fastcall sub_180010F68(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rbx
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
  {
    v2 = 0LL;
  }
  else if ( (v4 & 0xFFFFFF7F) != 0 )
  {
    sub_18000EC94(retaddr, v5, v6, v7);
  }
  *a2 = v2;
  return a2;
}
