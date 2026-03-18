/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqqtq_EtwWriteTransfer @ 0x14013CEAC (McTemplateK0qqqtq_EtwWriteTransfer.c)
 *     ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013CF5C (-OnNewContact@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013CFB0 (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013D01C (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x14013D0CC (-IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x14013D13C (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 *     EtwTraceTouchPadCurtainState @ 0x14013D590 (EtwTraceTouchPadCurtainState.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14017A9A0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(CPTPProcessor *this, const struct PTPTelemetryOutput *a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // edi
  __int64 UserSessionState; // rax
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int v18; // ebp
  int (*v19)(void); // rax
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, __int64, __int64, _QWORD); // rax

  if ( *(_DWORD *)a2 == 1 )
  {
    v3 = *((_DWORD *)a2 + 1);
    if ( v3 )
    {
      if ( v3 == 1 )
        EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2));
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      McTemplateK0qqqtq_EtwWriteTransfer(
        0,
        (_DWORD)a2,
        a3,
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6));
    }
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
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
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = (unsigned int)(v10 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 4 )
                      MicrosoftTelemetryAssertTriggeredArgsKM(
                        "IXPTelAssert",
                        196610LL,
                        *((unsigned __int16 *)a2 + 4) | 0x2E90000u);
                  }
                  else
                  {
                    v15 = *((_DWORD *)a2 + 7);
                    v16 = *(_QWORD *)((char *)a2 + 20);
                    v17 = *(_QWORD *)((char *)a2 + 12);
                    v18 = *((_DWORD *)a2 + 2);
                    v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 6728LL);
                    if ( v19 )
                    {
                      if ( v19() >= 0 )
                      {
                        v21 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20)
                                                                                                  + 48)
                                                                                      + 6736LL);
                        if ( v21 )
                          v21(v18, v17, v16, v15);
                      }
                    }
                  }
                }
                else
                {
                  v12 = *(_QWORD *)((char *)a2 + 12);
                  v13 = *((_DWORD *)a2 + 2);
                  UserSessionState = W32GetUserSessionState(0, (_DWORD)a2, a3);
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                      *(_QWORD *)(UserSessionState + 12216) = v12;
                  }
                  else
                  {
                    *(_QWORD *)(UserSessionState + 12208) = v12;
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
              PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2));
            }
          }
          else
          {
            PTPTelemetry::Usage::OnNewContact(*((_QWORD *)a2 + 1));
          }
        }
        else
        {
          PTPTelemetry::Usage::HandlePTPTelemetry();
        }
      }
      else
      {
        PTPTelemetry::Usage::OnEndSession(*((_QWORD *)a2 + 1));
      }
    }
    else
    {
      PTPTelemetry::Usage::OnNewSession(*((_QWORD *)a2 + 1));
    }
  }
}
