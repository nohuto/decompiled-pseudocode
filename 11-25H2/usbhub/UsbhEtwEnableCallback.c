/*
 * XREFs of UsbhEtwEnableCallback @ 0x14002FFB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x14002FFDC (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_14006F690 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_14006F690 = 0;
  }
}
