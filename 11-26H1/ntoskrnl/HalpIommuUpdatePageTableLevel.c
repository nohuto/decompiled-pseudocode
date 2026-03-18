/*
 * XREFs of HalpIommuUpdatePageTableLevel @ 0x1405876F4
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
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
  HIDWORD(HalpDeviceBlockUnblockPushLock.StackLimit) = 0;
  HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) = -1;
  LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) = -1;
  HIDWORD(HalpDeviceBlockUnblockPushLock.ThreadLock) = 0;
  while ( (ULONG_PTR *)v0 != &HalpIommuList )
  {
    v2 = *(_DWORD *)(v0 + 464);
    if ( (v2 & 0x100) != 0 )
    {
      result = (unsigned int)((unsigned __int16)v2 >> 13) + 1;
      if ( (unsigned int)result > HIDWORD(HalpDeviceBlockUnblockPushLock.StackLimit) )
        HIDWORD(HalpDeviceBlockUnblockPushLock.StackLimit) = ((unsigned __int16)v2 >> 13) + 1;
      if ( (unsigned int)result < HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) )
        HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) = ((unsigned __int16)v2 >> 13) + 1;
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v3 = ((v2 >> 27) & 7) + 3;
      if ( v3 > HIDWORD(HalpDeviceBlockUnblockPushLock.ThreadLock) )
        HIDWORD(HalpDeviceBlockUnblockPushLock.ThreadLock) = v3;
      if ( v3 < LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) )
        LODWORD(HalpDeviceBlockUnblockPushLock.StateSaveArea) = v3;
    }
    v0 = *(_QWORD *)v0;
  }
  return result;
}
