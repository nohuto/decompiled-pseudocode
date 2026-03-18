/*
 * XREFs of ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14018C774
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F788C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

__int64 __fastcall CFrameIdGenerator::Initialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  _DWORD *v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  char v6; // di
  bool v7; // bl
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x43486970u);
  v5 = v3;
  v6 = 1;
  if ( v3 )
  {
    *v3 = 1;
    *((_QWORD *)v3 + 1) = 0LL;
    CEResourceLock::Initialize((CEResourceLock *)(v3 + 2));
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(UserSessionState + 16728) = v5;
  if ( v5 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(v8 + 69144),
      2,
      14,
      12,
      (__int64)&WPP_51e501ad297337bf06db4013da11b196_Traceguids);
  }
  return 3221225495LL;
}
