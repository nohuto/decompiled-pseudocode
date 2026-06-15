/*
 * XREFs of sub_140075AC8 @ 0x140075AC8
 * Callers:
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 * Callees:
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 */

__int64 __fastcall sub_140075AC8(DEVINSTID_W pDeviceID, PHKEY phkDevice)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  __int64 v5; // rdx
  CONFIGRET v7; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  DEVNODE pdnDevInst; // [rsp+48h] [rbp+10h] BYREF

  *phkDevice = 0LL;
  pdnDevInst = 0;
  v3 = CM_Locate_DevNodeW(&pdnDevInst, pDeviceID, 0);
  v4 = CM_MapCrToWin32Err(v3, 0x507u);
  if ( v4 )
  {
    v5 = 40LL;
    return sub_140059F90(
             retaddr,
             v5,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             v4);
  }
  v7 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, phkDevice, 1u);
  v4 = CM_MapCrToWin32Err(v7, 0x507u);
  if ( v4 )
  {
    v5 = 41LL;
    return sub_140059F90(
             retaddr,
             v5,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             v4);
  }
  return 0LL;
}
