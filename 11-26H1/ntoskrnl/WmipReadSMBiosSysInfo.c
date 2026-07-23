/*
 * XREFs of WmipReadSMBiosSysInfo @ 0x1406C7088
 * Callers:
 *     WmiMatchSMBiosSysInfo @ 0x140828890 (WmiMatchSMBiosSysInfo.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosString @ 0x140828D9C (WmipGetSMBiosString.c)
 *     WmipReleaseSmbiosLockShared @ 0x140B22694 (WmipReleaseSmbiosLockShared.c)
 */

__int64 __fastcall WmipReadSMBiosSysInfo(__int64 a1)
{
  int SMBiosString; // ebx
  int SMBiosStructure; // eax
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v7 = 0;
  if ( WmipSysInfoStringCached == 1 )
  {
    return 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    SMBiosStructure = WmipFindSMBiosStructure(a1, &v9, &v8, &v7);
    v3 = v7;
    SMBiosString = SMBiosStructure;
    if ( SMBiosStructure >= 0 )
    {
      v4 = v9;
      v5 = v8 + v7 - 1;
      if ( *(_BYTE *)(v9 + 4) )
      {
        if ( *(_BYTE *)(v9 + 5) )
        {
          SMBiosString = WmipGetSMBiosString(v9, *(unsigned __int8 *)(v9 + 4), v8 + v7 - 1, &WmipSysInfoManufacturerStr);
          if ( SMBiosString >= 0 )
          {
            SMBiosString = WmipGetSMBiosString(v4, *(unsigned __int8 *)(v4 + 5), v5, &WmipSysInfoProductNameStr);
            if ( SMBiosString >= 0 )
              WmipSysInfoStringCached = 1;
          }
        }
      }
    }
    if ( v8 )
    {
      MiUnmapContiguousMemory(v8, v3, 1);
      WmipReleaseSmbiosLockShared();
    }
  }
  return (unsigned int)SMBiosString;
}
