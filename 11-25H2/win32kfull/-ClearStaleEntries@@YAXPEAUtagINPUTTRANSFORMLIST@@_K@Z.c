/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x14011A3D8
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14011A154 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14011AE7C (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x14011AEB8 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2)
{
  char *v2; // rsi
  char *v4; // rdi
  char *i; // rcx
  char *j; // r14
  __int64 v7; // rcx
  bool v8; // al
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bp
  bool v14; // bl
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+38h] [rbp-50h]
  bool v22; // [rsp+90h] [rbp+8h]
  bool v23; // [rsp+A0h] [rbp+18h]

  v2 = (char *)a1 + 8;
  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( v4 != (char *)a1 + 8 && v4 != *((char **)a1 + 2) )
  {
    if ( gqpcAgeLimit )
    {
      for ( i = *(char **)v4; i != v2 && a2 - *((_QWORD *)v4 + 2) <= gqpcAgeLimit; i = *(char **)i )
        v4 = i;
      for ( j = *(char **)v4; *(char **)v4 != v2; j = *(char **)v4 )
      {
        v7 = *(_QWORD *)&WPP_GLOBAL_Control;
        v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v22 = v8;
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v9 = *((_QWORD *)j + 2);
          LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          UserSessionState = W32GetUserSessionState(v7, a2);
          LOBYTE(v11) = v23;
          LOBYTE(v12) = v22;
          WPP_RECORDER_AND_TRACE_SF_i(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v12,
            v11,
            *(_QWORD *)(UserSessionState + 69160),
            v18,
            v19,
            v20,
            v21,
            v9);
        }
        EtwTraceTransformAgeDecay(a1, *((_QWORD *)j + 2));
        FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)j);
        *((_DWORD *)a1 + 22) |= 2u;
      }
    }
    else
    {
      v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(v15 + 69160),
          4,
          20,
          11,
          (__int64)&WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids);
      }
    }
  }
}
