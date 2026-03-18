/*
 * XREFs of ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14021B070
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401B5C70 (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

__int64 __fastcall CFrameIdGenerator::Initialize(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rsi
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  _DWORD *v7; // rbx
  char v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x43486970u);
  v7 = v4;
  v8 = 1;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *v4 = 1;
    CEResourceLock::Initialize((CEResourceLock *)(v4 + 2));
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(UserSessionState + 16720) = v7;
  if ( v7 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(v10 + 69136),
      2,
      14,
      12,
      (__int64)&WPP_0539362c288c3a963381b4e36ac00da1_Traceguids);
  }
  return 3221225495LL;
}
