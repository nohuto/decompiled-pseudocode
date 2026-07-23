/*
 * XREFs of UcpLogEventGenerateDump @ 0x140717A38
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x140717648 (UcOnUnexpectedCodePath.c)
 *     UcpApcNormalRoutine @ 0x1408864D0 (UcpApcNormalRoutine.c)
 * Callees:
 *     UcpLogUnexpectedCodePathEvent @ 0x140717B14 (UcpLogUnexpectedCodePathEvent.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140717C30 (UcpRetrieveCurrentConfigSettings.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

unsigned __int8 __fastcall UcpLogEventGenerateDump(_DWORD *a1, __int64 a2)
{
  unsigned __int8 result; // al
  char v3; // di
  unsigned __int8 v6; // [rsp+50h] [rbp-18h] BYREF
  _BYTE v7[15]; // [rsp+51h] [rbp-17h] BYREF

  result = 0;
  v3 = 0;
  v6 = 0;
  v7[0] = 0;
  if ( a1 && WheapPfaLock.WaitBlockFill6[96] )
  {
    UcpRetrieveCurrentConfigSettings(a1, &v6, v7);
    result = v6;
    v3 = v7[0];
  }
  if ( WheapPfaLock.WaitBlockFill6[81] == 1 && !result )
  {
    result = UcpLogUnexpectedCodePathEvent(a1, *(unsigned int *)(a2 + 16));
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( WheapPfaLock.WaitBlockFill6[80] == 1 && v3 == 1 )
  {
    result = KeGetCurrentIrql();
    if ( !result )
      return DbgkWerCaptureLiveKernelDump(
               (unsigned int)L"UnexpectedCP",
               514,
               *a1,
               a1[1],
               (unsigned int)a1[2],
               0LL,
               0LL,
               0LL,
               0);
  }
  return result;
}
