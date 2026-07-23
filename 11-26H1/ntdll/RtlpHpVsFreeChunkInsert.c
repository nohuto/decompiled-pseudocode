/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1800E63DC
 * Callers:
 *     RtlpHpVsSlotAddSubsegment @ 0x18005E810 (RtlpHpVsSlotAddSubsegment.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x18008BBE4 (RtlpHpVsChunkComputeCost.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  BOOLEAN v7; // bl
  __int16 v8; // ax
  int v9; // r8d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  v15 = 0;
  v16 = 0LL;
  v8 = RtlpHpVsChunkComputeCost(a4, a3, &v15, &v16);
  v9 = __popcnt(v16);
  if ( *(_WORD *)(a1 + 6) )
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 6) + a1 + 32), v9);
  else
    *(_QWORD *)(a1 + 96) += v9;
  v16 = (unsigned __int16)(v15 + v8 - v9);
  v10 = a4 ^ RtlpHpHeapGlobals ^ v16;
  *(_WORD *)a4 = v10;
  v11 = a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4;
  v16 = v10;
  v12 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    if ( v12 )
      v12 ^= a2 + 16;
    else
      v12 = 0LL;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v11 >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v12 - 8) ^ ((_DWORD)v12 - 8)) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
        {
          if ( !v13 )
          {
LABEL_13:
            v7 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v12, v7, (PRTL_BALANCED_NODE)(a4 + 8));
          }
          v13 ^= v12;
        }
        if ( !v13 )
          goto LABEL_13;
      }
      else
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
        {
          if ( !v13 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v12, v7, (PRTL_BALANCED_NODE)(a4 + 8));
          v13 ^= v12;
        }
        if ( !v13 )
          return RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v12, v7, (PRTL_BALANCED_NODE)(a4 + 8));
      }
      v12 = v13;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v12, v7, (PRTL_BALANCED_NODE)(a4 + 8));
}
