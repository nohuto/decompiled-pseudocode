/*
 * XREFs of ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192EE8
 * Callers:
 *     CTouchpadAcceleration_CreateInstance @ 0x1402240B0 (CTouchpadAcceleration_CreateInstance.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall CTouchpadAcceleration::CreateInstance(struct CDeviceAcceleration **a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

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
    v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        14,
        11,
        (__int64)&WPP_689b4b3ed46f34993055388a948daf5b_Traceguids);
    }
    return 3221225495LL;
  }
}
