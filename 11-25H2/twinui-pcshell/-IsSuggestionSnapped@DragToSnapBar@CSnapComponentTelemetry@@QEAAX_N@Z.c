/*
 * XREFs of ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18057C610
 * Callers:
 *     ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18057DB60 (-SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV-$com_ptr_t@UIAp.c)
 *     ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x18057DC5C (-SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRE.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall CSnapComponentTelemetry::DragToSnapBar::IsSuggestionSnapped(
        CSnapComponentTelemetry::DragToSnapBar *this,
        char a2)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  char *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    {
      v6 = *((_QWORD *)this + 34);
      v15 = 0;
      v12 = 0;
      v13 = &v7;
      v7 = a2;
      v10 = &v8;
      v8 = 0x2000000LL;
      v14 = 1;
      v11 = 8;
      tlgWriteTransfer_EventWriteTransfer(v5, byte_1807E6518, (const GUID *)(v6 + 8), 0LL, 4u, &v9);
    }
  }
}
