/*
 * XREFs of MiAllocateVadEvent @ 0x14099F6FC
 * Callers:
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiAllocateVadEvent(unsigned __int8 a1, ULONG_PTR a2)
{
  int CurrentProcessorColor; // eax
  __int64 result; // rax

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, a2, 2004315469, CurrentProcessorColor | 0x80000000);
  if ( result )
    *(_BYTE *)(result + 11) = a1 >> 4;
  return result;
}
