/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x14028528C
 * Callers:
 *     NtUserLoadCursorsAndIcons @ 0x1402223E0 (NtUserLoadCursorsAndIcons.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall _LoadCursorsAndIcons(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 UserSessionState; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 *v18; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) == v1 )
  {
    HYDRA_HINT(0x4000LL, v3);
    v6 = 0LL;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36280); i; i = *(_QWORD *)(i + 32) )
    {
      v8 = (unsigned int)*(unsigned __int16 *)(i + 74) - 1;
      if ( *(_WORD *)(i + 74) == 1 )
      {
        if ( *(_QWORD *)(i + 48) == i )
        {
          v16 = *(unsigned __int16 *)(i + 64);
          if ( (unsigned int)(v16 - 100) > 0x12 || *(_QWORD *)(W32GetUserSessionState(v8, v7) + 552 * v16 - 33320) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 551);
          zzzInternalSetSystemCursor(i, (unsigned int)(v16 - 100), (const struct _UNICODE_STRING *)(i + 56), 0);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v10 = 552 * (*(unsigned __int16 *)(i + 64) - 100LL);
        v12 = *(unsigned __int16 *)(W32GetUserSessionState(v8, v7) + v10 + 32360);
        v13 = *(_DWORD *)(i + 80);
        *(_QWORD *)(i + 64) = v12;
        if ( (v13 & 4) != 0 )
        {
          UserSessionState = W32GetUserSessionState(v12, v11);
          v20[1] = i;
          v20[0] = v10 + UserSessionState + 32368;
          HMAssignmentLock(v20, 0LL);
        }
        else
        {
          v15 = *(_QWORD *)i;
          v8 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
          *(_QWORD *)(v8 + 6968) = v15;
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 35128) )
    {
      v18 = *(__int64 **)(W32GetUserSessionState(v18, v17) + 35128);
      v6 = *v18;
    }
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19872) + 6976LL) = v6;
  }
  return 1LL;
}
