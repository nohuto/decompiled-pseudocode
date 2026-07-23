/*
 * XREFs of HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140785AAC
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeContiguousVirtualBufferShared(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  PHYSICAL_ADDRESS v4; // rbx
  unsigned __int64 v5; // rdi
  PHYSICAL_ADDRESS v6; // rsi
  unsigned __int64 v8; // r15
  __int64 *v9; // r13
  void *v12; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 QuadPart; // [rsp+58h] [rbp+10h] BYREF

  v4.QuadPart = 0LL;
  v5 = 0LL;
  v6.QuadPart = 0LL;
  v8 = (unsigned int)((a2 + 4095) >> 12);
  v9 = a3;
  while ( v5 < v8 )
  {
    v12 = (void *)(a1 + (v5 << 12));
    if ( (unsigned __int64)v12 < a1 )
      return 3221225712LL;
    PhysicalAddress = MmGetPhysicalAddress(v12);
    if ( !PhysicalAddress.QuadPart )
      return 3221225711LL;
    if ( v5 )
    {
      if ( v6.QuadPart + 4096 != PhysicalAddress.QuadPart )
        return 3221225711LL;
    }
    else
    {
      v4 = PhysicalAddress;
    }
    ++v5;
    v6 = PhysicalAddress;
  }
  QuadPart = v4.QuadPart;
  if ( !v4.QuadPart )
    return 3221225712LL;
  LOBYTE(a3) = 1;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalpDmaCvmSetPageShareability)(
             (PHYSICAL_ADDRESS)v4.QuadPart,
             ((a2 & 0xFFF) != 0) + (a2 >> 12),
             a3,
             &QuadPart);
  if ( (int)result >= 0 )
  {
    v15 = QuadPart;
    v16 = MmMapIoSpaceEx(QuadPart, a2, 4u);
    if ( v16 )
    {
      result = 0LL;
      *v9 = v16;
      *a4 = v15;
    }
    else
    {
      return HalpDmaCvmSetPageShareability(v15, ((a2 & 0xFFF) != 0) + (a2 >> 12), 0LL, &QuadPart);
    }
  }
  return result;
}
