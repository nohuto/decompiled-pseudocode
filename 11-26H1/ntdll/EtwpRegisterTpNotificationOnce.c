/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x1800700DC
 * Callers:
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 * Callees:
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  char v1; // [rsp+20h] [rbp-30h]
  int v2; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h] BYREF
  int v5; // [rsp+78h] [rbp+28h] BYREF

  v2 = 0;
  v5 = 0;
  v4 = 0LL;
  Handle = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v4, (__int64)EtwpNotificationThread, (int)Handle, 0LL) >= 0 )
    {
      TpSetWaitEx(v4, (volatile signed __int32 **)Handle, 0LL, 0LL);
      v5 = (int)Handle;
      if ( (int)NtTraceControl(27LL, &v5, 4LL, 0LL, 0, &v2) >= 0 )
        return 1LL;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
