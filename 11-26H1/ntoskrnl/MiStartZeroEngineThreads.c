/*
 * XREFs of MiStartZeroEngineThreads @ 0x140B276E4
 * Callers:
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 *     MiZeroBootCalibratorStarted @ 0x14070EDD8 (MiZeroBootCalibratorStarted.c)
 *     MiCreateZeroThreadContext @ 0x140773624 (MiCreateZeroThreadContext.c)
 */

__int64 __fastcall MiStartZeroEngineThreads(__int64 a1)
{
  __int64 v1; // rsi
  _BYTE *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rbp
  _QWORD *ZeroThreadContext; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (_BYTE *)(a1 + 269);
  v3 = 1;
  v4 = 3LL;
  do
  {
    while ( *(_DWORD *)(v2 - 33) < *(_DWORD *)(v2 - 29) )
    {
      ZeroThreadContext = (_QWORD *)MiCreateZeroThreadContext((__int64)(v2 - 37));
      if ( !ZeroThreadContext || (int)MiInsertNewZeroThread(ZeroThreadContext) < 0 )
      {
        v3 = 0;
        *v2 = 1;
        break;
      }
    }
    if ( !*(v2 - 3) )
    {
      if ( *(v2 - 4) )
      {
        MiZeroBootCalibratorStarted((__int64)(v2 - 37));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 17336), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v1 + 17344), 0, 0);
      }
    }
    v2 += 504;
    --v4;
  }
  while ( v4 );
  return v3;
}
