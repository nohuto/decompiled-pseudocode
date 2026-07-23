/*
 * XREFs of CmFcpManagerArmFeatureUsageRetryTimer @ 0x1406E6F60
 * Callers:
 *     CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0 (CmFcpManagerDrainUsageNotifications.c)
 * Callees:
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageRetryTimer(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_BYTE *)(a1 + 409) )
  {
    v2 = *(_QWORD *)(a1 + 560);
    v4[0] = 0LL;
    v4[1] = -1LL;
    result = ExSetTimer(v2, -600000000LL, 0LL, (ULONG_PTR)v4);
    *(_BYTE *)(a1 + 409) = 1;
  }
  return result;
}
