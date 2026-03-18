/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x14020611C
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1401A2A4C (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v8; // ebx
  int v9; // edx
  unsigned __int64 v10; // rcx
  char v11; // bp
  bool v12; // r14
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 result; // rax
  unsigned int v17; // edi
  __int64 v18; // rcx

  v8 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 313);
  v9 = a3[26];
  if ( a1[496] != v9 )
  {
    if ( --v9 )
    {
      if ( --v9 )
      {
        if ( --v9 )
        {
          if ( v9 == 1 )
            v8 = 32;
          else
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 336);
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
  v10 = (unsigned int)a3[27];
  if ( a1[497] != (_DWORD)v10 )
  {
    v10 = (unsigned int)(v10 - 2);
    if ( (_DWORD)v10 )
    {
      v10 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          v8 |= 0x800u;
        }
        else
        {
          v10 = (unsigned __int64)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v11 = 0;
          }
          v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (_DWORD)a3);
            LOBYTE(v14) = v12;
            LOBYTE(v15) = v11;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v15,
              v14,
              *(_QWORD *)(UserSessionState + 19368),
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
  if ( a1[499] != a3[29] || a1[500] != a3[30] )
    v8 |= 0x400u;
  result = (unsigned int)a3[31];
  if ( a1[501] != (_DWORD)result || (result = (unsigned int)a3[32], a1[502] != (_DWORD)result) )
    v8 |= 0x200u;
  v17 = v8 | 0x100;
  if ( !a4 )
    v17 = v8;
  if ( v17 )
  {
    result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 4176LL);
    if ( result )
    {
      result = ((__int64 (*)(void))result)();
      if ( (int)result >= 0 )
      {
        result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48) + 4184LL);
        if ( result )
          return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))result)(a2, 568LL, v17, 1LL);
      }
    }
  }
  return result;
}
