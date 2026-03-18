/*
 * XREFs of RIMInjectInput @ 0x14015AA60
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  int v13; // r15d
  struct RawInputManagerObject *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  PVOID v17; // r13
  char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // rcx
  void *v22; // r9
  char v23; // si
  bool v24; // r12
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // si
  bool v29; // r12
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // si
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  PVOID v39; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-40h] BYREF

  v39 = 0LL;
  Object[0] = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      92,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v39);
  if ( v13 >= 0 )
  {
    v14 = (struct RawInputManagerObject *)v39;
    RIMLockExclusive((__int64)v39 + 104);
    if ( *((_BYTE *)v14 + 81) || *((_BYTE *)v14 + 82) )
    {
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v15);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 19336),
          3,
          1,
          95,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v13 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
      if ( v13 >= 0 )
      {
        v17 = Object[0];
        v18 = (char *)Object[0] + 72;
        if ( !Object[0] )
          v18 = 0LL;
        Object[1] = v18;
        if ( (*((_DWORD *)v18 + 42) & 0x2000) != 0 )
        {
          RIMLockExclusive((__int64)v14 + 760);
          *((_DWORD *)v18 + 60) = 0;
          v19 = *((_QWORD *)v18 + 55);
          v20 = *(unsigned __int16 *)(v19 + 44);
          if ( Size < (unsigned int)v20 )
            v20 = Size;
          *((_QWORD *)v18 + 31) = (unsigned int)v20;
          if ( a3 )
          {
            v22 = *(void **)(v19 + 24);
            if ( &a4[v20] < a4 || (unsigned __int64)&a4[v20] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            RtlCopyVolatileMemory(v22, a4, (unsigned int)v20);
          }
          else
          {
            v21 = *(char **)(v19 + 24);
            if ( a4 != v21 )
              memmove(v21, a4, (unsigned int)v20);
          }
          rimProcessDeviceBufferAndStartRead(v14, (struct RIMDEV *)v18, 1);
          RIMUnlockExclusive((__int64)v14 + 760);
        }
        else
        {
          v13 = -1073741811;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v23 = 0;
          }
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v27,
              v26,
              *(_QWORD *)(v25 + 19336),
              3,
              1,
              94,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
        }
        ObfDereferenceObject(v17);
      }
    }
    RIMUnlockExclusive((__int64)v14 + 104);
    ObfDereferenceObject(v14);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19336),
      4,
      1,
      96,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
