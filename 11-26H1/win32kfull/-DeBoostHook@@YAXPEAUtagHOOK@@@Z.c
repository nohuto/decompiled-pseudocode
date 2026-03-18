/*
 * XREFs of ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDDd @ 0x140190E0C (WPP_RECORDER_AND_TRACE_SF_dDDd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x14019145C (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DeBoostHook(struct tagHOOK *a1)
{
  int v1; // eax
  unsigned int v3; // r14d
  __int64 v4; // rbp
  struct MOVESIZEDATA **v5; // rdx
  char v6; // r12
  char v7; // al
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct MOVESIZEDATA *v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdi
  struct _ERESOURCE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 Valid; // rcx
  char v26; // bl
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  bool v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // [rsp+A0h] [rbp+8h]
  char v38; // [rsp+A0h] [rbp+8h]
  bool v39; // [rsp+A8h] [rbp+10h]
  bool v40; // [rsp+A8h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 16);
  if ( (v1 & 0x1080) != 0 )
  {
    if ( (v1 & 0x2000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1561LL);
  }
  else
  {
    v3 = 0;
    if ( (v1 & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1565LL);
    v4 = *((_QWORD *)a1 + 2);
    --*((_BYTE *)a1 + 96);
    v5 = &WPP_GLOBAL_Control;
    v6 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v7 = 0;
    }
    v37 = v7;
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v4);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)(v4 + 456), v8);
      LOBYTE(v10) = v39;
      LOBYTE(v11) = v37;
      WPP_RECORDER_AND_TRACE_SF_dDDd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152));
      v5 = &WPP_GLOBAL_Control;
    }
    if ( !*((_BYTE *)a1 + 96) )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v13 = 0;
      }
      v38 = v13;
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        PsGetThreadId(*(PETHREAD *)v4);
        v15 = W32GetUserSessionState(*(_QWORD *)(v4 + 456), v14);
        LOBYTE(v16) = v40;
        LOBYTE(v17) = v38;
        WPP_RECORDER_AND_TRACE_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v17, v16, *(_QWORD *)(v15 + 69152));
      }
      *((_DWORD *)a1 + 16) &= ~0x2000u;
      v18 = *((int *)a1 + 12);
      v19 = *(struct _ERESOURCE **)(W32GetUserSessionState(v12, v5) + 42336);
      if ( !*(_DWORD *)(W32GetUserSessionState(v21, v20) + 19792)
        && (unsigned int)GET_USERCRIT_DISPOSITION(v23) != 2
        && (!IS_USERCRIT_OWNED_AT_ALL(v24, v22)
         || ExIsResourceAcquiredExclusiveLite(v19) != 1 && !ExIsResourceAcquiredSharedLite(v19)) )
      {
        __int2c();
      }
      Valid = *(_QWORD *)(*(_QWORD *)(v4 + 496) + 8 * v18 + 48);
      if ( Valid )
      {
        if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
          goto LABEL_36;
        while ( Valid )
        {
          if ( (struct tagHOOK *)Valid != a1 && *(_QWORD *)(Valid + 16) == v4 && (*(_DWORD *)(Valid + 64) & 0x2000) != 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v6 = 0;
            }
            v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              PsGetThreadId(*(PETHREAD *)v4);
              v34 = W32GetUserSessionState(*(_QWORD *)(v4 + 456), v33);
              LOBYTE(v35) = v32;
              LOBYTE(v36) = v6;
              WPP_RECORDER_AND_TRACE_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v36, v35, *(_QWORD *)(v34 + 69152));
            }
            return;
          }
LABEL_36:
          Valid = PhkNextValid(Valid, v22);
        }
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v26 = 0;
      }
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69152),
          4,
          5,
          46,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      v31 = *((_DWORD *)a1 + 12);
      if ( v31 != 13 )
      {
        v3 = -1;
        if ( v31 == 14 )
          v3 = 1;
      }
      tagTHREADINFO::ClearPriorityFloor(v4, v3);
    }
  }
}
