/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x140D07D28
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiInitializeUltraSpace @ 0x140D07E90 (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 PoolMm; // rbp
  __int64 v4; // rsi
  _SLIST_HEADER *v5; // rbx

  v0 = qword_140E37D60;
  v1 = qword_140E37D68;
  v2 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        (unsigned int)((unsigned __int64)qword_140E37D60 >> 9) & 0xFFFFFFF8,
                        (((unsigned __int64)qword_140E37D60 >> 9) & 0xFFFFFFF8)
                      + 8 * (((unsigned __int64)qword_140E37D68 >> 12) - 1),
                        6,
                        8) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&dword_140E34D28, v0, v1) )
    return 0LL;
  qword_140E34D78 = ((v0 >> 27) & 0x1FFFF8) - 0x90482600000LL;
  qword_140E34D80 = (((v0 + v1 - 1) >> 27) & 0x1FFFF8) - 0x90482600000LL;
  PoolMm = ExAllocatePoolMm(
             72LL,
             (unsigned __int64)(unsigned __int16)KeNumberNodes << 9,
             1851091277,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  if ( KeNumberNodes )
  {
    do
    {
      v4 = 8LL;
      v5 = (_SLIST_HEADER *)(PoolMm + ((unsigned __int64)v2 << 9));
      do
      {
        InitializeSListHead(v5);
        v5 += 4;
        --v4;
      }
      while ( v4 );
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  qword_140E34D70 = PoolMm;
  return 1LL;
}
