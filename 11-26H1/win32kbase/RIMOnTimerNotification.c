/*
 * XREFs of RIMOnTimerNotification @ 0x140059D20
 * Callers:
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140059980 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnTimerNotification @ 0x1401FF210 (NtRIMOnTimerNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMEndAllStaleContacts @ 0x14005AA78 (RIMEndAllStaleContacts.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *Handle, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  int v5; // edx
  bool v6; // di
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  NTSTATUS v11; // edi
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  bool v16; // si
  bool v17; // bp
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  void *v21; // rcx
  bool v22; // bl
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v28; // si
  bool v29; // bp
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER DueTime; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = (int)WPP_GLOBAL_Control;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)Handle, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      71,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v11 = -1073741816;
  }
  else
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
    if ( v11 >= 0 )
    {
      if ( *((_DWORD *)Object + 1) == 1 )
      {
        v4 = Object;
      }
      else
      {
        v11 = -1073741788;
        ObfDereferenceObject(Object);
      }
    }
    if ( v11 >= 0 )
    {
      RIMLockExclusive(v4 + 13);
      if ( *((_BYTE *)v4 + 81) || *((_BYTE *)v4 + 82) )
      {
        v11 = -1073741637;
        v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 19368),
            3,
            1,
            73,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
      }
      else
      {
        RIMLockExclusive(v4 + 95);
        v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(v18 + 19368),
            4,
            1,
            72,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
        RIMEndAllStaleContacts(v4);
        v21 = (void *)v4[42];
        if ( *((_DWORD *)v4 + 116) )
        {
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v21, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
        else
        {
          ZwCancelTimer(v21, 0LL);
          *((_DWORD *)v4 + 117) = 0;
        }
        RIMUnlockExclusive(v4 + 95);
      }
      RIMUnlockExclusive(v4 + 13);
      ObfDereferenceObject(v4);
    }
  }
  v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, a3);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      4,
      1,
      74,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
