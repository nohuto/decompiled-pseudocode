/*
 * XREFs of sub_1800160E4 @ 0x1800160E4
 * Callers:
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_180025258 @ 0x180025258 (sub_180025258.c)
 *     sub_180042B80 @ 0x180042B80 (sub_180042B80.c)
 *     sub_18005ABFC @ 0x18005ABFC (sub_18005ABFC.c)
 *     sub_1800BF218 @ 0x1800BF218 (sub_1800BF218.c)
 *     sub_1800C5318 @ 0x1800C5318 (sub_1800C5318.c)
 *     sub_1800C54F0 @ 0x1800C54F0 (sub_1800C54F0.c)
 *     sub_1800C56C0 @ 0x1800C56C0 (sub_1800C56C0.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800160E4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
