/*
 * XREFs of ?CreateNewActivityId@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x140047490
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046FBC (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14007880C (-SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall RAPID_HPD_MANAGER::CreateNewActivityId(RAPID_HPD_MANAGER *this)
{
  if ( ExUuidCreate((UUID *)((char *)this + 36)) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 35;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create new activity ID, hack to just increment current Id to make new",
      35LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ++*((_BYTE *)this + 44);
  }
}
