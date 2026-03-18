/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x140202E5C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x140202D28 (rimAbIsPointInPenDeadzone.c)
 */

char __fastcall rimAbIsPointerSuppressedByPointer(__int64 a1, int *a2, __int64 a3, int *a4, char a5)
{
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  __int64 UserSessionState; // rax
  int v15; // r8d

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 244) )
    return 0;
  v11 = *a4;
  v12 = *a2;
  if ( *a2 == *a4 )
    return 0;
  if ( v12 != 5 )
  {
    if ( v11 == 5 )
      return 0;
    if ( (a2[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 230);
    if ( (a4[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 231);
    if ( (unsigned int)(*a2 - 2) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 232);
    if ( *a4 != 3 && *a4 != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 233);
    if ( *a2 == *a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 234);
    UserSessionState = W32GetUserSessionState(v9, v12, v10);
    switch ( *(_DWORD *)(UserSessionState + 244) )
    {
      case 1:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
          {
            v15 = 248;
            goto LABEL_45;
          }
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 243);
        break;
      case 2:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 275);
          if ( *a4 != 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 276);
          if ( (a2[3] & 4) == 0 )
            return (unsigned int)rimAbIsPointInPenDeadzone(a3, (__int64)a4, a1, (__int64)a2) == 0;
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 257);
        if ( (a4[3] & 4) == 0 )
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        break;
      case 3:
        if ( *a2 == 2 )
        {
          if ( *a4 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 298);
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        }
        if ( *a2 != 3 )
        {
          v15 = 309;
          goto LABEL_45;
        }
        return 0;
      default:
        v15 = 317;
LABEL_45:
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, v15);
        return 0;
    }
    return 1;
  }
  if ( v11 == 5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 216);
  return a5 ^ 1;
}
