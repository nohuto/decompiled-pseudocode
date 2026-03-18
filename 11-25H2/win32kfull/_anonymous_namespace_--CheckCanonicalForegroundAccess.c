/*
 * XREFs of _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018DBC4
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsForegroundLocked @ 0x14018E0E8 (IsForegroundLocked.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall anonymous_namespace_::CheckCanonicalForegroundAccess(__int64 a1, __int64 a2)
{
  char v2; // di
  struct tagTHREADINFO *v3; // r14
  const struct tagPROCESSINFO **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  char v8; // r15
  bool v9; // r12
  char v10; // di
  char ThreadId; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r15
  bool v21; // di
  int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  bool v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  const struct tagPROCESSINFO *v38; // rdx
  char v39; // r14
  bool v40; // r15
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int16 v44; // [rsp+30h] [rbp-48h]
  __int16 v45; // [rsp+30h] [rbp-48h]

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  v4 = (const struct tagPROCESSINFO **)((char *)v3 + 464);
  if ( !(unsigned int)IsForegroundLocked()
    || (v38 = *(const struct tagPROCESSINFO **)(W32GetUserSessionState(v6, v5) + 18832), *v4 == v38) )
  {
    v7 = 1;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0) & 0xC) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v8 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0);
        ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v3);
        UserSessionState = W32GetUserSessionState(v13, v12);
        LOBYTE(v15) = v9;
        LOBYTE(v16) = v8;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          2,
          22,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
          ThreadId,
          v10 & 0xC);
      }
      return 1;
    }
    if ( !tagTHREADINFO::ComputeAndTestForegroundActivate(v3) )
    {
      if ( CanForceForeground(*v4) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v20 = 0;
        }
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = *(_DWORD *)(*((_QWORD *)v3 + 58) + 56LL);
          v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
          LOBYTE(v24) = v21;
          LOBYTE(v25) = v20;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(v23 + 69160),
            4,
            2,
            23,
            (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
            v22);
        }
        return 1;
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18904) )
      {
        v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18904);
        if ( *(_DWORD *)(v28 + 672) <= 0x400u && (*(_DWORD *)(v28 + 688) & 0x40) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v39 = 0;
          }
          v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
            LOBYTE(v42) = v40;
            LOBYTE(v43) = v39;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(v41 + 69160),
              4,
              2,
              114,
              (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v29 = 0;
          }
          v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 1;
          v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
          v44 = 24;
          goto LABEL_26;
        }
      }
      if ( (v2 & 4) == 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v7 = 0;
        }
        v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        v45 = 26;
        goto LABEL_33;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        v44 = 25;
LABEL_26:
        LOBYTE(v33) = v30;
        LOBYTE(v32) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v32,
          v33,
          *(_QWORD *)(v31 + 69160),
          4,
          2,
          v44,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
      }
    }
    return 1;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0;
  v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v38);
  v45 = 21;
LABEL_33:
  LOBYTE(v37) = v34;
  LOBYTE(v36) = v7;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v36,
    v37,
    *(_QWORD *)(v35 + 69160),
    4,
    2,
    v45,
    (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  return 0;
}
