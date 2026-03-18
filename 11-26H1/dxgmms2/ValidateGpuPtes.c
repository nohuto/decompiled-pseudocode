/*
 * XREFs of ValidateGpuPtes @ 0x1400A8308
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?GetPte@CVirtualAddressAllocator@@QEAA?AU_DXGK_PTE@@_K@Z @ 0x1400AA3A4 (-GetPte@CVirtualAddressAllocator@@QEAA-AU_DXGK_PTE@@_K@Z.c)
 */

struct _DXGK_PTE *__fastcall ValidateGpuPtes(char *BaseAddress, CVirtualAddressAllocator *this, __int64 a3, char a4)
{
  struct _DXGK_PTE *result; // rax
  unsigned __int64 i; // rbx
  bool v10; // zf
  _DXGK_PTE v11; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (struct _DXGK_PTE *)&retaddr;
  for ( i = *(_QWORD *)(a3 + 32); i < *(_QWORD *)(a3 + 40); BaseAddress += 64 )
  {
    result = CVirtualAddressAllocator::GetPte(this, &v11, i);
    if ( a4 )
    {
      v10 = (*(_BYTE *)&v11.0 & 1) == 0;
    }
    else
    {
      result = (struct _DXGK_PTE *)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
      v10 = v11.PageAddress == (_QWORD)result;
    }
    if ( !v10 )
      break;
    i += 64LL;
  }
  return result;
}
