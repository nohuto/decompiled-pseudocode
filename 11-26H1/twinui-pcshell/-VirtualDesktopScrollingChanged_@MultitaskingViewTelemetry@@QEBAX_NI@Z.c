/*
 * XREFs of ?VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z @ 0x1804DE3EC
 * Callers:
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804DDDF0 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall MultitaskingViewTelemetry::VirtualDesktopScrollingChanged_(
        MultitaskingViewTelemetry *this,
        char a2,
        int a3)
{
  const struct _tlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  char *v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  int *v12; // [rsp+70h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp-20h]

  v5 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    {
      v8 = a3;
      v13 = 4LL;
      v12 = &v8;
      v7 = a2;
      v10 = &v7;
      v11 = 1LL;
      tlgWriteTransfer_EventWriteTransfer(v6, byte_180812E95, 0LL, 0LL, 4u, &v9);
    }
  }
}
