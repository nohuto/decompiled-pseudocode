/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x140205BA0
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401F7CE0 (DrvGetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  bool v12; // di
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  signed int v17; // eax
  signed int v18; // ecx
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v20 = 0;
  v21 = 0;
  v3 = a2;
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, 0, a3) + 56968) + 96LL);
  if ( (int)DrvGetMonitorPhysicalDimensions(*(_QWORD *)(v3 + 80), &v20, &v21, 0LL, 0LL) < 0
    && ((v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 56968), v3 == *(_QWORD *)(v9 + 96))
     || (v11 = W32GetUserSessionState(v9, v8, v10),
         (int)DrvGetMonitorPhysicalDimensions(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 56968) + 96LL) + 80LL),
                &v20,
                &v21,
                0LL,
                0LL) < 0)) )
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        16,
        (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    }
  }
  else
  {
    v17 = 1000 * v20;
    v18 = 1000 * v21;
    *(_DWORD *)(a1 + 8) = 1000 * v20;
    *(_DWORD *)(a1 + 12) = v18;
    if ( v17 <= 0 || v18 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  return a1;
}
