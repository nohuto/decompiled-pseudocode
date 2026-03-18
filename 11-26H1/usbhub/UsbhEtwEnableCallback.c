/*
 * XREFs of UsbhEtwEnableCallback @ 0x140028150
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1400706F0 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1400706F0 = 0;
  }
}
