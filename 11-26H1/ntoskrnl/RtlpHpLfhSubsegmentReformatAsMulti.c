/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsMulti @ 0x14034BA20
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 * Callees:
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x14034BB90 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14034BD40 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x14034BD8C (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsMulti(__int64 a1, unsigned __int64 a2, char a3)
{
  int v3; // r9d
  char v5; // cl
  unsigned int v6; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  void *v14; // rdi
  int v15; // eax
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 38);
  v5 = *(_BYTE *)(a2 + 38);
  v17 = 0;
  v16 = 0;
  v6 = 4096 << v5;
  v8 = 2
     * (LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12));
  if ( ((v8 - 1) & v8) != 0 )
  {
    _BitScanReverse(&v9, v8);
    v8 = 1 << (v9 + 1);
  }
  if ( v8 <= 0x1000 )
    v8 = 4096;
  v10 = v6 >> 6;
  if ( v8 > v6 >> 6 )
    v10 = v8;
  if ( v10 >= v6 )
    v10 = v6;
  _BitScanForward((unsigned int *)&v11, v10 >> 12);
  if ( v11 == v3 )
    return 0LL;
  v12 = v6 >> 12 >> v11;
  if ( v12 * *(unsigned __int16 *)(a2 + 32) < *(unsigned __int16 *)(a2 + 34) )
    return 3221226651LL;
  if ( (a3 & 1) != 0 || (v17 = 0, (unsigned int)RtlpHpLfhSubsegmentReformatCheck(a1, a2, &v17, &v16)) )
  {
    LOBYTE(v16) = v11;
    BYTE1(v16) = v12;
    *(_WORD *)(a2 + 38) = v16;
    v14 = (void *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    memset_0(v14, 0, 2LL * v12);
    RtlpHpLfhSubsegmentConstructCommitState(a1, a2, a2 + 64, v14);
    v15 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
    if ( v15 )
      RtlpHpLfhContextUpdateFreeCommitCount(
        a1,
        a2,
        (unsigned __int64)(unsigned int)(v15 << 12 << *(_BYTE *)(a2 + 38)) >> 12);
    return 0LL;
  }
  return 3221226614LL;
}
