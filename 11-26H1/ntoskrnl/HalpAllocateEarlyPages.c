/*
 * XREFs of HalpAllocateEarlyPages @ 0x14057FFF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

unsigned __int64 __fastcall HalpAllocateEarlyPages(int a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 result; // rax

  v7 = HalpAllocPhysicalMemoryEx(a1, 0, a2, 0, 0LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  result = HalpMap(v7, a2, 1u, 0, a4, 0LL);
  if ( !result )
    return 0LL;
  *a3 = v8;
  return result;
}
