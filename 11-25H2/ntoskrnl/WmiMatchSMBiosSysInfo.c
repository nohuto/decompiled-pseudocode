/*
 * XREFs of WmiMatchSMBiosSysInfo @ 0x140794C80
 * Callers:
 *     <none>
 * Callees:
 *     WmipReadSMBiosSysInfo @ 0x140640348 (WmipReadSMBiosSysInfo.c)
 *     WmipCheckSMBiosSysInfoString @ 0x140794CFC (WmipCheckSMBiosSysInfoString.c)
 */

__int64 __fastcall WmiMatchSMBiosSysInfo(__int64 a1, __int64 a2, PCSZ *a3, int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 == 2
    && *a3
    && a3[1]
    && (WmipSysInfoStringCached || (int)WmipReadSMBiosSysInfo(a1) >= 0)
    && (unsigned __int8)WmipCheckSMBiosSysInfoString(*a3)
    && (unsigned __int8)WmipCheckSMBiosSysInfoString(a3[1]) )
  {
    return 2;
  }
  return v4;
}
