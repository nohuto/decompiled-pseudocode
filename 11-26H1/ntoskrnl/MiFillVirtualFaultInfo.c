/*
 * XREFs of MiFillVirtualFaultInfo @ 0x1404AC080
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillVirtualFaultInfo(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = a3 & 0xFFFFFFFFFFFFFLL ^ (*a2 & 0xFFE0000000000000uLL | 0x10000000000000LL);
  *a2 = result;
  if ( (a4 & 0x40) != 0 || (a4 & 2) != 0 )
  {
    result |= 0x20000000000000uLL;
    *a2 = result;
  }
  if ( a4 >= 0 )
  {
    result |= 0x40000000000000uLL;
    *a2 = result;
  }
  if ( (a4 & 8) != 0 || (a4 & 0x10) != 0 )
  {
    result |= 0x80000000000000uLL;
    *a2 = result;
  }
  return result;
}
