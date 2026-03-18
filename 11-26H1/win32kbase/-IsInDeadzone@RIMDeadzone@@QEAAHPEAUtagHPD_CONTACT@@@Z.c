/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x14020C704
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1401417DC (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     RIMIsPointerDownTransition @ 0x14013770C (RIMIsPointerDownTransition.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1401A647C (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x14020C99C (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x140210DC8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // ebp
  BOOL v5; // eax
  int v6; // ecx
  BOOL v7; // r12d
  int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // edx
  DeadzonePalmTelemetry *v11; // rcx
  __int64 v12; // r8
  unsigned int Angle; // r13d
  unsigned int i; // r14d
  __int64 v15; // rbx
  __int64 UserSessionState; // rax
  __int64 j; // rbx
  __int64 v18; // rax
  DeadzonePalmTelemetry *v19; // rcx
  struct tagPOINT v21; // [rsp+60h] [rbp+8h]
  struct tagPOINT v22; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 572);
  v4 = 0;
  v5 = RIMIsPointerDownTransition(*((_DWORD *)a2 + 671), *((_DWORD *)a2 + 611));
  v6 = *((_DWORD *)this + 4);
  v7 = v5;
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v22.x = *((_DWORD *)a2 + 618) / 100;
        v22.y = *((_DWORD *)a2 + 619) / 100;
        v21.x = *((_DWORD *)this + 11) / 100;
        v21.y = *((_DWORD *)this + 12) / 100;
        v9 = (v22.x - v21.x) * (v22.x - v21.x) + (v22.y - v21.y) * (v22.y - v21.y);
        Angle = RIMDeadzone::_GetAngle(v22, v21);
        for ( i = 0; i < *((_DWORD *)this + 8); ++i )
        {
          v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * i);
          UserSessionState = W32GetUserSessionState((_DWORD)v11, v10, v12);
          if ( RIMDeadzone::_IsAngleWithinRange(Angle, *(_DWORD *)(UserSessionState + 272), v15) )
          {
            for ( j = 0LL; ; j = (unsigned int)(j + 1) )
            {
              v18 = *((_QWORD *)this + 3);
              if ( (unsigned int)j >= *(_DWORD *)(v18 + 24LL * i + 16) )
                break;
              v12 = *(_QWORD *)(v18 + 24LL * i + 8);
              v10 = *(_DWORD *)(v12 + 8 * j) / 0x64u * (*(_DWORD *)(v12 + 8 * j) / 0x64u);
              if ( v9 >= v10 )
              {
                v10 = *(_DWORD *)(v12 + 8 * j + 4) / 0x64u * (*(_DWORD *)(v12 + 8 * j + 4) / 0x64u);
                if ( v9 < v10 )
                {
                  v4 = 1;
                  if ( v7 )
                  {
                    v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
                    if ( v19 )
                      DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v9, Angle, 1);
                  }
                  return v4;
                }
              }
              if ( v7 )
              {
                v11 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
                if ( v11 )
                {
                  if ( v9 < 0x57E4 )
                    DeadzonePalmTelemetry::UpdateTelemetryBuffer(v11, v9, Angle, 0);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 309));
    }
  }
  return v4;
}
