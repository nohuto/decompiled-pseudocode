/*
 * XREFs of ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225744
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x140225990 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1401B43F4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

__int64 __fastcall CMouseAcceleration::CreateInstance(struct CDeviceAcceleration **a1, unsigned int a2)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  struct CDeviceAcceleration *v7; // rbx
  __int64 result; // rax
  bool v9; // di
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx

  *a1 = 0LL;
  v4 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x63634164u);
  v7 = (struct CDeviceAcceleration *)v4;
  if ( v4 )
  {
    *(_BYTE *)(v4 + 8) = 0;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_OWORD *)(v4 + 56) = 0LL;
    *(_OWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)v4 = &CMouseAcceleration::`vftable';
    *(_DWORD *)(v4 + 96) = a2;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_BYTE *)(v4 + 112) = 1;
    CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
      (CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v4 + 104),
      a2);
    result = 0LL;
    *a1 = v7;
  }
  else
  {
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        14,
        10,
        (__int64)&WPP_a902e0985d9333582338082e4651e4a1_Traceguids);
    }
    return 3221225495LL;
  }
  return result;
}
