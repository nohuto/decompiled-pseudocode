/*
 * XREFs of RIMInitializeDeadzone @ 0x14017F380
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14017F58C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimDestroyDeadzone @ 0x14017F5E4 (rimDestroyDeadzone.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMInitializeDeadzone(int a1, int a2, int a3)
{
  int v3; // edi
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  RIMDeadzone *v11; // rax
  int v12; // r8d
  RIMDeadzone *v13; // rbx
  int v14; // ecx
  CTouchProcessor **v15; // rdx
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // si
  bool v21; // bp
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 256) )
  {
    v29 = *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 256);
    ++*(_DWORD *)(v29 + 4);
  }
  else
  {
    v11 = (RIMDeadzone *)Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x7A645052u);
    v13 = v11;
    if ( v11 )
    {
      v3 = RIMDeadzone::Initialize(v11);
      if ( v3 < 0 )
      {
        v20 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v14 = *((_DWORD *)WPP_GLOBAL_Control + 11);
          if ( (v14 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v20 = 1;
        }
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(v14, (unsigned int)&WPP_GLOBAL_Control, v12);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v20;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 19368),
            3,
            1,
            13,
            (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
        }
        RIMDeadzone::Release(v13);
        rimDestroyDeadzone();
        GreDeleteFastMutex((char *)v13, v25, v26, v27);
        v13 = 0LL;
      }
    }
    else
    {
      v14 = (int)WPP_GLOBAL_Control;
      v15 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
      {
        LOBYTE(v3) = 1;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, v12);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v3;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 19368),
          3,
          1,
          12,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
      }
      v3 = -1073741801;
    }
    *(_QWORD *)(W32GetUserSessionState(v14, (_DWORD)v15, v12) + 256) = v13;
  }
  v31 = W32GetUserSessionState(v29, v28, v30);
  RIMUnlockExclusive(v31 + 40);
  return (unsigned int)v3;
}
