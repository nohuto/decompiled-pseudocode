/*
 * XREFs of ?ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D58F0
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

char __fastcall AdvancedWindowPos::ShouldCallShellForAction(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  __int64 v5; // rdx
  char v6; // r14
  char v7; // si
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  char v12; // di
  char v13; // si
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // eax
  struct CHECKPOINT *IfValid; // rax
  char v19; // al
  char v20; // r13
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  struct CHECKPOINT *v24; // rax
  __int16 v25; // [rsp+30h] [rbp-38h]
  char v26; // [rsp+78h] [rbp+10h]

  v5 = *(unsigned int *)a2;
  if ( (v5 & 0x166) != 0 || (*((_DWORD *)a2 + 1) & 0x40) != 0 )
  {
    v12 = 1;
    if ( (v5 & 0x20) != 0 )
    {
      v17 = *((_DWORD *)a2 + 10);
      if ( v17 == 2 )
      {
        if ( (*((_DWORD *)a2 + 1) & 0x40) == 0 && ((*((_DWORD *)a2 + 1) & 0x30) != 0 || !IsArranged(this)) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v13 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v12 = 0;
          }
          if ( !v13 && !v12 )
            return 0;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          v25 = 123;
          goto LABEL_123;
        }
      }
      else if ( v17 )
      {
        if ( v17 == 1 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v13 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v12 = 0;
          }
          if ( !v13 && !v12 )
            return 0;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          v25 = 126;
          goto LABEL_123;
        }
      }
      else
      {
        IfValid = CHECKPOINT::GetIfValid(this);
        if ( !IfValid || (*((_DWORD *)IfValid + 4) & 8) == 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v13 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v12 = 0;
          }
          if ( !v13 && !v12 )
            return 0;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          v25 = 125;
          goto LABEL_123;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v19 = 0;
        }
        v26 = v19;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v20 = 0;
        }
        if ( v19 || v20 )
        {
          v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v26;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v23,
            v22,
            *(_QWORD *)(v21 + 69160),
            5,
            4,
            124,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
      }
    }
    else
    {
      v24 = CHECKPOINT::GetIfValid(this);
      if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 && v24 && (*((_DWORD *)v24 + 4) & 8) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x100) == 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v13 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v12 = 0;
          }
          if ( !v13 && !v12 )
            return 0;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          v25 = 127;
          goto LABEL_123;
        }
      }
      else if ( !IsArranged(this) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v13 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v12 = 0;
        }
        if ( !v13 && !v12 )
          return 0;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
        v25 = 128;
        goto LABEL_123;
      }
    }
    if ( (*(_DWORD *)a2 & 6) == 0 )
      return 1;
    if ( (*(_DWORD *)a2 & 6) != 6 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v13 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v12 = 0;
      }
      if ( !v13 && !v12 )
        return 0;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      v25 = 129;
      goto LABEL_123;
    }
    if ( (*(_DWORD *)a2 & 0x100) != 0 )
      return 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v13 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v12 = 0;
    }
    if ( !v13 && !v12 )
      return 0;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    v25 = 130;
LABEL_123:
    LOBYTE(v16) = v12;
    LOBYTE(v15) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      v25,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    return 0;
  }
  if ( (v5 & 0x20) != 0 && *((_DWORD *)a2 + 10) == 3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v7 = 0;
    }
    if ( v6 || v7 )
    {
      v8 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(v8 + 69160),
        5,
        4,
        121,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    return 1;
  }
  v12 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v13 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v12 = 0;
  }
  if ( v13 || v12 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    v25 = 122;
    goto LABEL_123;
  }
  return 0;
}
