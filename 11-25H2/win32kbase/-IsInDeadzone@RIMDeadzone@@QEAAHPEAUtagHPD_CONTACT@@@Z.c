/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1401EE07C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x14017F520 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x140161034 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1401EE324 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1401F5D30 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  __int64 v9; // rdx
  DeadzonePalmTelemetry *v10; // rcx
  unsigned int Angle; // r13d
  unsigned int v12; // r12d
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // edx
  DeadzonePalmTelemetry *v19; // rcx
  struct tagPOINT v21; // [rsp+60h] [rbp+8h]
  struct tagPOINT v22; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 572);
  v4 = 0;
  if ( (*((_DWORD *)a2 + 671) & 4) != 0 || (v5 = 1LL, (*((_DWORD *)a2 + 611) & 4) == 0) )
    v5 = 0LL;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v22.x = *((_DWORD *)a2 + 618) / 100;
        v22.y = *((_DWORD *)a2 + 619) / 100;
        v21.x = *((_DWORD *)this + 11) / 100;
        v21.y = *((_DWORD *)this + 12) / 100;
        v8 = (v22.x - v21.x) * (v22.x - v21.x) + (v22.y - v21.y) * (v22.y - v21.y);
        Angle = RIMDeadzone::_GetAngle(v22, v21);
        v12 = 0;
        if ( *((_DWORD *)this + 8) )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v12);
            UserSessionState = W32GetUserSessionState(v10, v9);
            if ( RIMDeadzone::_IsAngleWithinRange(Angle, *(_DWORD *)(UserSessionState + 272), v13) )
            {
              v15 = *((_QWORD *)this + 3);
              v16 = 0LL;
              if ( *(_DWORD *)(v15 + 24LL * v12 + 16) )
                break;
            }
LABEL_20:
            if ( ++v12 >= *((_DWORD *)this + 8) )
              return v4;
          }
          while ( 1 )
          {
            v17 = *(_QWORD *)(v15 + 24LL * v12 + 8);
            v9 = *(_DWORD *)(v17 + 8 * v16) / 0x64u * (*(_DWORD *)(v17 + 8 * v16) / 0x64u);
            if ( v8 >= (unsigned int)v9 )
            {
              v18 = *(_DWORD *)(v17 + 8 * v16 + 4) / 0x64u;
              v9 = v18 * v18;
              if ( v8 < (unsigned int)v9 )
                break;
            }
            if ( v5 )
            {
              v10 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v10 )
              {
                if ( v8 < 0x57E4 )
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v10, v8, Angle, 0);
              }
            }
            v15 = *((_QWORD *)this + 3);
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 24LL * v12 + 16) )
              goto LABEL_20;
          }
          v4 = 1;
          if ( v5 )
          {
            v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v19 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v8, Angle, 1);
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
