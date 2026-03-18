/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x14012C380
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x14012C2B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     RIMIsRawInputActive @ 0x1401172AC (RIMIsRawInputActive.c)
 *     RIMApiSetIsRemoteConnection @ 0x14012C31C (RIMApiSetIsRemoteConnection.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1401504F0 (RIMChildInputTypeIsVirtualized.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMHidValidExclusive @ 0x1401E6C08 (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1401ED134 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  int v8; // ebp
  char *v9; // rsi
  char *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // r8d
  int v16; // ecx
  __int64 v17; // rdi
  int v18; // eax
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      105,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = (char *)Object;
    v10 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v9[81] || v9[82] || (unsigned int)RIMApiSetIsRemoteConnection(v12, v11) )
    {
      v8 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 19336),
          3,
          1,
          106,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v13 = *((_QWORD *)v9 + 53);
      if ( v13 )
      {
        do
        {
          v14 = *(_QWORD *)(v13 + 40);
          v15 = RimDeviceTypeToRimInputType(v13, *(_DWORD *)(v13 + 48));
          if ( (v15 & 0x3C) != 0 )
          {
            v16 = *(_DWORD *)(v13 + 168);
            if ( (v16 & 0x2000) == 0
              && (v16 & 1) == 0
              && (v16 & 2) == 0
              && (v16 & 4) == 0
              && (v16 & 8) == 0
              && (v16 & 0x400) == 0
              && (v16 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v13 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v15)) )
            {
              v17 = *(_QWORD *)(v13 + 448);
              if ( v17 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v13) )
                {
                  if ( !*(_QWORD *)(v13 + 208) )
                  {
                    *(_DWORD *)(v13 + 168) |= 1u;
                    rimOnPnpArrived(v9, v13, -1LL);
                    if ( *(_QWORD *)(v13 + 208) )
                    {
                      if ( (*(_DWORD *)(v13 + 168) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3267LL);
                      }
                      *(_DWORD *)(v13 + 184) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v13 + 168) & 0x20000) != 0
                    && (*(_DWORD *)(v17 + 24) || *(_DWORD *)(v17 + 32) > (unsigned int)RIMHidValidExclusive(v17)) )
                  {
                    v31 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3282LL);
                  }
                  if ( *(_QWORD *)(v13 + 208) )
                  {
                    v18 = *(_DWORD *)(v13 + 184);
                    if ( (v18 & 0x80u) == 0 && (v18 & 0x100) == 0 && (v18 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v9, v13);
                  }
                }
              }
            }
          }
          v13 = v14;
        }
        while ( v14 );
        v10 = v9 + 104;
      }
    }
    RIMUnlockExclusive((__int64)v10);
    ObfDereferenceObject(v9);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19336),
      4,
      1,
      107,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
