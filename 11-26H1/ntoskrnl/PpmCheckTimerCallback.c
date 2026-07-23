/*
 * XREFs of PpmCheckTimerCallback @ 0x14060D250
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140463F90 (PpmExecutePeriodicPerfCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmCheckTimerCallback()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07560 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004D798, 0LL, 0LL, 2u, &v0);
  PpmExecutePeriodicPerfCheck();
}
