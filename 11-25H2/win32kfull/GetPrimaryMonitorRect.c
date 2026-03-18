/*
 * XREFs of GetPrimaryMonitorRect @ 0x1402193C8
 * Callers:
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 */

__int64 __fastcall GetPrimaryMonitorRect(__int64 a1)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 104));
  return a1;
}
