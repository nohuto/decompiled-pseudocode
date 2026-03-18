/*
 * XREFs of ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192E00
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x140224040 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x140223DEC (--0CMouseAcceleration@@IEAA@I@Z.c)
 */

__int64 __fastcall CMouseAcceleration::CreateInstance(struct CDeviceAcceleration **a1, unsigned int a2)
{
  CMouseAcceleration *v4; // rax
  __int64 v5; // rdx
  struct CDeviceAcceleration *v6; // rax
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  *a1 = 0LL;
  v4 = (CMouseAcceleration *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x63634164u);
  if ( v4 && (v6 = CMouseAcceleration::CMouseAcceleration(v4, a2)) != 0LL )
  {
    *a1 = v6;
    return 0LL;
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        14,
        10,
        (__int64)&WPP_689b4b3ed46f34993055388a948daf5b_Traceguids);
    }
    return 3221225495LL;
  }
}
