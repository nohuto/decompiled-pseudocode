/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffers @ 0x140019030
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x140018EF0 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x140019710 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1400191A8 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffers(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  int v9; // edx
  unsigned int v11; // r10d
  unsigned int *v12; // rcx
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v16; // r8

  v9 = 0;
  v11 = 0;
  v12 = (unsigned int *)(a1 + 32);
  do
  {
    v13 = a1 + ((unsigned __int64)v11 << 6) + 32;
    if ( a3 <= *v12 )
      break;
    ++v11;
    v12 += 16;
  }
  while ( v11 < 2 );
  if ( v13 )
  {
    v14 = XilCoreCommonBuffer_AcquireBuffersWithSegmenter(a1, v13, a2, a4, a5, a6, (__int64)a7);
    if ( v14 < 0 || *a7 )
    {
      if ( KeGetCurrentIrql() )
      {
        *a7 = 1;
      }
      else
      {
        v16 = a2;
        if ( v14 >= 0 )
          v16 = 0LL;
        if ( *a7 )
          v16 = (unsigned int)(*(_DWORD *)(v13 + 16) + v16);
        XilCoreCommonBuffer_AllocateBuffers(a1, v13, v16);
        *a7 = 0;
        if ( v14 < 0 )
          return (unsigned int)XilCoreCommonBuffer_AcquireBuffersWithSegmenter(a1, v13, a2, a4, a5, a6, (__int64)a7);
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v9,
        8,
        22,
        (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
        a3);
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v14;
}
