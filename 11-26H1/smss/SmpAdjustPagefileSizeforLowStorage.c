/*
 * XREFs of SmpAdjustPagefileSizeforLowStorage @ 0x14000EBE8
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     <none>
 */

__int64 SmpAdjustPagefileSizeforLowStorage()
{
  _QWORD *v0; // rdi
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  int v7; // [rsp+60h] [rbp+20h] BYREF
  int v8; // [rsp+68h] [rbp+28h] BYREF
  int v9; // [rsp+70h] [rbp+30h] BYREF

  v0 = SmpPagingFileDescriptorList;
  result = (__int64)L"System-ConfigurePagefileForLowStorage-Enabled";
  v2 = 0LL;
  v6[0] = 6029402LL;
  v6[1] = L"System-ConfigurePagefileForLowStorage-Enabled";
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( SmpNumberOfPagefileDescriptors == 1 )
  {
    result = (__int64)&SmpPagingFileDescriptorList;
    if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
    {
      result = *((_DWORD *)SmpPagingFileDescriptorList + 23) & 6;
      if ( (*((_BYTE *)SmpPagingFileDescriptorList + 92) & 6) == 6 )
      {
        result = SmpOsVolumeDescriptor;
        if ( SmpOsVolumeDescriptor )
        {
          if ( *(_QWORD *)(SmpOsVolumeDescriptor + 40) <= 0x800000000uLL )
          {
            result = NtQueryLicenseValue(v6, &v7, &v9, 4LL, &v8);
            if ( (int)result >= 0 && v7 == 4 && v8 == 4 && v9 )
            {
              v3 = v0[3];
              v4 = SmpOsVolumeLetter;
              *((_DWORD *)v0 + 23) &= 0xFFFFFFF9;
              SmpAnyDriveDescriptorCreated = 0;
              *(_WORD *)(v3 + 8) = v4;
              if ( *(_QWORD *)(SmpOsVolumeDescriptor + 40) > 0x400000000uLL )
              {
                result = 0x80000000LL;
                v2 = 0x10000000LL;
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  result = 1610612736LL;
                v5 = 4026531840LL;
              }
              else
              {
                v5 = 0x80000000LL;
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  v5 = 0x4000000LL;
                result = (unsigned int)v5;
              }
              v0[7] = result;
              SmpMaxSwapFileSize = v2;
              v0[8] = v5;
              v0[6] = result;
            }
          }
        }
      }
    }
  }
  return result;
}
