/*
 * XREFs of HalpIommuDomainGetSupportedPageTableDepths @ 0x14058D818
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x140513EE4 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058D094 (HalpIommuAllocateDmaDomain.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1404C55D0 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuDomainGetSupportedPageTableDepths(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  char v4; // al
  unsigned int ThreadLock_high; // ebx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_BYTE *)(a1 + 52);
  ThreadLock_high = 0;
  v9 = 0;
  if ( HalpHvIommu )
  {
    if ( v4 )
    {
      ThreadLock_high = 4;
      HalpGetCpuInfo(0LL, 0LL, 0LL, &v9);
    }
    result = ThreadLock_high;
  }
  else if ( v4 )
  {
    result = LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea);
    if ( a2 )
      ThreadLock_high = ((*(_DWORD *)(a2 + 464) >> 27) & 7) + 3;
    else
      ThreadLock_high = HIDWORD(HalpDeviceBlockUnblockPushLock.ThreadLock);
  }
  else
  {
    result = HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase);
    if ( a2 )
      ThreadLock_high = ((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 464)) >> 5) + 1;
    else
      ThreadLock_high = HIDWORD(HalpDeviceBlockUnblockPushLock.StackLimit);
  }
  *a3 = ThreadLock_high;
  *a4 = result;
  return result;
}
