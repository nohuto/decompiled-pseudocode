/*
 * XREFs of MiActOnMirrorBitmap @ 0x140C0CAE8
 * Callers:
 *     MiMirrorBrownPhasePartition @ 0x14044B2EC (MiMirrorBrownPhasePartition.c)
 *     MiUpdateMirrorBitmaps @ 0x140B65ABC (MiUpdateMirrorBitmaps.c)
 *     MiRecordPostHibernateZeroPages @ 0x140C01070 (MiRecordPostHibernateZeroPages.c)
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     MiWalkAllHugeRanges @ 0x140532B50 (MiWalkAllHugeRanges.c)
 *     MiSplitMirrorBitMap @ 0x1408686E0 (MiSplitMirrorBitMap.c)
 */

__int64 __fastcall MiActOnMirrorBitmap(int a1, int a2, int a3)
{
  unsigned int *v3; // r14
  unsigned int v5; // ebx
  unsigned __int64 *v6; // rsi
  unsigned int i; // edi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  _DWORD v11[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 *v12; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int *)MmPhysicalMemoryBlock;
  v5 = 1;
  v6 = (unsigned __int64 *)((char *)&stru_140E2EB88.WaitBlock[1] + 32 * a1 + 16 * a2);
  if ( a1 )
  {
    v11[0] = a3;
    v11[1] = 0;
    v12 = &stru_140E2EB88.WaitBlockFill5[32 * a1 + 48 + 16 * a2];
    return (int)MiWalkAllHugeRanges((__int64)MiActOnMirrorHugeRangeBitmap, (__int64)v11) >= 0;
  }
  else
  {
    for ( i = 0; i < *v3; ++i )
    {
      v8 = *(_QWORD *)&v3[4 * i + 6];
      v9 = *(_QWORD *)&v3[4 * i + 4];
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          RtlSetBitsEx((__int64)v6, v9, v8);
        }
        else if ( a3 == 2 )
        {
          RtlClearBitsEx((__int64)v6, v9, v8);
        }
      }
      else if ( !(unsigned int)MiSplitMirrorBitMap(v6, v9, v8) )
      {
        return 0;
      }
    }
  }
  return v5;
}
