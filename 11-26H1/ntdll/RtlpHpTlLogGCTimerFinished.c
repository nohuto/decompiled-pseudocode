/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x180150780
 * Callers:
 *     RtlpHpGCTimerCallback @ 0x180101FC0 (RtlpHpGCTimerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801C4680 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801C4680,
             (unsigned __int8 *)dword_18019AF20,
             a3,
             a4,
             2u,
             &v5);
  return result;
}
