/*
 * XREFs of sub_180032460 @ 0x180032460
 * Callers:
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 *     sub_18003970C @ 0x18003970C (sub_18003970C.c)
 *     sub_18003984C @ 0x18003984C (sub_18003984C.c)
 *     sub_180039C48 @ 0x180039C48 (sub_180039C48.c)
 *     sub_180039D58 @ 0x180039D58 (sub_180039D58.c)
 *     sub_18003A8EC @ 0x18003A8EC (sub_18003A8EC.c)
 *     sub_18003C6A8 @ 0x18003C6A8 (sub_18003C6A8.c)
 *     sub_1800552D0 @ 0x1800552D0 (sub_1800552D0.c)
 *     sub_18005C470 @ 0x18005C470 (sub_18005C470.c)
 *     sub_18005CC70 @ 0x18005CC70 (sub_18005CC70.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180032460(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180010EC8(v2);
  return a1;
}
