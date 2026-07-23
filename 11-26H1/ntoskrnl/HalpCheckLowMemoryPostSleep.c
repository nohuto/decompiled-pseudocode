/*
 * XREFs of HalpCheckLowMemoryPostSleep @ 0x140C0FFAC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x14034478C (HalpMapPhysicalMemory64.c)
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalpSimpleCheck @ 0x140BF3138 (HalpSimpleCheck.c)
 */

const __m128i *__fastcall HalpCheckLowMemoryPostSleep(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  const __m128i *result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (const __m128i *)&retaddr;
  *a1 = -1;
  *a2 = 0;
  *a3 = 0;
  if ( (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8] & 0x20000) != 0
    && !BYTE1(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) )
  {
    v7 = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount >> 12;
    v8 = (*(_QWORD *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount >> 12) + 1LL;
    if ( (HalpDeviceBlockUnblockPushLock.AbEntryCountValue & 0xFFF) == 0 )
      v8 = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount >> 12;
    for ( i = 0LL; i < 0x100; ++i )
    {
      result = (const __m128i *)HalpLowMemoryMap.Buffer;
      v10 = (unsigned __int64)(unsigned int)i >> 3;
      if ( ((*((char *)HalpLowMemoryMap.Buffer + v10) >> (i & 7)) & 1) == 0 )
      {
        result = (const __m128i *)HalpLowMemoryMapStack.Buffer;
        if ( ((*((char *)HalpLowMemoryMapStack.Buffer + v10) >> (i & 7)) & 1) == 0 && i != v7 && i != v8 )
        {
          result = (const __m128i *)HalpMapPhysicalMemory64((_DWORD)i << 12, 1, 0, 4);
          if ( result )
          {
            if ( (unsigned __int8)HalpSimpleCheck(result) != HalpPhysicalMemoryCheckSums[i] )
            {
              if ( i < (unsigned int)*a1 )
                *a1 = i;
              if ( i > (unsigned int)*a2 )
                *a2 = i;
              ++*a3;
            }
            result = (const __m128i *)HalpUnmapVirtualAddress(v11, 1LL, 0);
          }
        }
      }
    }
  }
  return result;
}
