/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180070714
 * Callers:
 *     RtlpInitializeWnf @ 0x180070624 (RtlpInitializeWnf.c)
 * Callees:
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1801627F0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  __int64 v1; // rdx
  char v3; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v3);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v5, (__int64)RtlpWnfNotificationThread, (int)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v5, (volatile signed __int32 **)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v5 )
      TpReleaseWait(v5, v1);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
