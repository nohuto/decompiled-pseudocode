/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x14023921C
 * Callers:
 *     NtUserLoadCursorsAndIcons @ 0x1402391E0 (NtUserLoadCursorsAndIcons.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall _LoadCursorsAndIcons(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) == v1 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    *(_DWORD *)(UserSessionState + 68928) |= 0x4000u;
    v9 = 0LL;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36312); i; i = *(_QWORD *)(i + 32) )
    {
      v11 = (unsigned int)*(unsigned __int16 *)(i + 74) - 1;
      if ( *(_WORD *)(i + 74) == 1 )
      {
        if ( *(_QWORD *)(i + 48) == i )
        {
          v13 = *(unsigned __int16 *)(i + 64);
          if ( (unsigned int)(v13 - 100) > 0x12 || *(_QWORD *)(W32GetUserSessionState(v11, v10) + 552 * v13 - 33288) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 552LL);
          zzzInternalSetSystemCursor(i, v13 - 100, (const struct _UNICODE_STRING *)(i + 56), 0);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v16 = *(unsigned __int16 *)(i + 64);
        v17 = W32GetUserSessionState(v11, v10);
        v19 = 552 * v16;
        *(_QWORD *)(i + 64) = *(unsigned __int16 *)(v17 + 552 * v16 - 22808);
        if ( (*(_DWORD *)(i + 80) & 4) != 0 )
        {
          v20 = W32GetUserSessionState(v19, v18);
          v22[1] = i;
          v22[0] = 552 * v16 + v20 - 22800;
          HMAssignmentLock(v22, 0LL);
        }
        else
        {
          v21 = *(_QWORD *)i;
          v11 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904);
          *(_QWORD *)(v11 + 6968) = v21;
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v11, v10) + 35160) )
    {
      v15 = *(__int64 **)(W32GetUserSessionState(v15, v14) + 35160);
      v9 = *v15;
    }
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904) + 6976LL) = v9;
  }
  return 1LL;
}
