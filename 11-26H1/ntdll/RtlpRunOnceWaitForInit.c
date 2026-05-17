/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x180070048
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     RtlRandomEx @ 0x18006EC80 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18006FA5C (LdrpEnableUMGLTracingStateSync.c)
 * Callees:
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  signed __int64 v3; // rax
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  v5[2] = 0LL;
  v6 = 0LL;
  v5[3] = NtCurrentTeb()->ClientId.UniqueThread;
  do
  {
    v5[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v3 = _InterlockedCompareExchange64(a2, (signed __int64)v5 + 1, a1);
    if ( a1 == v3 )
      break;
    a1 = v3;
  }
  while ( (v3 & 3) == 1 );
  if ( (a1 & 3) == 1 )
  {
    do
    {
      NtWaitForAlertByThreadId(a2, 0LL);
      a1 = *a2;
    }
    while ( (BYTE4(v6) & 4) == 0 );
  }
  return a1;
}
