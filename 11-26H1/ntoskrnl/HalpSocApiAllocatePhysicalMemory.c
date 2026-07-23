/*
 * XREFs of HalpSocApiAllocatePhysicalMemory @ 0x14059BEC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpSocApiAllocatePhysicalMemory(__int64 a1, int a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( HalpTimerLoaderBlock )
    return HalpAllocPhysicalMemoryEx(HalpTimerLoaderBlock, (unsigned int)&v3, a2, 0, 0LL);
  else
    return 0LL;
}
