/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800243E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x18001F2CC (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18002456C (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180043E7C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180044400 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800446EC (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180044790 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180044AB8 (-TsSessionIdTerminate@@YAJK@Z.c)
 */

void __fastcall TS_SessionChanged(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // edi
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v17; // [rsp+60h] [rbp+17h]
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  _DWORD *v20; // [rsp+70h] [rbp+27h]
  __int64 v21; // [rsp+78h] [rbp+2Fh]
  int *v22; // [rsp+80h] [rbp+37h]
  __int64 v23; // [rsp+88h] [rbp+3Fh]

  dwSessionId = a2->dwSessionId;
  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u && (*((_DWORD *)v4 + 4) & 0x20000) != 0 )
  {
    v5 = *((_QWORD *)v4 + 3) & 0x20000LL;
    if ( v5 == *((_QWORD *)v4 + 3) )
    {
      v23 = 4LL;
      v22 = &v13;
      v21 = 4LL;
      v20 = v14;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = *((_QWORD *)v4 + 1);
      EventDescriptor.Keyword = 0x20000LL;
      v13 = a1;
      v14[0] = dwSessionId;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v17 = &unk_18005B089;
      UserData.Reserved = 2;
      v18 = 47;
      v19 = 1;
      v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_19;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_14:
    TsSessionIdDisconnect(dwSessionId);
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_19:
    TsSessionIdConnect(dwSessionId);
    return;
  }
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_14;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 == 3 )
          TsSessionIdTerminate(dwSessionId);
      }
      else
      {
        QueueVolumeRefreshForAllTsSessions();
      }
    }
    else
    {
      TsSessionIdLogoff(dwSessionId);
    }
  }
  else
  {
    UpdateGlobalUserPresenceState(v5);
    TsSessionIdLogon(dwSessionId);
  }
}
