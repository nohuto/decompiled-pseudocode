/*
 * XREFs of PpmCheckTimerCallback @ 0x14060A690
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14046A810 (PpmExecutePeriodicPerfCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PpmCheckTimerCallback()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07598 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)&byte_14004D12F, 0LL, 0LL, 2u, &v0);
  PpmExecutePeriodicPerfCheck();
}
