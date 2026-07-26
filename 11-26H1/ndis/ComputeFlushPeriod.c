/*
 * XREFs of ComputeFlushPeriod @ 0x1401520F4
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140152938 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     FinishHash @ 0x1400E8D24 (FinishHash.c)
 *     RunningHash @ 0x1400E9190 (RunningHash.c)
 */

__int64 __fastcall ComputeFlushPeriod(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 344);
  v5 = a1 >> 4;
  v6 = 0;
  v4 = *(_OWORD *)(*(_QWORD *)(v2 + 8) - 16LL);
  RunningHash((int *)&v6, (__int64)&v4, 0x10uLL);
  RunningHash((int *)&v6, (__int64)&v5, 8uLL);
  FinishHash(&v6);
  return v6 % 0xEA60 + 60000;
}
