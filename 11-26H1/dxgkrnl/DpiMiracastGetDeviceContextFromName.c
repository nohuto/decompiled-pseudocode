/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x140192584
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x140089744 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x14024D658 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x14006DC28 (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  AcquireMiniportListMutex();
  for ( i = qword_140169280; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_140169280 )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( !RtlCompareUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 160), 1u) )
      break;
  }
  DpiMiracastAddRefMiracastDeviceContext(i, i);
LABEL_6:
  ReleaseMiniportListMutex();
  return i;
}
