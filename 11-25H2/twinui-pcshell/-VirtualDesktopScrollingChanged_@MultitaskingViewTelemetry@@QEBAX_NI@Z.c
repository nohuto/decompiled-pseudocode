/*
 * XREFs of ?VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z @ 0x1804CC24C
 * Callers:
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804CBC60 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
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
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v5 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    {
      v15 = 0;
      v12 = 0;
      v13 = &v8;
      v14 = 4;
      v10 = &v7;
      v8 = a3;
      v7 = a2;
      v11 = 1;
      tlgWriteTransfer_EventWriteTransfer(v6, byte_1807DB881, 0LL, 0LL, 4u, &v9);
    }
  }
}
