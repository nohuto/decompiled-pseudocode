/*
 * XREFs of ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401C2514
 * Callers:
 *     Win32UAFMAllocPoolWithQuota @ 0x1401C1F30 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1401C1FC0 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1401C20B0 (Win32UAFMAllocateFromPagedLookasideList.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401C2380 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401C2414 (-AllocatePoolWithPriority@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     <none>
 */

ULONG NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie()
{
  unsigned __int64 v0; // rax
  ULONG result; // eax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = __rdtsc();
  Seed = v0;
  result = RtlRandomEx(&Seed);
  if ( !result )
    return 1;
  return result;
}
