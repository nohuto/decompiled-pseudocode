/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180013910
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180002CB0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002DE0 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     CreateResourceManagerProxy @ 0x1800124D8 (CreateResourceManagerProxy.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     malloc_0 @ 0x180012F21 (malloc_0.c)
 *     _callnewh_0 @ 0x18001395B (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc_0(Size);
    if ( v2 || !callnewh_0(i) )
      break;
  }
  return v2;
}
