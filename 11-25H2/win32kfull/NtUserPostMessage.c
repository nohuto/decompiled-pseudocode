/*
 * XREFs of NtUserPostMessage @ 0x1401421C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ForwardTouchMessage @ 0x1400CA82C (ForwardTouchMessage.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1401DCF30 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  __int16 *v9; // rcx
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rsi
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // ebp
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rcx
  const struct tagUIPI_INFO *v22; // r8
  const struct tagUIPI_INFO *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v30; // rax
  struct tagQMSG *v31; // rax
  __int64 v33; // [rsp+50h] [rbp-68h] BYREF
  int v34; // [rsp+58h] [rbp-60h]

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v10 = 0;
    goto LABEL_56;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = MessageTable;
    if ( (MessageTable[v4] & 0x2000) != 0 )
    {
      v10 = 0;
      v11 = 5;
      goto LABEL_55;
    }
  }
  v10 = 0;
  if ( a1 )
  {
    if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 )
    {
      v12 = ValidateHwnd(a1);
      if ( !v12 )
      {
        LOBYTE(v10) = (_DWORD)v4 == 993;
        goto LABEL_56;
      }
    }
    else
    {
      v12 = -1LL;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v13 = PtiCurrent((__int64)v9, v8);
      v10 = ForwardTouchMessage(v13, (struct tagWND *)v12, 0x240u, a3, a4, 1, 0LL, 0, 0LL);
      goto LABEL_56;
    }
    v11 = 1400;
LABEL_55:
    UserSetLastError(v11);
    goto LABEL_56;
  }
  if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
    || (unsigned int)(v4 - 577) <= 3
    || (unsigned int)IsPointerInputClientMessage((unsigned int)v4) )
  {
    v11 = 1002;
    goto LABEL_55;
  }
  v16 = 0;
  if ( (unsigned int)(v4 - 992) <= 8 )
    v16 = ValidateDDEConvPair(a3, v12) != 0;
  if ( (_DWORD)v4 == 274 && a3 == 61488 )
  {
    v17 = PtiCurrent(v15, v14);
    if ( (unsigned int)IAMThreadAccessGranted(v17) )
      v16 = 1;
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v16 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v20 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v20 = 0LL;
    if ( (_QWORD *)v18 != v20 )
    {
      if ( (_DWORD)v4 == 717 )
        goto LABEL_56;
      if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v18, (struct tagWND *)v12, v4)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
        && ((_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v23 = (const struct tagUIPI_INFO *)(v18 + 864);
        }
        else
        {
          if ( *(_QWORD *)v18 == *(_QWORD *)(W32GetUserGdiSessionState(v21) + 40) )
          {
            v33 = 0x2000LL;
            v34 = 0;
          }
          else
          {
            v33 = *(_QWORD *)(v18 + 864);
            v34 = *(_DWORD *)(v18 + 872);
          }
          v23 = (const struct tagUIPI_INFO *)&v33;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v20 + 108), v23, v22) )
        {
          if ( (_DWORD)v4 != 793
            || (v28 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v28 + 1584) != v12)
            || ((CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v25, v24, v26, v27)) == 0LL
              ? (v30 = 0LL)
              : (v30 = *CurrentThreadWin32Thread),
                *(_QWORD *)(v28 + 472) != *(_QWORD *)(v30 + 472)) )
          {
            EtwTraceUIPIMsgError(v20, v18, (unsigned int)v4, a3, a4);
            v11 = 5;
            goto LABEL_55;
          }
        }
      }
    }
  }
  v31 = _PostTransformableMessageExtended((struct tagWND *)v12, v4, a3, (__int64)a4, 0LL, 1);
  v9 = (__int16 *)MmSystemRangeStart;
  if ( v31 >= MmSystemRangeStart )
  {
    LOBYTE(v10) = v31 != 0LL;
    LODWORD(v31) = v10;
  }
  v10 = (int)v31;
LABEL_56:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
