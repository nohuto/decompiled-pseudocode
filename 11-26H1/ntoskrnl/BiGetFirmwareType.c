/*
 * XREFs of BiGetFirmwareType @ 0x1409A5660
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14089911C (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x1409A49B8 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetFirmwareType(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v5 = 0LL;
  if ( WheapPfaLock.SchedulerApcFill3[48] )
  {
    v2 = dword_140E0EFE8;
  }
  else
  {
    v2 = 1;
    if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
    {
      v2 = 0;
      *(_QWORD *)&stru_140E62450.PriorityFloorCounts[24] = *((_QWORD *)&v5 + 1);
      if ( (int)v5 < 3 )
        v2 = v5;
    }
    dword_140E0EFE8 = v2;
    WheapPfaLock.SchedulerApcFill3[48] = 1;
  }
  if ( a1 )
    *a1 = *(_QWORD *)&stru_140E62450.PriorityFloorCounts[24];
  return v2;
}
