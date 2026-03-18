/*
 * XREFs of RIMIsWakeCapableDevice @ 0x140095FA0
 * Callers:
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x14017B9D8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 *     RIMHandleTTMDeviceInput @ 0x140211944 (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140096050 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMIsWakeCapableDevice(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edi
  char v3; // si
  int v4; // r8d
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  __int64 UserSessionState; // rax
  int WakeOnDeviceTypes; // eax
  int v10; // ecx

  if ( (*(_DWORD *)(a1 + 172) & 2) == 0 )
    return 0LL;
  v1 = RimDeviceTypeToRimInputType(a1, *(unsigned int *)(a1 + 48));
  v2 = 0;
  v3 = v1;
  v4 = (2 * (v1 & 1)) | 4;
  if ( (v1 & 2) == 0 )
    v4 = 2 * (v1 & 1);
  v5 = v4 | 8;
  if ( (v1 & 0x10) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (v1 & 4) == 0 )
    v6 = v5;
  v7 = v6 | 0x20;
  if ( (v1 & 8) == 0 )
    v7 = v6;
  UserSessionState = W32GetUserSessionState(v5, v6, v4);
  WakeOnDeviceTypes = CInputGlobals::GetWakeOnDeviceTypes(*(_QWORD *)(UserSessionState + 3056));
  v10 = v7 | 0x100;
  if ( (v3 & 0x20) == 0 )
    v10 = v7;
  LOBYTE(v2) = (WakeOnDeviceTypes & v10) != 0;
  return v2;
}
