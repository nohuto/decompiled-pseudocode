/*
 * XREFs of ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x1801395A4
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180138840 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(const void *a1, char a2)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-68h] BYREF
  const void *v7; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  const void **v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  char *v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    v6 = a2;
    v11 = &v6;
    v7 = a1;
    v9 = &v7;
    v12 = 1LL;
    v10 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v5, byte_180220D52, 0LL, 0LL, 4u, &v8);
  }
}
