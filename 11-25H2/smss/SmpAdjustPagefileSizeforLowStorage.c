/*
 * XREFs of SmpAdjustPagefileSizeforLowStorage @ 0x14000EFA8
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     <none>
 */

__int64 SmpAdjustPagefileSizeforLowStorage()
{
  _QWORD *v0; // rdi
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  int v10; // [rsp+68h] [rbp+28h] BYREF
  int v11; // [rsp+70h] [rbp+30h] BYREF

  v0 = SmpPagingFileDescriptorList;
  result = (__int64)L"System-ConfigurePagefileForLowStorage-Enabled";
  v2 = 0LL;
  v8[0] = 6029402LL;
  v8[1] = L"System-ConfigurePagefileForLowStorage-Enabled";
  v9 = 0;
  v10 = 0;
  v11 = 0;
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
            result = NtQueryLicenseValue(v8, &v9, &v11, 4LL, &v10);
            if ( (int)result >= 0 && v9 == 4 && v10 == 4 && v11 )
            {
              v3 = v0[3];
              v4 = v0 + 7;
              v5 = SmpOsVolumeLetter;
              *((_DWORD *)v0 + 23) &= 0xFFFFFFF9;
              SmpAnyDriveDescriptorCreated = 0;
              *(_WORD *)(v3 + 8) = v5;
              if ( *(_QWORD *)(SmpOsVolumeDescriptor + 40) > 0x400000000uLL )
              {
                v7 = 0x80000000LL;
                v2 = 0x10000000LL;
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  v7 = 1610612736LL;
                v6 = 4026531840LL;
              }
              else
              {
                v6 = 0x80000000LL;
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  v6 = 0x4000000LL;
                v7 = (unsigned int)v6;
              }
              *v4 = v7;
              SmpMaxSwapFileSize = v2;
              v0[8] = v6;
              result = *v4;
              v0[6] = *v4;
            }
          }
        }
      }
    }
  }
  return result;
}
