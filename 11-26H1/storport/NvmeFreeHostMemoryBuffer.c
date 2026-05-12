/*
 * XREFs of NvmeFreeHostMemoryBuffer @ 0x1400FE828
 * Callers:
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     StorpFreeHostMemoryBuffer @ 0x140058A68 (StorpFreeHostMemoryBuffer.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400D0214 (NvmeControllerSetHostMemoryBuffer.c)
 */

void __fastcall NvmeFreeHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rdx
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1200) )
  {
    if ( (*(_QWORD *)(a1 + 968) & 0x8000LL) == 0 )
    {
      v4 = *(unsigned int **)(a1 + 1200);
      LODWORD(Size) = v4[1];
      NvmeControllerSetHostMemoryBuffer((union _SLIST_HEADER *)a1, 1, 0, 0, *v4, v4 + 2, Size);
    }
    StorpFreeHostMemoryBuffer(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 408LL) + 16LL, a2, a3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1200), 0x484E6152u);
    *(_QWORD *)(a1 + 1200) = 0LL;
  }
}
