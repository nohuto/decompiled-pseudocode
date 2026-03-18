/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x1401E51B0
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D388 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CE420 (DrvGetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // di
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  signed int v14; // eax
  signed int v15; // ecx
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0;
  v18 = 0;
  v2 = a2;
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, 0LL) + 56968) + 104LL);
  if ( (int)DrvGetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 80), &v17, &v18, 0LL, 0LL) < 0
    && ((v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968), v2 == *(_QWORD *)(v7 + 104))
     || (v8 = W32GetUserSessionState(v7, v6),
         (int)DrvGetMonitorPhysicalDimensions(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 56968) + 104LL) + 80LL),
                &v17,
                &v18,
                0LL,
                0LL) < 0)) )
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        16,
        (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    }
  }
  else
  {
    v14 = 1000 * v17;
    v15 = 1000 * v18;
    *(_DWORD *)(a1 + 8) = 1000 * v17;
    *(_DWORD *)(a1 + 12) = v15;
    if ( v14 <= 0 || v15 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  return a1;
}
