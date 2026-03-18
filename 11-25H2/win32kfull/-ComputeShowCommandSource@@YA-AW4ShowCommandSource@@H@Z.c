/*
 * XREFs of ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1401F642C
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

__int64 __fastcall ComputeShowCommandSource(int a1, __int64 a2)
{
  char v2; // di
  int v3; // ecx
  int v4; // ecx
  bool v5; // bl
  bool v6; // si
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // bl
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bl
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  v2 = a1;
  if ( a1 <= 8 )
  {
    if ( a1 != 8 )
    {
      a2 = (unsigned int)a1;
      if ( !a1 )
        goto LABEL_4;
      a2 = (unsigned int)(a1 - 1);
      if ( a1 != 1 )
      {
        a2 = (unsigned int)(a1 - 2);
        if ( a1 != 2 )
        {
          a2 = (unsigned int)(a1 - 3);
          if ( a1 == 3 )
            goto LABEL_45;
          a2 = (unsigned int)(a1 - 4);
          if ( a1 == 4 )
            goto LABEL_45;
          a2 = (unsigned int)(a1 - 5);
          if ( a1 == 5 )
            goto LABEL_45;
          a2 = (unsigned int)(a1 - 6);
          if ( (unsigned int)a2 >= 2 )
          {
LABEL_25:
            v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
              LOBYTE(v18) = v16;
              LOBYTE(v19) = v15;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v19,
                v18,
                *(_QWORD *)(UserSessionState + 69160),
                4,
                12,
                13,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                v2,
                0);
            }
            return 0LL;
          }
        }
LABEL_4:
        v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v7 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
          LOBYTE(v8) = v6;
          LOBYTE(v9) = v5;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v9,
            v8,
            *(_QWORD *)(v7 + 69160),
            4,
            12,
            11,
            (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
            v2,
            2);
        }
        return 2LL;
      }
    }
LABEL_45:
    v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        4,
        12,
        10,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        v2,
        4);
    }
    return 4LL;
  }
  v3 = a1 - 9;
  if ( !v3 )
    goto LABEL_45;
  v4 = v3 - 2;
  if ( !v4 )
    goto LABEL_4;
  v11 = v4 - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 1) >= 2 )
            goto LABEL_25;
        }
      }
    }
  }
  v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(v22 + 69160),
      4,
      12,
      12,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      v2,
      3);
  }
  return 3LL;
}
