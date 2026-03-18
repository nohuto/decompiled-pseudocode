/*
 * XREFs of _PostTransformableMessageIL @ 0x14012A580
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140129E38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1401DCF30 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagQMSG *__fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v7; // esi
  int v9; // ebx
  struct tagTHREADINFO *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rbp
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // rbx
  const struct tagUIPI_INFO *v15; // r8
  const struct tagUIPI_INFO *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v23; // rax
  struct tagQMSG *result; // rax
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  int v26; // [rsp+38h] [rbp-60h]

  v7 = a2;
  if ( (unsigned int)(a2 - 992) > 8 )
  {
    v9 = a5;
  }
  else
  {
    v9 = a5;
    if ( (unsigned int)ValidateDDEConvPair(a3, a1) )
      v9 = 1;
  }
  if ( v7 == 274 && a3 == 61488 )
  {
    v10 = PtiCurrent((__int64)a1, a2);
    if ( (unsigned int)IAMThreadAccessGranted(v10) )
      v9 = 1;
  }
  v11 = 0;
  if ( (unsigned __int64)a1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !v9 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v14 = 0LL;
    if ( (_QWORD *)v12 != v14 )
    {
      if ( v7 == 717 )
        return 0LL;
      if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v12, a1, v7)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v7)
        && (v7 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v16 = (const struct tagUIPI_INFO *)(v12 + 864);
        }
        else
        {
          if ( *(_QWORD *)v12 == *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
          {
            v25 = 0x2000LL;
            v26 = 0;
          }
          else
          {
            v25 = *(_QWORD *)(v12 + 864);
            v26 = *(_DWORD *)(v12 + 872);
          }
          v16 = (const struct tagUIPI_INFO *)&v25;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 108), v16, v15) )
        {
          if ( v7 != 793
            || (v21 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v21 + 1584) != a1)
            || ((CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v18, v17, v19, v20)) == 0LL
              ? (v23 = 0LL)
              : (v23 = *CurrentThreadWin32Thread),
                *(_QWORD *)(v21 + 472) != *(_QWORD *)(v23 + 472)) )
          {
            EtwTraceUIPIMsgError(v14, v12, v7, a3, a4);
            UserSetLastError(5);
            return 0LL;
          }
        }
      }
    }
  }
  result = _PostTransformableMessageExtended(a1, v7, a3, a4, 0LL, 1);
  if ( result >= MmSystemRangeStart )
  {
    LOBYTE(v11) = result != 0LL;
    return (struct tagQMSG *)v11;
  }
  return result;
}
