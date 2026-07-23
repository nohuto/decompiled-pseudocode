/*
 * XREFs of EtwpTiGetHashedBitNumbers @ 0x14025A714
 * Callers:
 *     EtwpTiClearBloomFilter @ 0x14025A220 (EtwpTiClearBloomFilter.c)
 *     EtwpTiTestBloomFilter @ 0x14025A474 (EtwpTiTestBloomFilter.c)
 *     EtwpTiAddBloomFilter @ 0x14025A688 (EtwpTiAddBloomFilter.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpTiGetHashedBitNumbers(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 SchedulerAssistLastYieldBoostTime_low; // r10
  unsigned int v4; // eax
  unsigned __int64 result; // rax

  SchedulerAssistLastYieldBoostTime_low = LODWORD(ExpSysDbgLock.SchedulerAssistLastYieldBoostTime);
  v4 = HIBYTE(a3)
     + 37 * (BYTE6(a3) + 37 * (BYTE5(a3) + 37 * (BYTE4(a3) + 37 * (BYTE3(a3) + 37 * (BYTE2(a3) + 37 * BYTE1(a3))))))
     + 442596621 * (unsigned __int8)a3
     - 803794207 * LODWORD(ExpSysDbgLock.Padding[1]);
  *a1 = v4 % LODWORD(ExpSysDbgLock.SchedulerAssistLastYieldBoostTime);
  a1[1] = HIWORD(v4) % (unsigned int)SchedulerAssistLastYieldBoostTime_low;
  result = a3 / SchedulerAssistLastYieldBoostTime_low;
  a1[2] = a3 % SchedulerAssistLastYieldBoostTime_low;
  return result;
}
