/*
 * XREFs of ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225880
 * Callers:
 *     CTouchpadAcceleration_CreateInstance @ 0x140225A00 (CTouchpadAcceleration_CreateInstance.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CTouchpadAcceleration::CreateInstance(struct CDeviceAcceleration **a1, int a2)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  *a1 = 0LL;
  v4 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x63634164u);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 8) = 0;
    *(_OWORD *)(v4 + 16) = 0LL;
    *a1 = (struct CDeviceAcceleration *)v4;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_OWORD *)(v4 + 56) = 0LL;
    *(_OWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)v4 = &CTouchpadAcceleration::`vftable';
    *(_DWORD *)(v4 + 96) = a2;
    return 0LL;
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        14,
        11,
        (__int64)&WPP_a902e0985d9333582338082e4651e4a1_Traceguids);
    }
    return 3221225495LL;
  }
}
