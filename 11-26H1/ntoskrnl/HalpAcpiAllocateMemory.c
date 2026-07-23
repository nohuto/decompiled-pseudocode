/*
 * XREFs of HalpAcpiAllocateMemory @ 0x140527BBC
 * Callers:
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057BAAC (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiFindRsdp @ 0x140CB381C (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

unsigned __int64 __fastcall HalpAcpiAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return HalpMmAllocCtxAlloc(0LL, a2);
  v7 = (-(__int64)(HalpPrebootMode != 0) & 0xFFFFFFFFFEFFFFFFuLL) + 0x1000000;
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v4 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v7, v3, 0, 0LL);
  if ( v4 )
    return HalpMap(v4, v3, 1u, 0, 4u, 0LL);
  return v2;
}
