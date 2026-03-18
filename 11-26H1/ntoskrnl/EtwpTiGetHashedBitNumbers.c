/*
 * XREFs of EtwpTiGetHashedBitNumbers @ 0x140258F34
 * Callers:
 *     EtwpTiClearBloomFilter @ 0x140258A40 (EtwpTiClearBloomFilter.c)
 *     EtwpTiTestBloomFilter @ 0x140258C94 (EtwpTiTestBloomFilter.c)
 *     EtwpTiAddBloomFilter @ 0x140258EA8 (EtwpTiAddBloomFilter.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpTiGetHashedBitNumbers(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 IptSaveArea_low; // r10
  unsigned int v4; // eax
  unsigned __int64 result; // rax

  IptSaveArea_low = LODWORD(ExpSysDbgLock.IptSaveArea);
  v4 = HIBYTE(a3)
     + 37 * (BYTE6(a3) + 37 * (BYTE5(a3) + 37 * (BYTE4(a3) + 37 * (BYTE3(a3) + 37 * (BYTE2(a3) + 37 * BYTE1(a3))))))
     + 442596621 * (unsigned __int8)a3
     - 803794207 * LODWORD(ExpSysDbgLock.SchedulerSharedSwappablePage);
  *a1 = v4 % LODWORD(ExpSysDbgLock.IptSaveArea);
  a1[1] = HIWORD(v4) % (unsigned int)IptSaveArea_low;
  result = a3 / IptSaveArea_low;
  a1[2] = a3 % IptSaveArea_low;
  return result;
}
