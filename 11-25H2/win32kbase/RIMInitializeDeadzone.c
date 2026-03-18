/*
 * XREFs of RIMInitializeDeadzone @ 0x140127470
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14012767C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimDestroyDeadzone @ 0x140127A78 (rimDestroyDeadzone.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x140127BE0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMInitializeDeadzone(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  RIMDeadzone *v8; // rax
  __int64 v9; // rdx
  RIMDeadzone *v10; // rbx
  _UNKNOWN **v11; // rcx
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  _UNKNOWN **v16; // rcx
  bool v17; // si
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 256) )
  {
    v23 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 256);
    ++*(_DWORD *)(v23 + 4);
  }
  else
  {
    v8 = (RIMDeadzone *)Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x7A645052u);
    v10 = v8;
    if ( v8 )
    {
      v2 = RIMDeadzone::Initialize(v8);
      if ( v2 < 0 )
      {
        v16 = &WPP_GLOBAL_Control;
        v17 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v16 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( ((unsigned __int8)v16 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v17 = 1;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState(v16, v9);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 19336),
            3,
            1,
            13,
            (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
        }
        RIMDeadzone::Release(v10);
        rimDestroyDeadzone();
        GreDeleteFastMutex((char *)v10);
        v10 = 0LL;
      }
    }
    else
    {
      v11 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
      {
        v11 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( ((unsigned __int8)v11 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          LOBYTE(v2) = 1;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(v11, v9);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v2;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 19336),
          3,
          1,
          12,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
      }
      v2 = -1073741801;
    }
    *(_QWORD *)(W32GetUserSessionState(v11, v9) + 256) = v10;
  }
  v24 = W32GetUserSessionState(v23, v22);
  RIMUnlockExclusive(v24 + 40);
  return (unsigned int)v2;
}
