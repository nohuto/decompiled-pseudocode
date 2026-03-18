/*
 * XREFs of ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401C22C8
 * Callers:
 *     Win32UAFMAllocPoolWithQuota @ 0x1401C1F30 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1401C1FC0 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401C22E4 (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401C2380 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401C2414 (-AllocatePoolWithPriority@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(
        unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0xFFFFFFFFFFFFFFEFuLL )
      return a1 + 16;
  }
  return result;
}
