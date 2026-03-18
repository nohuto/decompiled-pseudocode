/*
 * XREFs of ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400ABD34
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400ABE44 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x14012411C (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_PARTITION *a2,
        struct VIDMM_PARTITION_ADAPTER_INFO *a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // rbx

  v3 = *((_QWORD *)a2 + 6);
  v5 = (unsigned int)dword_14008A650;
  v6 = 0;
  if ( *((_DWORD *)a2 + 8) )
    v5 = (unsigned int)dword_14008A654;
  v9 = v3 * v5 / 0x64;
  if ( v9 < (unsigned int)dword_14008A648 )
  {
    if ( v3 > (unsigned int)dword_14008A64C )
    {
      v9 = (v3 - (unsigned int)dword_14008A64C) >> 1;
      if ( (unsigned int)dword_14008A648 > v9 )
        v9 = (unsigned int)dword_14008A648;
    }
    else
    {
      v9 = (unsigned int)dword_14008A648;
    }
  }
  *((_QWORD *)a3 + 2) = v9;
  if ( !*((_DWORD *)a2 + 8) )
  {
    v10 = v9 - *((_QWORD *)this + 872);
    *((_QWORD *)a3 + 2) = v10;
    qword_14008A640 = v10;
  }
  v11 = *((_QWORD *)a3 + 2);
  if ( qword_14008A500 && v11 >= qword_14008A500 )
    v11 = qword_14008A500;
  if ( *((_DWORD *)this + 1738) )
  {
    do
    {
      VIDMM_GLOBAL::InitializeSegmentGroupState(
        this,
        v6,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                       + *((_QWORD *)a2 + 5)
                                                       + 24)
                                           + 344LL * v6),
        v11);
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 1738) );
  }
}
