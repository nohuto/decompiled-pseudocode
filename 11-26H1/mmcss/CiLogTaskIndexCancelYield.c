/*
 * XREFs of CiLogTaskIndexCancelYield @ 0x140004578
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1400025B0 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexCancelYield(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&v2.Size = 4LL;
  v2.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexYieldCancelEvent, 0LL, 1u, &v2);
}
