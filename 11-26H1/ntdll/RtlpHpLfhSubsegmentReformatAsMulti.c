/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 * Callees:
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x180063150 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x180063270 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180063338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180063920 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsMulti(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // eax
  int v5; // edx
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rcx
  void *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // [rsp+48h] [rbp+10h] BYREF
  int v20; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v5 = *(unsigned __int8 *)(a2 + 38);
  v7 = qword_1801C5EC8 ^ v4;
  v19 = 0;
  v8 = 4096 << v5;
  v20 = 0;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v11 = 4096 << v5;
  }
  else
  {
    v9 = 2 * v7;
    v20 = 0;
    if ( ((v9 - 1) & v9) != 0 )
    {
      _BitScanReverse(&v10, v9);
      v9 = 1 << (v10 + 1);
    }
    if ( v9 <= 0x1000 )
      v9 = 4096;
    v11 = v8 >> 6;
    if ( v9 > v8 >> 6 )
      v11 = v9;
    if ( v11 >= v8 )
      v11 = 4096 << v5;
  }
  _BitScanForward((unsigned int *)&v12, v11 >> 12);
  if ( v12 == v5 )
    return 0LL;
  v13 = v8 >> 12 >> v12;
  v14 = v13 * *(unsigned __int16 *)(a2 + 32);
  if ( (unsigned int)v14 < *(unsigned __int16 *)(a2 + 34) )
    return 3221226651LL;
  if ( (a3 & 1) != 0 || (v20 = 0, (unsigned int)RtlpHpLfhSubsegmentReformatCheck(v14, a2, &v20, &v19)) )
  {
    LOBYTE(v19) = v12;
    BYTE1(v19) = v13;
    *(_WORD *)(a2 + 38) = v19;
    v16 = (void *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    memset_thunk_772440563353939046(v16, 0, 2LL * v13);
    RtlpHpLfhSubsegmentConstructCommitState(v17, a2, a2 + 64, v16);
    v18 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
    if ( v18 )
      RtlpHpLfhContextUpdateFreeCommitCount(
        a1,
        a2,
        (unsigned __int64)(unsigned int)(v18 << 12 << *(_BYTE *)(a2 + 38)) >> 12);
    return 0LL;
  }
  return 3221226614LL;
}
