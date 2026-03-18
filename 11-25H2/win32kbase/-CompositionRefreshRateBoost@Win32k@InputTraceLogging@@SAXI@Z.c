/*
 * XREFs of ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x140118408
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x140192D0C (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::CompositionRefreshRateBoost(int a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x200) != 0
    && (qword_14029EE38 & 0x200) == qword_14029EE38 )
  {
    v5 = 0;
    v3 = &v1;
    v1 = a1;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029EE20, byte_140282657, 0LL, 0LL, 3u, &v2);
  }
}
