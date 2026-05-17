/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x1801508D0
 * Callers:
 *     RtlpHpGCTimerCallback @ 0x1800924E0 (RtlpHpGCTimerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801C5680 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801C5680, byte_18019BF08, a3, a4, 2, (__int64)v5);
  return result;
}
