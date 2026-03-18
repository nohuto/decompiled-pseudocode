/*
 * XREFs of ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400AF730
 * Callers:
 *     <none>
 * Callees:
 *     ?PbmmGetAllocationPhysicalAddress@@YA_KPEBUPBMM_PHYSICAL_ALLOC@@PEAI@Z @ 0x14005225C (-PbmmGetAllocationPhysicalAddress@@YA_KPEBUPBMM_PHYSICAL_ALLOC@@PEAI@Z.c)
 */

bool __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::GetAllocationPhysicalAddress(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        const struct PBMM_PHYSICAL_ALLOC **a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  unsigned int v7; // ebx
  __int64 AllocationPhysicalAddress; // rax
  _QWORD *v9; // r9
  unsigned int v10; // r10d
  unsigned __int64 v11; // r11
  __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0;
  v7 = 0;
  AllocationPhysicalAddress = PbmmGetAllocationPhysicalAddress(a2[10], &v15);
  v10 = v15;
  v11 = AllocationPhysicalAddress;
  if ( v15 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 219) + 8LL * v15);
    *v9 = AllocationPhysicalAddress + *(_QWORD *)(v12 + 24);
    v7 = *(unsigned __int16 *)(v12 + 72);
  }
  v13 = a5;
  *v9 = 0LL;
  *a3 = v7;
  if ( v13 )
    *v13 = v11;
  return v10 != 0;
}
