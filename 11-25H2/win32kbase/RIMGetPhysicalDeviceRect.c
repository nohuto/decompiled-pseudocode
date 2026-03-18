/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1401DB4D0
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1401D8050 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, ULONG64 a3)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edi
  _BYTE *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  PVOID v14; // rsi
  char *v15; // rcx
  void *v16; // rax
  bool v17; // r14
  bool v18; // r15
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // si
  bool v23; // r14
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // si
  bool v28; // r14
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v34; // [rsp+58h] [rbp-30h]
  PVOID v37; // [rsp+A8h] [rbp+20h] BYREF

  v37 = 0LL;
  Object = 0LL;
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
      138,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v37);
  if ( v10 >= 0 )
  {
    v11 = v37;
    v34 = (__int64)v37 + 104;
    RIMLockExclusive((__int64)v37 + 104);
    if ( v11[81] )
    {
      v10 = -1073741637;
      v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 19336),
          3,
          1,
          140,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v10 >= 0 )
      {
        v14 = Object;
        if ( Object )
          v15 = (char *)Object + 72;
        else
          v15 = 0LL;
        if ( (*((_DWORD *)v15 + 46) & 0x80u) == 0 )
        {
          v10 = -1073741637;
          v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
            LOBYTE(v20) = v18;
            LOBYTE(v21) = v17;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v20,
              *(_QWORD *)(v19 + 19336),
              3,
              1,
              139,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
          v11 = v37;
        }
        else
        {
          v16 = (void *)a3;
          if ( a3 >= MmUserProbeAddress )
            v16 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v16, (const void *)(*((_QWORD *)v15 + 57) + 140LL), 0x10uLL);
        }
        ObfDereferenceObject(v14);
      }
    }
    RIMUnlockExclusive(v34);
    ObfDereferenceObject(v11);
  }
  v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 19336),
      4,
      1,
      141,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
