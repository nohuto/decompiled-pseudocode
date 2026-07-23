/*
 * XREFs of MiCheckLogPinDriverAddresses @ 0x1402A5F6C
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void MiCheckLogPinDriverAddresses()
{
  bool v0; // al
  unsigned int j; // r8d
  unsigned int k; // r9d
  unsigned int m; // r10d
  __int64 v4; // rcx
  unsigned int *Buffer; // rcx
  unsigned int v6; // r9d
  unsigned int *v7; // r10
  bool i; // zf
  int v9; // edx
  bool v10; // zf

  if ( !stru_140E366D8.FirstArgument )
    return;
  if ( !BitMapHeader.SizeOfBitMap )
    goto LABEL_25;
  if ( BitMapHeader.SizeOfBitMap > 1 )
  {
    Buffer = BitMapHeader.Buffer;
    v6 = *BitMapHeader.Buffer;
    v7 = &BitMapHeader.Buffer[(unsigned __int64)(BitMapHeader.SizeOfBitMap - 1) >> 5];
    if ( BitMapHeader.Buffer != v7 )
    {
      for ( i = v6 == 0; i; i = v9 == 0 )
      {
        v9 = *++Buffer;
        if ( Buffer == v7 )
        {
          v10 = ((0xFFFFFFFF >> ~(LOBYTE(BitMapHeader.SizeOfBitMap) - 1)) & v9) == 0;
          goto LABEL_22;
        }
      }
      goto LABEL_25;
    }
    v10 = ((0xFFFFFFFF >> (32 - LOBYTE(BitMapHeader.SizeOfBitMap))) & v6) == 0;
LABEL_22:
    v0 = v10;
  }
  else
  {
    if ( BitMapHeader.SizeOfBitMap != 1 )
      goto LABEL_25;
    v0 = !_bittest((const signed __int32 *)BitMapHeader.Buffer, 0);
  }
  if ( !v0 )
  {
LABEL_25:
    if ( !_InterlockedCompareExchange16(&word_140EF8F70, 1, 0) )
    {
      stru_140EF8F50.Parameter = 0LL;
      stru_140EF8F50.WorkerRoutine = (void (__fastcall *)(void *))MiLogPinDriverAddressesWorker;
      stru_140EF8F50.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140EF8F50, DelayedWorkQueue);
    }
    return;
  }
  for ( j = 0; j < 2; ++j )
  {
    for ( k = 0; k < 2; ++k )
    {
      for ( m = 0; m < 2; ++m )
      {
        v4 = m + 2 * (k + 2LL * j);
        if ( LODWORD(MiPinDriverAddressLog[v4 + 2082]) != HIDWORD(MiPinDriverAddressLog[v4 + 2082]) )
          goto LABEL_25;
      }
    }
  }
}
