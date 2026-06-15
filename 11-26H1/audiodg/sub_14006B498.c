/*
 * XREFs of sub_14006B498 @ 0x14006B498
 * Callers:
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 * Callees:
 *     sub_14001E9BC @ 0x14001E9BC (sub_14001E9BC.c)
 *     sub_14003F88C @ 0x14003F88C (sub_14003F88C.c)
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 */

__int64 __fastcall sub_14006B498(DEVINSTID_W pDeviceID, GUID *rguid)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  CONFIGRET v6; // eax
  signed int v7; // eax
  signed int v8; // ebx
  HKEY hKey[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  DEVINST dnDevNode; // [rsp+68h] [rbp+20h] BYREF

  dnDevNode = 0;
  v3 = CM_Locate_DevNodeW(&dnDevNode, pDeviceID, 0);
  v4 = CM_MapCrToWin32Err(v3, 0x507u);
  if ( v4 )
    return sub_140059F90(retaddr, 519LL, (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v4);
  hKey[0] = 0LL;
  v6 = CM_Open_DevNode_Key(dnDevNode, 0x20019u, 0, 1u, hKey, 1u);
  v7 = CM_MapCrToWin32Err(v6, 0x507u);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v8 >= 0 )
    v8 = sub_14001E9BC(hKey[0], rguid);
  sub_14003F88C(hKey);
  return (unsigned int)v8;
}
