/*
 * XREFs of RIMOnTimerNotification @ 0x1400329F0
 * Callers:
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140031AA0 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnTimerNotification @ 0x1401D80C0 (NtRIMOnTimerNotification.c)
 * Callees:
 *     RIMEndAllStaleContacts @ 0x140031B08 (RIMEndAllStaleContacts.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *Handle)
{
  struct RawInputManagerObject *v2; // rbx
  void *v3; // rdx
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  bool v13; // si
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v27; // si
  bool v28; // bp
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER DueTime; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle, WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      72,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = -1073741816;
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
    if ( v9 >= 0 )
    {
      if ( *((_DWORD *)Object + 1) == 1 )
      {
        v2 = (struct RawInputManagerObject *)Object;
      }
      else
      {
        v9 = -1073741788;
        ObfDereferenceObject(Object);
      }
    }
    if ( v9 >= 0 )
    {
      RIMLockExclusive((char *)v2 + 104);
      if ( *((_BYTE *)v2 + 81) || *((_BYTE *)v2 + 82) )
      {
        v9 = -1073741637;
        v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
          LOBYTE(v30) = v28;
          LOBYTE(v31) = v27;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 19336),
            3,
            1,
            74,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
      }
      else
      {
        RIMLockExclusive((char *)v2 + 760);
        v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
          LOBYTE(v16) = v14;
          LOBYTE(v17) = v13;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(v15 + 19336),
            4,
            1,
            73,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
        RIMEndAllStaleContacts(v2);
        v18 = (void *)*((_QWORD *)v2 + 42);
        if ( *((_DWORD *)v2 + 116) )
        {
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v18, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          ZwCancelTimer(v18, 0LL);
          *((_DWORD *)v2 + 117) = 0;
        }
        RIMUnlockExclusive((char *)v2 + 760, v19, v20);
      }
      RIMUnlockExclusive((char *)v2 + 104, v10, v11);
      ObfDereferenceObject(v2);
    }
  }
  v21 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19336),
      4,
      1,
      75,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
