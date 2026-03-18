/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x14012936C
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x140129674 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1401296B4 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools(
        DirectComposition::CBatchSharedMemoryPool **this)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  while ( 1 )
  {
    v2 = *this;
    if ( *this == (DirectComposition::CBatchSharedMemoryPool *)this )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*this);
    if ( v2 )
    {
      DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(v2);
      GreDeleteFastMutex((char *)v2, v3, v4, v5);
    }
  }
}
