/*
 * XREFs of RtlpHpQueryVA @ 0x180089D98
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18008A7C4 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158414 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158580 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x180089DFC (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_1801C7908, a1, &v7);
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = DWORD2(v8);
  return v7;
}
