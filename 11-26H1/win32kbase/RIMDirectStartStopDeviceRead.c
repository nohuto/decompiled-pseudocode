/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x140095B60
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140095B10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     RIMIsRawInputActive @ 0x1400961C4 (RIMIsRawInputActive.c)
 *     RIMHidValidExclusive @ 0x140096244 (RIMHidValidExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14018C880 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMApiSetIsRemoteConnection @ 0x1401C45C8 (RIMApiSetIsRemoteConnection.c)
 *     rimFakePnpRemoveComplete @ 0x14020B834 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1, __int64 a2, int a3)
{
  char v4; // bl
  bool v5; // di
  int v6; // edx
  int v7; // r8d
  int v8; // r14d
  _QWORD *v9; // rbp
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned int v14; // r8d
  int v15; // ecx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  char v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // eax
  char v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  int v34; // [rsp+A0h] [rbp+18h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v25) = v5;
    LOBYTE(v26) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      104,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v9 + 81) || *((_BYTE *)v9 + 82) || (unsigned int)RIMApiSetIsRemoteConnection() )
    {
      v8 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 19368),
          3,
          1,
          105,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v12 = v9[53];
      if ( v12 )
      {
        do
        {
          v13 = *(_QWORD *)(v12 + 40);
          v14 = RimDeviceTypeToRimInputType(v12, *(unsigned int *)(v12 + 48));
          if ( (v14 & 0x3C) != 0 )
          {
            v15 = *(_DWORD *)(v12 + 168);
            if ( (v15 & 0x2000) == 0
              && (v15 & 1) == 0
              && (v15 & 2) == 0
              && (v15 & 4) == 0
              && (v15 & 8) == 0
              && (v15 & 0x400) == 0
              && (v15 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v12 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v14)) )
            {
              v16 = *(_QWORD *)(v12 + 448);
              if ( v16 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v12) )
                {
                  if ( !*(_QWORD *)(v12 + 208) )
                  {
                    *(_DWORD *)(v12 + 168) |= 1u;
                    rimOnPnpArrived((__int64)v9, v12, (void *)0xFFFFFFFFFFFFFFFFLL);
                    if ( *(_QWORD *)(v12 + 208) )
                    {
                      if ( (*(_DWORD *)(v12 + 168) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3227LL);
                      }
                      *(_DWORD *)(v12 + 184) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v12 + 168) & 0x20000) != 0 )
                  {
                    if ( *(_DWORD *)(v16 + 24)
                      || (v17 = *(_DWORD *)(v16 + 32), v17 > (unsigned int)RIMHidValidExclusive(v16)) )
                    {
                      v34 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3242LL);
                    }
                  }
                  if ( *(_QWORD *)(v12 + 208) )
                  {
                    v27 = *(_DWORD *)(v12 + 184);
                    if ( (v27 & 0x80u) == 0 && (v27 & 0x100) == 0 && (v27 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v9, v12);
                  }
                }
              }
            }
          }
          v12 = v13;
        }
        while ( v13 );
      }
    }
    RIMUnlockExclusive((__int64)(v9 + 13));
    ObfDereferenceObject(v9);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v18 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 19368),
      4,
      1,
      106,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
