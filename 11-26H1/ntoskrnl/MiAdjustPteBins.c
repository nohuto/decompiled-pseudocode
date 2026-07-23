/*
 * XREFs of MiAdjustPteBins @ 0x1402A51F0
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x1402A3838 (MiAttemptCoalesce.c)
 *     MiPteBinsNeedTrimming @ 0x1402A52F0 (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x140360F30 (MiEmptyPteBins.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v0 = 5LL;
  v8[0] = &stru_140E366D8.WaitBlockList;
  v1 = v8;
  v2 = 5LL;
  v8[1] = &unk_140E34C20;
  v8[2] = &unk_140E34C80;
  v8[3] = &unk_140E34BC0;
  v8[4] = &unk_140E34B60;
  do
  {
    v3 = *v1;
    MiEmptyPteBins(*v1, -1LL, 0LL);
    if ( (unsigned int)MiPteBinsNeedTrimming(v3) )
      MiEmptyPteBins(v3, -1LL, 1LL);
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_140E34CE6 + 1;
  byte_140E34CE6 = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = v8;
    do
    {
      v4 = *(_QWORD *)(*v5 + 56);
      v6 = *(_QWORD *)(*v5 + 88);
      if ( v6 > 0x200000 )
      {
        v4 >>= 2;
        if ( v6 > v4 )
          LOBYTE(v4) = MiAttemptCoalesce(*v5, *(_QWORD *)(*v5 + 72), *(_QWORD *)*v5 - *(_QWORD *)(*v5 + 72));
      }
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
