/*
 * XREFs of MiSetPfnKernelStack @ 0x1402A06C0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D11D4 (MiCreateKernelStackFromNodeCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFF00000000001uLL;
  *a1 = (a2 >> 3) ^ (*a1 ^ (a2 >> 3)) & 0xFFFFF00000000001uLL;
  if ( a2 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
    {
      result = *a1 | 1;
      *a1 = result;
    }
  }
  return result;
}
