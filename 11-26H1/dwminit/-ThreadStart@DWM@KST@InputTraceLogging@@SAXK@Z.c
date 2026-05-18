/*
 * XREFs of ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180010BC4
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x180010720 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001350 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001035C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::KST::DWM::ThreadStart(int a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-18h]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 2) != 0 && (*((_QWORD *)v2 + 3) & 2LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = a1;
    v5 = &v3;
    v6 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, byte_180015B84, 0LL, 0LL, 3u, &v4);
  }
}
