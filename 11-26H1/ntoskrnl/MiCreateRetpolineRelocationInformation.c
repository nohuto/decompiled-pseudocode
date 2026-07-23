/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x140AA7894
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1408738F0 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14046CA6C (RtlCreateRetpolineRelocationInformation.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140AA7B04 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  int CurrentProcessorColor; // eax
  _DWORD *PoolMm; // rdi
  unsigned int v11; // r14d
  int v12; // eax
  char *v13; // rax
  int RetpolineRelocationInformation; // ebx
  __int64 v16; // [rsp+30h] [rbp-38h]

  v5 = a3 >> 12;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (_DWORD *)ExAllocatePoolMm(256LL, 8 * v5 + 64, 1918003533, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return (unsigned int)-1073741670;
  v11 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v5);
  v12 = MmGetCurrentProcessorColor();
  v13 = (char *)ExAllocatePoolMm(256LL, v11, 1918003533, v12 | 0x80000000);
  *((_QWORD *)PoolMm + 7) = v13;
  if ( !v13 )
  {
    RetpolineRelocationInformation = -1073741670;
    goto LABEL_8;
  }
  LODWORD(v16) = v11;
  RetpolineRelocationInformation = RtlCreateRetpolineRelocationInformation(
                                     a3,
                                     *(_DWORD *)(a1 + 4),
                                     *(_QWORD *)(a1 + 8),
                                     *(_QWORD *)(a1 + 16),
                                     *(_QWORD *)(a1 + 24),
                                     v13,
                                     v16,
                                     PoolMm + 16,
                                     8 * v5);
  if ( RetpolineRelocationInformation < 0 )
  {
LABEL_8:
    MiFreeRetpolineRelocationInformation(PoolMm);
    return (unsigned int)RetpolineRelocationInformation;
  }
  PoolMm[1] = *(_DWORD *)a1;
  *PoolMm = a2;
  PoolMm[12] = ((a3 + 4095) & 0xFFFFF000)
             + ((LODWORD(stru_140E366D8.QuantumTarget) + 4095 + HIDWORD(stru_140E366D8.SListFaultAddress)) & 0xFFFFF000);
  RetpolineRelocationInformation = 0;
  *a4 = PoolMm;
  return (unsigned int)RetpolineRelocationInformation;
}
