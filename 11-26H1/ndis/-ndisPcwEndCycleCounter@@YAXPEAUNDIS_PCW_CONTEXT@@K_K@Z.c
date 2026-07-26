/*
 * XREFs of ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x14004B510
 * Callers:
 *     NdisBuildScatterGatherList @ 0x1400CAE90 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwEndCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax

  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  v3 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4));
  v4 = __rdtsc();
  *(_QWORD *)(v3 + 8 * a3) += (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4)
                            - *(_QWORD *)(v3 + 8LL * a2 + 304);
  *(_QWORD *)(v3 + 8LL * a2 + 304) = 0LL;
}
