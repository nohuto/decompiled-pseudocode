/*
 * XREFs of NvmeControllerAllocateInternalBuffer @ 0x1400F0620
 * Callers:
 *     NvmeAdapterStorMQAddController @ 0x1400DF1F4 (NvmeAdapterStorMQAddController.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400799F4 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerAllocateInternalBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  result = NvmeControllerAllocateInternalBufferAllocation(*(_QWORD *)(a1 + 128), a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(void **)(a1 + 1624);
    memset_0(v4, 0, 0x2000uLL);
    v5 = ((unsigned __int64)v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v6 = v5 + *(_QWORD *)(a1 + 1632) - (_QWORD)v4;
    *(_QWORD *)(a1 + 1112) = v5;
    *(_QWORD *)(a1 + 1120) = v6;
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 1192) = 38;
  }
  return result;
}
