/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTouchPadAAP @ 0x140108D30 (EtwTraceTouchPadAAP.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x140115600 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1401158EC (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14012B8DC (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x14012EF18 (-OnNewContact@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x140130614 (-IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x140141E80 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     EtwTraceTouchPadCurtainState @ 0x14014DB10 (EtwTraceTouchPadCurtainState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     TraceLoggingPTPWarpBack @ 0x14023F320 (TraceLoggingPTPWarpBack.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(CPTPProcessor *this, const struct PTPTelemetryOutput *a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // ebp
  int (*v15)(void); // rax
  __int64 v16; // rbx
  int v17; // edi
  __int64 UserSessionState; // rax
  int v19; // ecx

  if ( *(_DWORD *)a2 == 1 )
  {
    v19 = *((_DWORD *)a2 + 1);
    if ( v19 )
    {
      if ( v19 == 1 )
        EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), (__int64)a2, a3);
    }
    else
    {
      EtwTraceTouchPadAAP(
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6));
    }
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    v3 = *((_DWORD *)a2 + 1);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = (unsigned int)(v4 - 1);
        if ( (_DWORD)v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                v9 = (unsigned int)(v8 - 1);
                if ( (_DWORD)v9 )
                {
                  v10 = (unsigned int)(v9 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 4 )
                      MicrosoftTelemetryAssertTriggeredArgsKM(
                        "IXPTelAssert",
                        196610LL,
                        *((unsigned __int16 *)a2 + 4) | 0x3000000u);
                  }
                  else
                  {
                    v11 = *((_DWORD *)a2 + 7);
                    v12 = *(_QWORD *)((char *)a2 + 20);
                    v13 = *(_QWORD *)((char *)a2 + 12);
                    v14 = *((_DWORD *)a2 + 2);
                    v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, a2) + 48) + 7168LL);
                    if ( v15 && v15() >= 0 )
                      TraceLoggingPTPWarpBack(v14, v13, v12, v11);
                  }
                }
                else
                {
                  v16 = *(_QWORD *)((char *)a2 + 12);
                  v17 = *((_DWORD *)a2 + 2);
                  UserSessionState = W32GetUserSessionState(v9, a2);
                  if ( v17 )
                  {
                    if ( v17 == 1 )
                      *(_QWORD *)(UserSessionState + 12216) = v16;
                  }
                  else
                  {
                    *(_QWORD *)(UserSessionState + 12208) = v16;
                  }
                }
              }
              else
              {
                PTPTelemetry::Usage::IncrementTotalTime(*((unsigned int *)a2 + 2), *(_QWORD *)((char *)a2 + 12));
              }
            }
            else
            {
              PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2), (__int64)a2);
            }
          }
          else
          {
            PTPTelemetry::Usage::OnNewContact(*((_QWORD *)a2 + 1), (__int64)a2);
          }
        }
        else
        {
          PTPTelemetry::Usage::HandlePTPTelemetry(v5, (__int64)a2);
        }
      }
      else
      {
        PTPTelemetry::Usage::OnEndSession(*((_QWORD *)a2 + 1), (__int64)a2);
      }
    }
    else
    {
      PTPTelemetry::Usage::OnNewSession(*(LARGE_INTEGER *)((char *)a2 + 8), (__int64)a2);
    }
  }
}
