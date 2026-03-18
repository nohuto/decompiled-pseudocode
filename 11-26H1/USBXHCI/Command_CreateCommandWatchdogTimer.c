/*
 * XREFs of Command_CreateCommandWatchdogTimer @ 0x140073764
 * Callers:
 *     Command_Create @ 0x140073580 (Command_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_CreateCommandWatchdogTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int v4; // r8d
  char v5; // r9
  int v6; // edx
  int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-9h] BYREF
  __int128 v10; // [rsp+40h] [rbp+7h]
  __int64 v11; // [rsp+50h] [rbp+17h]
  __int128 v12; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+68h] [rbp+2Fh]
  __int128 v14; // [rsp+78h] [rbp+3Fh]
  __int64 v15; // [rsp+88h] [rbp+4Fh]

  DWORD1(v9) = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v12) = -1;
    else
      LODWORD(v12) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v12) = 56;
  }
  v2 = a1[1];
  *((_QWORD *)&v13 + 1) = 0x100000001LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( Controller_IsSecureDevice(v2) )
  {
    v11 = 0LL;
    if ( v3 )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v9) = v4;
      else
        LODWORD(v9) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v9) = 40;
    }
    LODWORD(v10) = 0;
    DWORD2(v13) = 2;
  }
  else
  {
    v11 = 0LL;
    if ( v3 )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v9) = v4;
      else
        LODWORD(v9) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v9) = 40;
    }
    LODWORD(v10) = 1000;
  }
  *((_QWORD *)&v9 + 1) = Command_WdfEvtWatchdogTimerFunction;
  *(_QWORD *)&v14 = *a1;
  BYTE4(v10) = v5;
  DWORD2(v10) = 500;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, _QWORD *))(WdfFunctions_01033 + 2544))(
         WdfDriverGlobals,
         &v9,
         &v12,
         a1 + 3);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v6,
      7,
      12,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
