/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1407F1580
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1407EC33C (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a2 == 2 )
    TtmiSessionsRundown(a1, a2, a3);
}
