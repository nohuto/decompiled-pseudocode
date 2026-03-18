/*
 * XREFs of RIMResetPointerDevices @ 0x14005EF00
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMEndAllActiveContacts @ 0x140130700 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1, int a2)
{
  bool v4; // bl
  bool v5; // di
  int v6; // edx
  int v7; // esi
  int v8; // r8d
  struct RawInputManagerObject *v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 i; // rdi
  bool v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  bool v23; // bp
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v20) = v5;
    LOBYTE(v21) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      151,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v7 >= 0 )
  {
    v9 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v9 + 81) || *((_BYTE *)v9 + 82) )
    {
      v7 = -1073741637;
      v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 19368),
          3,
          1,
          152,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)v9 + 760);
      for ( i = *((_QWORD *)v9 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
        {
          if ( a2 == 1 )
          {
            RIMSuppressAllActiveContacts(v9);
          }
          else
          {
            if ( a2 )
            {
              v7 = -1073741811;
              break;
            }
            RIMEndAllActiveContacts(v9);
          }
        }
      }
      RIMUnlockExclusive((__int64)v9 + 760);
    }
    RIMUnlockExclusive((__int64)v9 + 104);
    ObfDereferenceObject(v9);
  }
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v8);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 19368),
      4,
      1,
      153,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
