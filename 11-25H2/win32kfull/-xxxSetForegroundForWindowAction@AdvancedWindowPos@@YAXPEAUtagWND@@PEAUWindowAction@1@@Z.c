/*
 * XREFs of ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D96B8
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

void __fastcall AdvancedWindowPos::xxxSetForegroundForWindowAction(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  AdvancedWindowPos *v4; // rbx
  __int64 v5; // rdx
  char v6; // si
  char v7; // bl
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // si
  char v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  __int16 v18; // dx
  __int16 v19; // r8
  __int64 v20; // rdx
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v26; // [rsp+90h] [rbp+18h]

  v4 = this;
  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 18888) == *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) )
  {
    v6 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v7 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v6 = 0;
    }
    if ( v7 || v6 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        108,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  else
  {
    v11 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v12 = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)v4;
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v26;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v16,
        *(_QWORD *)(v14 + 69160),
        4,
        4,
        109,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v13);
      v4 = this;
    }
    v17 = *((_DWORD *)a2 + 1);
    v18 = 0;
    if ( (v17 & 4) != 0 || (*(_DWORD *)a2 & 8) != 0 )
      v18 = 4;
    v19 = v18 | 0x100;
    if ( (v17 & 0x2000) == 0 )
      v19 = v18;
    if ( !xxxSetForegroundWindowWithOptions((__int64)v4, 31LL, v19, 0) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v11 = 0;
      }
      v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69160),
          3,
          4,
          110,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
}
