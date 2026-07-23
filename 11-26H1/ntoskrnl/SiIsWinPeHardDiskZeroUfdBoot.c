/*
 * XREFs of SiIsWinPeHardDiskZeroUfdBoot @ 0x14089BDAC
 * Callers:
 *     SiGetBiosSystemDisk @ 0x14089BB3C (SiGetBiosSystemDisk.c)
 * Callees:
 *     _snwscanf_s @ 0x14053E010 (_snwscanf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SiIssueSynchronousIoctl @ 0x14089AF6C (SiIssueSynchronousIoctl.c)
 *     SiTranslateSymbolicLink @ 0x14089B018 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x140AC21E0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x140AC225C (SiGetBootDeviceNameFromRegistry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char SiIsWinPeHardDiskZeroUfdBoot()
{
  char v0; // bl
  char result; // al
  wchar_t *v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf
  int v6; // [rsp+30h] [rbp-9h] BYREF
  int v7; // [rsp+34h] [rbp-5h] BYREF
  int v8; // [rsp+38h] [rbp-1h] BYREF
  wchar_t *Src; // [rsp+40h] [rbp+7h] BYREF
  wchar_t *v10; // [rsp+48h] [rbp+Fh] BYREF
  int v11; // [rsp+50h] [rbp+17h] BYREF
  __int64 v12; // [rsp+54h] [rbp+1Bh]
  __int128 v13; // [rsp+60h] [rbp+27h] BYREF
  __int128 v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+47h]

  v0 = 0;
  Src = 0LL;
  v10 = 0LL;
  v7 = 0;
  v6 = 0;
  HIDWORD(v12) = 0;
  v8 = 0;
  result = SiIsWinPEBoot();
  if ( result )
  {
    if ( (int)SiGetBootDeviceNameFromRegistry(L"FirmwareBootDevice", &Src) >= 0 )
    {
      v2 = Src;
      v3 = -1LL;
      do
        ++v3;
      while ( Src[v3] );
      if ( snwscanf_s(Src, v3 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v6, &v7, &v8) == 3
        && !v6
        && !v7
        && !v8
        && SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &v10) >= 0 )
      {
        ExFreePoolWithTag(v2, 0);
        v15 = 0LL;
        v12 = 0LL;
        v11 = 0;
        v13 = 0LL;
        v14 = 0LL;
        v4 = SiIssueSynchronousIoctl(v10, 0x2D1400u, &v11, 0xCu, &v13, 0x28u);
        if ( v4 >= 0 )
          v5 = HIDWORD(v14) == 7;
        else
          v5 = v4 == -1073741766;
        if ( v5 )
          return 1;
      }
    }
    return v0;
  }
  return result;
}
