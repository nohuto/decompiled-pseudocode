/*
 * XREFs of ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400AFBE0
 * Callers:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400B0E30 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400B0EA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400AE3A8 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  struct DirectComposition::CBatchSharedMemoryPool *v4; // r10
  unsigned __int64 v5; // rdi
  int v6; // r11d
  unsigned __int64 v11; // rcx
  DirectComposition::CBatchSharedMemoryPoolSet *v12; // rax
  __int64 v13; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v14; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(struct DirectComposition::CBatchSharedMemoryPool **)this;
  v5 = 0LL;
  v6 = 0;
  v16 = 0LL;
  while ( v4 != this )
  {
    if ( !*((_BYTE *)v4 + 64) )
    {
      v11 = *((_QWORD *)v4 + 5);
      if ( a2 <= 4096 - v11 )
      {
        *((_BYTE *)v4 + 64) = 1;
        v5 = v11;
        v12 = (DirectComposition::CBatchSharedMemoryPoolSet *)*((_QWORD *)v4 + 1);
        if ( v12 != this )
        {
          v13 = *(_QWORD *)v4;
          if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v4 + 8LL) == v4
            && *(struct DirectComposition::CBatchSharedMemoryPool **)v12 == v4 )
          {
            *(_QWORD *)v12 = v13;
            *(_QWORD *)(v13 + 8) = v12;
            goto LABEL_10;
          }
          goto LABEL_11;
        }
LABEL_13:
        *a3 = v4;
        *a4 = v5;
        return (unsigned int)v6;
      }
    }
    v4 = *(struct DirectComposition::CBatchSharedMemoryPool **)v4;
  }
  v6 = DirectComposition::CBatchSharedMemoryPool::Create(this, *((_BYTE *)this + 24), &v16);
  if ( v6 >= 0 )
  {
    v4 = v16;
    if ( !*((_BYTE *)v16 + 64) && a2 <= 4096LL - *((_QWORD *)v16 + 5) )
    {
      v5 = *((_QWORD *)v16 + 5);
      *((_BYTE *)v16 + 64) = 1;
    }
LABEL_10:
    v14 = *(struct DirectComposition::CBatchSharedMemoryPool **)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)v4 = v14;
    *((_QWORD *)v4 + 1) = this;
    *((_QWORD *)v14 + 1) = v4;
    *(_QWORD *)this = v4;
    goto LABEL_13;
  }
  return (unsigned int)v6;
}
