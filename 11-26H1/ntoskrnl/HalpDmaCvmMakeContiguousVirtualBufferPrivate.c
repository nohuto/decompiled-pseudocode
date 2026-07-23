/*
 * XREFs of HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140785A30
 * Callers:
 *     HalFreeCommonBufferV3 @ 0x14058C550 (HalFreeCommonBufferV3.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeContiguousVirtualBufferPrivate(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
  if ( byte_140FBAD41 )
    return 0LL;
  if ( (PhysicalAddress.QuadPart & qword_140FBAD48) == 0 )
    return 3221225711LL;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalpDmaCvmSetPageShareability)(
             (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
             (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0),
             0LL,
             &v6);
  if ( (int)result >= 0 )
  {
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
    return 0LL;
  }
  return result;
}
