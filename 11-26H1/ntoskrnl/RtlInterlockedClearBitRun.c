/*
 * XREFs of RtlInterlockedClearBitRun @ 0x140488B20
 * Callers:
 *     EtwpFreeUserBufferSpace @ 0x1408361C8 (EtwpFreeUserBufferSpace.c)
 *     MiLogPinDriverAddressesWorker @ 0x140AB44D0 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInterlockedClearBitRun(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  ULONG v3; // r9d
  __int64 v4; // r11
  volatile signed __int32 *v5; // r10
  ULONG v6; // eax
  unsigned int v7; // eax
  unsigned __int64 v8; // rax

  v3 = NumberToClear;
  v4 = StartingIndex & 0x1F;
  v5 = (volatile signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5];
  if ( v4 + (unsigned __int64)NumberToClear <= 0x20 )
  {
    if ( NumberToClear == 32 )
    {
      *v5 = 0;
      return;
    }
    v7 = ~(((1 << NumberToClear) - 1) << v4);
    goto LABEL_7;
  }
  v6 = StartingIndex & 0x1F;
  if ( (StartingIndex & 0x1F) != 0 )
  {
    _InterlockedAnd(v5, ~(((1 << (32 - v6)) - 1) << v4));
    v3 = NumberToClear - (32 - v6);
    ++v5;
  }
  if ( v3 >= 0x20 )
  {
    v8 = (unsigned __int64)v3 >> 5;
    do
    {
      *v5 = 0;
      v3 -= 32;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  if ( v3 )
  {
    v7 = -1 << v3;
LABEL_7:
    _InterlockedAnd(v5, v7);
  }
}
