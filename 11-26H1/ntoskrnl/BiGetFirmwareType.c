/*
 * XREFs of BiGetFirmwareType @ 0x1409D4680
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140892D1C (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x1409D39D8 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409D472C (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetFirmwareType(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v5 = 0LL;
  if ( WheapPfaLock.SavedApcStateFill[8] )
  {
    v2 = dword_140E0EF68;
  }
  else
  {
    v2 = 1;
    if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v4) >= 0 )
    {
      v2 = 0;
      qword_140E61F68 = *((_QWORD *)&v5 + 1);
      if ( (int)v5 < 3 )
        v2 = v5;
    }
    dword_140E0EF68 = v2;
    WheapPfaLock.SavedApcStateFill[8] = 1;
  }
  if ( a1 )
    *a1 = qword_140E61F68;
  return v2;
}
