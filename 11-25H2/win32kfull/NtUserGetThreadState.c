/*
 * XREFs of NtUserGetThreadState @ 0x1402988F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x14001FFE0 (_GetQueueStatus.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  __int64 *v13; // rax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  HANDLE v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx

  if ( a1 == 14 )
    return 1LL;
  v3 = EnterSharedCrit(0LL, 1LL);
  v6 = 0LL;
  v7 = (_QWORD *)v3;
  if ( a1 > 7 )
  {
    v14 = a1 - 8;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 == 2 )
                  v6 = (*(_DWORD *)(v3 + 1360) >> 29) & 1;
              }
              else
              {
                v20 = *(HANDLE *)(W32GetUserSessionState(v5, v4) + 63544);
                v6 = 1;
                if ( PsGetCurrentProcessId() != v20 )
                {
                  v5 = *(_QWORD *)(W32GetUserSessionState(v5, v21) + 62976);
                  if ( v7[62] != v5 )
                    v6 = 0;
                }
              }
            }
            else
            {
              v6 = *(_QWORD *)(v3 + 840);
            }
          }
          else
          {
            v6 = *(unsigned int *)(*(_QWORD *)(v3 + 464) + 760LL);
          }
        }
        else
        {
          v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888);
          LOBYTE(v6) = v7[59] == v5;
        }
      }
      else
      {
        v6 = *(int *)(v3 + 608);
      }
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 552);
      if ( v5 )
      {
        if ( *(_QWORD *)(v5 + 32) )
        {
          v22 = 1LL;
        }
        else
        {
          v22 = 4LL;
          if ( (*(_DWORD *)(v5 + 84) & 0x300) == 0 )
            v22 = 2LL;
        }
        v6 = v22 | 8;
        if ( (*(_DWORD *)(v5 + 84) & 1) == 0 )
          v6 = v22;
      }
    }
    goto LABEL_47;
  }
  if ( a1 != 7 )
  {
    if ( a1 )
    {
      v8 = a1 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                if ( v12 == 1 )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 8811);
                  v6 = *(int *)(v7[61] + 4LL);
                }
              }
              else
              {
                LOBYTE(v6) = (GetQueueStatus(7295LL, v4) & 5) != 0;
              }
              goto LABEL_47;
            }
            v13 = *(__int64 **)(v3 + 832);
          }
          else
          {
            v13 = *(__int64 **)(v3 + 824);
          }
          if ( v13 )
            v6 = *v13;
          goto LABEL_47;
        }
        v5 = *(_QWORD *)(*(_QWORD *)(v3 + 472) + 112LL);
      }
      else
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v3 + 472) + 128LL);
      }
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 472) + 120LL);
    }
    if ( v5 )
      v6 = *(_QWORD *)v5;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 472) + 424LL);
LABEL_47:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
