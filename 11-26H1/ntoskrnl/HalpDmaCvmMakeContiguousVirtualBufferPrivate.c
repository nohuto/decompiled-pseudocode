/*
 * XREFs of HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140782EFC
 * Callers:
 *     HalFreeCommonBufferV3 @ 0x140589E20 (HalFreeCommonBufferV3.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x140343610 (MmUnmapIoSpace.c)
 *     HalpDmaCvmSetPageShareability @ 0x140783234 (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeContiguousVirtualBufferPrivate(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
  if ( byte_140FBA981 )
    return 0LL;
  if ( (PhysicalAddress.QuadPart & qword_140FBA988) == 0 )
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
