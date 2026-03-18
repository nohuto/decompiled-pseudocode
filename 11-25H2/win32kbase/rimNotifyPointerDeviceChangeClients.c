/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1401E6368
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1401E6560 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetPostPointerEventMessage @ 0x140197520 (ApiSetPostPointerEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, unsigned int *a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char v13; // bp
  bool v14; // r14
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  unsigned int result; // eax

  v8 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 313);
  v9 = a3[26];
  if ( a1[498] != (_DWORD)v9 )
  {
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        v9 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == 1 )
            v8 = 32;
          else
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 336);
        }
        else
        {
          v8 = 16;
        }
      }
      else
      {
        v8 = 8;
      }
    }
    else
    {
      v8 = 4;
    }
  }
  v10 = a3[27];
  if ( a1[499] != v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v8 |= 0x800u;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v13 = 0;
          }
          v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
            LOBYTE(v16) = v14;
            LOBYTE(v17) = v13;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v17,
              v16,
              *(_QWORD *)(UserSessionState + 19336),
              3,
              1,
              10,
              (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
          }
        }
      }
      else
      {
        v8 |= 0x40u;
      }
    }
    else
    {
      v8 |= 0x80u;
    }
  }
  if ( a1[501] != a3[29] || a1[502] != a3[30] )
    v8 |= 0x400u;
  if ( a1[503] != a3[31] || a1[504] != a3[32] )
    v8 |= 0x200u;
  result = v8 | 0x100;
  if ( !a4 )
    result = v8;
  if ( result )
    return (unsigned int)ApiSetPostPointerEventMessage(a2, v9, result);
  return result;
}
