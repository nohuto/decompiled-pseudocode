/*
 * XREFs of MiStartZeroEngineThreads @ 0x140B29FA4
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiInsertNewZeroThread @ 0x14050FC38 (MiInsertNewZeroThread.c)
 *     MiZeroBootCalibratorStarted @ 0x140713AD8 (MiZeroBootCalibratorStarted.c)
 *     MiCreateZeroThreadContext @ 0x140776624 (MiCreateZeroThreadContext.c)
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
