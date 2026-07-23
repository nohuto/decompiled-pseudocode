/*
 * XREFs of HalpIommuUpdatePageTableLevel @ 0x140589C14
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuUpdatePageTableLevel()
{
  ULONG_PTR v0; // rdx
  __int64 result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx

  v0 = HalpIommuList;
  result = 0xFFFFFFFFLL;
  HalpDeviceBlockUnblockPushLock.StackBase = (void *)0xFFFFFFFFLL;
  HalpDeviceBlockUnblockPushLock.StateSaveArea = (_XSAVE_FORMAT *)0xFFFFFFFF00000000LL;
  while ( (ULONG_PTR *)v0 != &HalpIommuList )
  {
    v2 = *(_DWORD *)(v0 + 464);
    if ( (v2 & 0x100) != 0 )
    {
      result = (unsigned int)((unsigned __int16)v2 >> 13) + 1;
      if ( (unsigned int)result > HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) )
        HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) = ((unsigned __int16)v2 >> 13) + 1;
      if ( (unsigned int)result < LODWORD(HalpDeviceBlockUnblockPushLock.StackBase) )
        LODWORD(HalpDeviceBlockUnblockPushLock.StackBase) = ((unsigned __int16)v2 >> 13) + 1;
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v3 = ((v2 >> 27) & 7) + 3;
      if ( v3 > LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) )
        LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) = v3;
      if ( v3 < HIDWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) )
        HIDWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) = v3;
    }
    v0 = *(_QWORD *)v0;
  }
  return result;
}
