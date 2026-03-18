/*
 * XREFs of CiLogControlCallback @ 0x14000D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CiLogControlCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    RegHandle = CiLoggerContext;
    byte_14000A0F0 = 1;
  }
  else
  {
    RegHandle = 0LL;
    byte_14000A0F0 = 0;
  }
}
