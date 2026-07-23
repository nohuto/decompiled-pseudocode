/*
 * XREFs of HalpIommuDomainGetSupportedPageTableDepths @ 0x14058FF98
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuDomainGetSupportedPageTableDepths(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  char v4; // al
  unsigned int StateSaveArea; // ebx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_BYTE *)(a1 + 52);
  StateSaveArea = 0;
  v9 = 0;
  if ( HalpHvIommu )
  {
    if ( v4 )
    {
      StateSaveArea = 4;
      HalpGetCpuInfo(0LL, 0LL, 0LL, &v9);
    }
    result = StateSaveArea;
  }
  else if ( v4 )
  {
    result = HIDWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea);
    if ( a2 )
      StateSaveArea = ((*(_DWORD *)(a2 + 464) >> 27) & 7) + 3;
    else
      StateSaveArea = (unsigned int)HalpDeviceBlockUnblockPushLock.StateSaveArea;
  }
  else
  {
    result = LODWORD(HalpDeviceBlockUnblockPushLock.StackBase);
    if ( a2 )
      StateSaveArea = ((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 464)) >> 5) + 1;
    else
      StateSaveArea = HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase);
  }
  *a3 = StateSaveArea;
  *a4 = result;
  return result;
}
