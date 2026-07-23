/*
 * XREFs of HalpDmaAllocateMapRegisterFrame @ 0x14058B358
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousMemoryEx @ 0x14034B050 (MmAllocateContiguousMemoryEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisterFrame(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+68h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  if ( HalpDmaCvmConfiguration )
  {
    QuadPart = 4096LL;
    if ( (int)MmAllocateContiguousMemoryEx(
                &QuadPart,
                0LL,
                -1,
                0,
                0x80000000,
                4,
                0LL,
                1147953480,
                0,
                (__int64 *)&BaseAddress) >= 0 )
    {
      QuadPart = MmGetPhysicalAddress(BaseAddress).QuadPart;
      LOBYTE(v2) = 1;
      if ( (int)HalpDmaCvmSetPageShareability(QuadPart, 1LL, v2, &QuadPart) < 0 )
        goto LABEL_8;
      result = MmMapIoSpaceEx(QuadPart, 4096LL, 4u);
      if ( result )
        return result;
      if ( (int)HalpDmaCvmSetPageShareability(QuadPart, 1LL, 0LL, 0LL) >= 0 )
LABEL_8:
        MmFreeContiguousMemory(BaseAddress);
    }
    return 0LL;
  }
  result = HalpMmAllocCtxAlloc(a1, 4096LL);
  if ( !result )
    return 0LL;
  return result;
}
