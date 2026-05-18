/*
 * XREFs of sub_180011BB8 @ 0x180011BB8
 * Callers:
 *     sub_180011B74 @ 0x180011B74 (sub_180011B74.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_18005BD60 @ 0x18005BD60 (sub_18005BD60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011BB8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  *a3 = 0LL;
  a3[1] = 0LL;
  return result;
}
