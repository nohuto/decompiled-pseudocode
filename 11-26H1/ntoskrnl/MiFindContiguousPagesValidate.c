/*
 * XREFs of MiFindContiguousPagesValidate @ 0x14028E82C
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFindContiguousPagesValidate(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rax

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 40);
  v4 = *(unsigned int *)(*a1 + 52);
  v5 = *(_QWORD *)(*a1 + 80);
  if ( (MiZeroCont & 1) != 0 )
    memset_0(MiCont, 0, 0x358uLL);
  if ( v5 )
    *(_DWORD *)(v5 + 12) = 0;
  CurrentIrql = KeGetCurrentIrql();
  *((_BYTE *)a1 + 8) = CurrentIrql;
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( (unsigned int)v4 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(56320 * v4 + *(_QWORD *)(*(_QWORD *)v1 + 16LL) + 13888)
    && (MiFlags & 0x30) != 0 )
  {
    return 3221225495LL;
  }
  if ( *((_BYTE *)a1 + 8) == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    *(_DWORD *)(v1 + 60) |= 8u;
  v7 = *(_QWORD *)(v1 + 72);
  if ( v7 )
    *((_DWORD *)a1 + 9) = v3 + (*(_DWORD *)(v7 + 40) >> 12);
  return 0LL;
}
