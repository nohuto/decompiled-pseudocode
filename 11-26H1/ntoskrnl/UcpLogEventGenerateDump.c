/*
 * XREFs of UcpLogEventGenerateDump @ 0x140712D40
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x140712950 (UcOnUnexpectedCodePath.c)
 *     UcpApcNormalRoutine @ 0x1408800D0 (UcpApcNormalRoutine.c)
 * Callees:
 *     UcpLogUnexpectedCodePathEvent @ 0x140712E1C (UcpLogUnexpectedCodePathEvent.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140712F38 (UcpRetrieveCurrentConfigSettings.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B41E00 (DbgkWerCaptureLiveKernelDump.c)
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
  if ( a1 && WheapPfaLock.Timer.TimerType )
  {
    UcpRetrieveCurrentConfigSettings(a1, &v6, v7);
    result = v6;
    v3 = v7[0];
  }
  if ( WheapPfaLock.Timer.TimerDifObjTracking == 1 && !result )
  {
    result = UcpLogUnexpectedCodePathEvent(a1, *(unsigned int *)(a2 + 16));
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( LOBYTE(WheapPfaLock.Timer.Processor) == 1 && v3 == 1 )
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
