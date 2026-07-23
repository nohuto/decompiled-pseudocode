/*
 * XREFs of SiValidateSystemPartition @ 0x140ADE8BC
 * Callers:
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SiIssueSynchronousIoctl @ 0x14089AF6C (SiIssueSynchronousIoctl.c)
 *     SiGetDiskPartitionInformation @ 0x140ADE9A0 (SiGetDiskPartitionInformation.c)
 */

__int64 __fastcall SiValidateSystemPartition(const WCHAR *a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int DiskPartitionInformation; // ebx
  _DWORD v9[8]; // [rsp+48h] [rbp-C0h] BYREF
  char Buf1; // [rsp+68h] [rbp-A0h] BYREF
  char v11; // [rsp+69h] [rbp-9Fh]
  int v12; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v13; // [rsp+DCh] [rbp-2Ch]
  _OWORD v14[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v15; // [rsp+108h] [rbp+0h]

  memset_0(v9, 0, 0x90uLL);
  HIDWORD(v13) = 0;
  DiskPartitionInformation = SiGetDiskPartitionInformation(a1, v9);
  if ( (DiskPartitionInformation & 0x80000000) == 0 )
  {
    if ( a2 && v9[0] != *a2 )
      return (unsigned int)-1073741823;
    DiskPartitionInformation = -1073741823;
    if ( v9[0] == 1 )
    {
      if ( memcmp(&Buf1, &PARTITION_SYSTEM_GUID, 0x10uLL) )
        return DiskPartitionInformation;
      DiskPartitionInformation = 0;
    }
    else
    {
      if ( v9[0] )
        return DiskPartitionInformation;
      DiskPartitionInformation = v11 == 0 ? 0xC0000001 : 0;
      if ( !v11 )
        return DiskPartitionInformation;
    }
    if ( a5 )
    {
      v15 = 0LL;
      v12 = 0;
      v13 = 0LL;
      memset(v14, 0, sizeof(v14));
      DiskPartitionInformation = SiIssueSynchronousIoctl(a1, 0x2D1400u, &v12, 0xCu, v14, 0x28u);
      if ( (DiskPartitionInformation & 0x80000000) == 0 )
      {
        if ( BYTE10(v14[0]) )
          return (unsigned int)-1073741436;
      }
    }
  }
  return DiskPartitionInformation;
}
