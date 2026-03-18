/*
 * XREFs of RIMGetSourceProcessId @ 0x14002CBA0
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x14002CB80 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMGetSourceProcessId(__int64 a1, __int64 a2, ULONG64 a3)
{
  bool v4; // si
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // r14d
  _BYTE *v11; // r13
  char *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  PVOID v16; // rsi
  char *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  void *v25; // rax
  bool v26; // si
  bool v27; // r15
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // si
  bool v32; // r15
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  PVOID v37; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+58h] [rbp-40h] BYREF
  int Src; // [rsp+B8h] [rbp+20h] BYREF

  v37 = 0LL;
  Object[0] = 0LL;
  Src = 0;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      142,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v37);
  if ( v10 >= 0 )
  {
    v11 = v37;
    v12 = (char *)v37 + 104;
    Object[1] = (char *)v37 + 104;
    RIMLockExclusive((char *)v37 + 104);
    if ( v11[81] )
    {
      v10 = -1073741637;
      v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v13);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 19336),
          3,
          1,
          143,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, Object);
      if ( v10 >= 0 )
      {
        v16 = Object[0];
        if ( Object[0] )
          v17 = (char *)Object[0] + 72;
        else
          v17 = 0LL;
        if ( *((_QWORD *)v17 + 46) )
        {
          v18 = W32GetUserSessionState(v15, v13);
          RIMLockExclusive(v18 + 56);
          v21 = *(_QWORD *)(*((_QWORD *)v17 + 46) + 88LL);
          if ( v21 )
            Src = *(_DWORD *)(v21 + 56);
          v22 = W32GetUserSessionState(v20, v19);
          RIMUnlockExclusive(v22 + 56, v23, v24);
        }
        v25 = (void *)a3;
        if ( a3 >= MmUserProbeAddress )
          v25 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v25, &Src, 4uLL);
        ObfDereferenceObject(v16);
      }
    }
    RIMUnlockExclusive(v12, v13, v14);
    ObfDereferenceObject(v11);
  }
  v31 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v31;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      *(_QWORD *)(v33 + 19336),
      4,
      1,
      144,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
