/*
 * XREFs of RIMResetPointerDevices @ 0x14002DBC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMEndAllActiveContacts @ 0x14002C860 (RIMEndAllActiveContacts.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMResetPointerDevices(__int64 a1, __int64 a2)
{
  int v2; // r14d
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // esi
  struct RawInputManagerObject *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 i; // rdi
  bool v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v23; // di
  bool v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
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
      152,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v10 >= 0 )
  {
    v11 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v11 + 81) || *((_BYTE *)v11 + 82) )
    {
      v10 = -1073741637;
      v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19336),
          3,
          1,
          153,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((char *)v11 + 760);
      for ( i = *((_QWORD *)v11 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
        {
          if ( v2 == 1 )
          {
            RIMSuppressAllActiveContacts(v11);
          }
          else
          {
            if ( v2 )
            {
              v10 = -1073741811;
              break;
            }
            RIMEndAllActiveContacts((__int64)v11, *(_QWORD *)(i + 456));
          }
        }
      }
      RIMUnlockExclusive((char *)v11 + 760, v14, v15);
    }
    RIMUnlockExclusive((char *)v11 + 104, v12, v13);
    ObfDereferenceObject(v11);
  }
  v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19336),
      4,
      1,
      154,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
