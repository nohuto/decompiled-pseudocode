/*
 * XREFs of ??$DxgkSafeConvertUnicodeToAnsi@$04@@YAXAEAY04$$CBGAEAY04D@Z @ 0x140191638
 * Callers:
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1403E1C6C (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkSafeConvertUnicodeToAnsi<5>(PCWSTR SourceString, PCSZ a2)
{
  struct _STRING v4; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v4 = 0LL;
  RtlInitAnsiString(&v4, a2);
  v4.MaximumLength = 5;
  return RtlUnicodeStringToAnsiString(&v4, &DestinationString, 0);
}
