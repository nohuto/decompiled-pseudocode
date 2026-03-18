/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1401DD114
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401DCCEC (rimAbIsPointInPenDeadzone.c)
 */

char __fastcall rimAbIsPointerSuppressedByPointer(__int64 a1, unsigned int *a2, __int64 a3, int *a4, char a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 UserSessionState; // rax
  int v14; // r8d

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    return 0;
  v10 = *a2;
  v11 = *a4;
  if ( (_DWORD)v10 == *a4 )
    return 0;
  if ( (_DWORD)v10 != 5 )
  {
    if ( v11 == 5 )
      return 0;
    if ( (a2[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 230);
    if ( (a4[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 231);
    if ( *a2 - 2 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 232);
    if ( (unsigned int)(*a4 - 2) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 233);
    if ( *a2 == *a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 234);
    UserSessionState = W32GetUserSessionState(v9, v10);
    switch ( *(_DWORD *)(UserSessionState + 244) )
    {
      case 1:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
          {
            v14 = 248;
            goto LABEL_44;
          }
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 243);
        break;
      case 2:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 275);
          if ( *a4 != 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 276);
          if ( (a2[3] & 4) == 0 )
            return (unsigned int)rimAbIsPointInPenDeadzone(a3, (__int64)a4, a1, (__int64)a2) == 0;
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 257);
        if ( (a4[3] & 4) == 0 )
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        break;
      case 3:
        if ( *a2 == 2 )
        {
          if ( *a4 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 298);
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        }
        if ( *a2 != 3 )
        {
          v14 = 309;
          goto LABEL_44;
        }
        return 0;
      default:
        v14 = 317;
LABEL_44:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v14);
        return 0;
    }
    return 1;
  }
  if ( v11 == 5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 216);
  return a5 ^ 1;
}
