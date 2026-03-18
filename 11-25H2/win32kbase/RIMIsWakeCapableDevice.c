/*
 * XREFs of RIMIsWakeCapableDevice @ 0x1400991E8
 * Callers:
 *     RIMIsInputSuppressed @ 0x140035E74 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x140180708 (RIMSetDeviceInputMode.c)
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E74E8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1401F6924 (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140099290 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMIsWakeCapableDevice(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edi
  char v3; // si
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
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
  v6 = (unsigned int)v5 | 0x10;
  if ( (v1 & 4) == 0 )
    v6 = (unsigned int)v5;
  v7 = v6 | 0x20;
  if ( (v1 & 8) == 0 )
    v7 = v6;
  UserSessionState = W32GetUserSessionState(v5, v6);
  WakeOnDeviceTypes = CInputGlobals::GetWakeOnDeviceTypes(*(_QWORD *)(UserSessionState + 3056));
  v10 = v7 | 0x100;
  if ( (v3 & 0x20) == 0 )
    v10 = v7;
  LOBYTE(v2) = (WakeOnDeviceTypes & v10) != 0;
  return v2;
}
